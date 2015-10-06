(function ($) {
    ////////////////////////////
    // Site Header
    ////////////////////////////
    var Header = React.createClass({
        getInitialState: function() {
            return {
              searchExpanded: false,
              navExpanded: false,
              settingsExpanded: false,
              flagStatusExpanded: false
            };
        },


        // Navigation State
        closeNav: function() {
            this.setState({navExpanded: false});
        },

        openNav: function() {
            this.setState({navExpanded: true});
        },

        // Search States
        closeSearch: function() {
            this.setState({searchExpanded: false});
        },

        openSearch: function() {
            this.setState({searchExpanded: true});
        },

        // Flag Status States
        closeFlagStatus: function() {
            this.setState({flagStatusExpanded: false});
        },

        openFlagStatus: function() {
            this.setState({flagStatusExpanded: true});
        },

        // Settings States
        closeSettings: function() {
            this.setState({settingsExpanded: false});
        },

        openSettings: function() {
            this.setState({settingsExpanded: true});
        },

        render: function() {
            // Handle hiding the logo when search is active
            var hideLogoOnSearch = this.state.searchExpanded ?
                                   // Hide
                                   "":
                                   // Show
                                   <a id="logo-container" href='/'>
                                       <img id="main-logo" src="/sites/all/themes/hickenlooper/images/logo.svg" alt="Governor Hickenlooper Logo" />
                                   </a>;
            return (
                <div className="container">
                    <ScreenDim active={this.state.searchExpanded}
                               closeSearch={this.closeSearch}
                    />
                <header id="main">
                            {hideLogoOnSearch}
                            <HeaderTools navExpanded={this.state.navExpanded}
                                         openNav={this.openNav}
                                         closeNav={this.closeNav}
                                         searchExpanded={this.state.searchExpanded}
                                         openSearch={this.openSearch}
                                         closeSearch={this.closeSearch}
                                         flagStatusExpanded={this.state.flagStatusExpanded}
                                         openFlagStatus={this.openFlagStatus}
                                         closeFlagStatus={this.closeFlagStatus}
                                         settingsExpanded={this.state.settingsExpanded}
                                         openSettings={this.openSettings}
                                         closeSettings={this.closeSettings}
                             />
                    </header>

                    <MainNav openNav={this.openNav}
                             closeNav={this.closeNav}
                             active={this.state.navExpanded}
                    />

                    <FlagStatusDrawer expand={this.openFlagStatus}
                                      collapse={this.closeFlagStatus}
                                      active={this.state.flagStatusExpanded}
                    >
                        <h2><i className="fa fa-exclamation-triangle "></i><a href="#">Flags at half mass in remberance of memorial day</a></h2>
                        <div>
                            <a href="#" className="btn">Sign Up for Flag Updates</a>
                            <a href="#" className="btn">Buy a flag</a>
                        </div>
                    </FlagStatusDrawer>
                    <SettingsDrawer expand={this.openSettings}
                                      collapse={this.closeSettings}
                                      active={this.state.settingsExpanded}
                    >
                        <header>
                            <h2>Settings</h2>
                        </header>
                        <div>
                            <FontSizeControls>
                            </FontSizeControls>

                            <FontFamilyControls>
                            </FontFamilyControls>

                             <span>
                                Language:
                                <a className="btn small">Translate</a>
                            </span>
                        </div>
                    </SettingsDrawer>
                </div>
            )
        }
    });
    var HeaderTools = React.createClass({
        render: function() {
            return (
                <div className="tools">
                    <Search expanded={this.props.searchExpanded}
                            expand={this.props.openSearch}
                            collapse={this.props.closeSearch}
                    />
                    <FlagStatus active={this.props.flagStatusExpanded}
                                openFlagStatus={this.props.openFlagStatus}
                                closeFlagStatus={this.props.closeFlagStatus}
                    />
                    <SettingsBtn openSettings={this.props.openSettings}
                                 closeSettings={this.props.closeSettings}
                                 active={this.props.settingsExpanded}
                    />
                    <MainNavBtn openNav={this.props.openNav}
                                closeNav={this.props.closeNav}
                                active={this.props.navExpanded}
                    />
                </div>
            )
        }
    });

    ////////////////////////////
    // Search
    ////////////////////////////
    var Search = React.createClass({

        // Initial Setup
        getInitialState: function() {
            return {
              expanded: this.props.expanded,
              searching: false,
              searchQuery: ''
            };
        },

        // Actions
        updateSearchQuery: function(e) {
          this.setState({searchQuery: e.target.value});
          this.sendSearch();
        },
        sendSearch: function() {
            $.getJSON("http://localhost:1337/project", function(data){
                var results;

                // DEFINETELY REDO THIS WHEN ITS NOT 2 AM :)
                $.each(data, function(index, value) {
                    results += "<div>"
                            + "<img src='https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/red-sunset.jpg'/>"
                            + "<h3>" + value.name + "</h3>"
                            + "<p>" + value.description + "</p>"
                            + "</div>";
                });
                $(".search .drawer").html(results);
            });
        },
        // Events
        handleKeyPress: function(e) {
            if (e.keyCode === 27) {
                this.props.collapse();
            }
        },
        // Templates
        renderExpanded: function(classes) {
             var searchQuery = this.state.searchQuery,
                 drawerContent = searchQuery ? "Searching For: " + searchQuery : 'Start typing to search';

             return (
                <a className={classes} onKeyDown={this.handleKeyPress}>
                    <i className="fa fa-search"></i>
                    <SearchForm searchQuery={this.state.searchQuery}
                                onChange={this.updateSearchQuery}
                    />
                    <i className="fa fa-times close-search" onClick={this.props.collapse}></i>
                </a>
            )
        },
        renderCollapsed: function(classes) {
            var query = this.state.searchQuery ?
                <span className="query">{this.state.searchQuery}</span> :
                <span className="query">Search</span> ;
            return (
                <a onClick={this.props.expand}  className={classes}>
                  <i className="fa fa-search"></i>
                  {query}
                </a>
            )
        },

        // Render
        render: function() {
            var isExpanded = this.props.expanded ? "expanded" : "",
                classes = "search " + isExpanded;

            if (this.props.expanded) {
                return this.renderExpanded(classes);
            } else {
                return this.renderCollapsed(classes);
            }
        }
    });

    var SearchForm = React.createClass({
        componentDidMount: function() {
            React.findDOMNode(this.refs.searchInput).focus();
        },
        render: function() {
           var drawerContent = this.props.searchQuery ? "Searching for: " + this.props.searchQuery : "Start typing a keyword to search... Press 'esc' or click elsewhere to exit search";
             return (
                 <div>
                      <input ref="searchInput"
                             onChange={this.props.onChange}
                             value={this.props.searchQuery}
                      />
                      <SearchDrawer>
                           {drawerContent}
                      </SearchDrawer>
                 </div>
             );
        }
    });

    var SearchDrawer = React.createClass({
        render: function() {
            return (
                <div className="drawer">
                    {this.props.children}
                </div>
            );
        }
    });

    var ScreenDim = React.createClass({
        render: function() {
            var active = this.props.active ? "active" : "",
                classes = "screen-dim " + active;
            return (
                <div onClick={this.props.closeSearch} className={classes}>
                </div>
            );
        }
    });

    ////////////////////////////
    // Flag Status
    ////////////////////////////
    var FlagStatus = React.createClass({
        render: function() {
            return (
                <a className="flag-status" onClick={this.props.openFlagStatus} onMouseLeave={this.props.closeFlagStatus}>
                    <div>
                        <img className="flag-icon" src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/Flag_of_the_United_States.svg" />
                        Full
                    </div>
                    <div>
                        <img className="flag-icon" src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/co-flag.svg" />
                        Full
                    </div>
                </a>
            )
        }
    });

    var FlagStatusDrawer = React.createClass({
        render: function() {
            var expanded = this.props.active ? "active" : "",
            classes = "flag-status-drawer " + expanded;
            return (
                <div className={classes} onMouseOver={this.props.expand}  onMouseLeave={this.props.collapse}>
                    {this.props.children}
                </div>
            )
        }
    });
    ////////////////////////////
    // Settings
    ////////////////////////////
    var SettingsBtn = React.createClass({
        render: function(){
           var active = this.props.active ? "active" : "",
               classes = "settings-btn " + active;
           return(
                <a className={classes} onClick={this.props.openSettings} onMouseLeave={this.props.closeSettings}>
                    <i className="fa fa-gear"></i>
                </a>
           )
        }
    });
    var SettingsDrawer = React.createClass({
        render: function(){
            var expanded = this.props.active ? "active" : "",
            classes = "settings-drawer " + expanded;
            return (
                <div className={classes} onMouseOver={this.props.expand}  onMouseLeave={this.props.collapse}>
                    {this.props.children}
                </div>
            )
        }
    });
    var FontSizeControls = React.createClass({
        setActive: function(btn) {
           this.setState({active: btn});
        },
        smallFont: function() {
           document.body.style.fontSize = "1em";
           this.setActive(this.refs.smallFont)
        },
        mediumFont: function() {
           document.body.style.fontSize = "1.15em";
           this.setActive(this.refs.mediumFont)
        },
        largeFont: function() {
           document.body.style.fontSize = "1.4em";
           this.setActive(this.refs.largeFont)
        },
        render: function() {
           var classes = "btn small";
           return (
                <span>
                    Text Size:
                    <a className={classes + " active"} onClick={this.smallFont} ref="smallFont">
                        <i className="fa fa-font"></i>
                    </a>
                    <a className={classes} onClick={this.mediumFont} ref="mediumFont">
                        <i className="fa fa-font fa-lg"></i>
                    </a>
                    <a className={classes} onClick={this.largeFont} ref="largeFont">
                        <i className="fa fa-font fa-2x"></i>
                    </a>
                </span>
           );
        }
    });
    var FontFamilyControls = React.createClass({
        getInitialState: function() {
         return {
             fontFamily: "Museo Sans"
         }
        },
        setDefault: function() {
           this.setState({fontFamily: "Museo Sans"});
           $("*").not("i.fa").css({"font-family": "Museo Sans"});
        },
        setDyslexic: function() {
           this.setState({fontFamily: "Open Dyslexic"});
           $("*").not("i.fa").css({"font-family": "open-dyslexic"});
        },
        render: function() {
           var classes = "btn small";

            return (
                <span>
                    Font:
                    <a className={classes + " active"} onClick={this.setDefault}>Default</a>
                    <a className={classes} onClick={this.setDyslexic}>OpenDyslexic</a>
                </span>
            );
        }
    });

    ////////////////////////////
    // Main Navigation
    ////////////////////////////
    var MainNavBtn = React.createClass({
        render: function() {
            var active = this.props.active ? "active" : "",
                classes = "main-nav-btn " + active;
            return (
                <a className={classes} onMouseOver={this.props.openNav} onMouseLeave={this.props.closeNav}>
                    <i className="fa fa-th"></i>
                    <span className="query">Menu</span>
                </a>
            )
        }
    });
    var MainNav = React.createClass({
        getInitialState: function() {
                return {
                    menuData: []
                }
        },
        componentDidMount: function() {
            $.get("/api/menu/main-menu", function(data){
                this.setState({menuData: data});
            }.bind(this));
        },
        render: function(){
            var classes = this.props.active ? "active" : "";
            return(
                <nav id="main-nav" className={classes} onMouseOver={this.props.openNav} onMouseLeave={this.props.closeNav} >
                    <aside className="featured-items">
                       <div>
                            <img src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/hick-about-1.jpg" />
                       </div>
                       <div>
                            <img src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/garcia-about.jpg" />
                       </div>
                    </aside>
                    <section>
                        <Menu items={this.state.menuData}/>
                        <SocialIcons />
                    </section>
                </nav>
            )
        }
    });

    var Menu = React.createClass({
        render: function() {
            var arr = [],
                items = this.props.items.tree;

            // Take the Drupal returned Menu tree and push the objects into an array
            for (var prop in items) {
                arr.push(items[prop]);
            }

            return (
                <ul className="clean-accordion">
                    {
                        arr.map(function(item){
                            return <MenuItem title={item.link.title} link={item.link.href} />
                        })
                     }
                </ul>
            );
        }
    });

    var MenuItem = React.createClass({
        render: function() {
            return (
                <a href={this.props.link}>
                    <li>
                        <span className="nav-item-title">
                            {this.props.title}
                        </span>
                    </li>
                </a>
            );
        }
    });


    var SocialIcons = React.createClass({
        render: function(){
            return (
                <div className="social-icons light">
                    <a href="#">
                        <i className="fa fa-twitter"></i>
                    </a>
                    <a href="#">
                      <i className="fa fa-facebook"></i>
                    </a>
                    <a href="#">
                      <i className="fa fa-instagram"></i>
                    </a>
                </div>
            );
        }
    });

    ////////////////////////////
    // Render
    ////////////////////////////
    var headerRender = document.getElementById("header-render");

    React.render(
    <Header/>
    , headerRender);

}(jQuery));

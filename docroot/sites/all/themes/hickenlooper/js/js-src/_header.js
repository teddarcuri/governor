(function ($) {
    ////////////////////////////
    // Site Header
    ////////////////////////////
    var Header = React.createClass({displayName: "Header",
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
                                   React.createElement("a", {id: "logo-container", href: "/"}, 
                                       React.createElement("img", {id: "main-logo", src: "/sites/all/themes/hickenlooper/images/logo.svg", alt: "Governor Hickenlooper Logo"})
                                   );
            return (
                React.createElement("div", {className: "container"}, 
                    React.createElement(ScreenDim, {active: this.state.searchExpanded, 
                               closeSearch: this.closeSearch}
                    ), 
                React.createElement("header", {id: "main"}, 
                            hideLogoOnSearch, 
                            React.createElement(HeaderTools, {navExpanded: this.state.navExpanded, 
                                         openNav: this.openNav, 
                                         closeNav: this.closeNav, 
                                         searchExpanded: this.state.searchExpanded, 
                                         openSearch: this.openSearch, 
                                         closeSearch: this.closeSearch, 
                                         flagStatusExpanded: this.state.flagStatusExpanded, 
                                         openFlagStatus: this.openFlagStatus, 
                                         closeFlagStatus: this.closeFlagStatus, 
                                         settingsExpanded: this.state.settingsExpanded, 
                                         openSettings: this.openSettings, 
                                         closeSettings: this.closeSettings}
                             )
                    ), 

                    React.createElement(MainNav, {openNav: this.openNav, 
                             closeNav: this.closeNav, 
                             active: this.state.navExpanded}
                    ), 

                    React.createElement(FlagStatusDrawer, {expand: this.openFlagStatus, 
                                      collapse: this.closeFlagStatus, 
                                      active: this.state.flagStatusExpanded
                    }, 
                        React.createElement("h2", null, React.createElement("i", {className: "fa fa-exclamation-triangle "}), React.createElement("a", {href: "#"}, "Flags at half mass in remberance of memorial day")), 
                        React.createElement("div", null, 
                            React.createElement("a", {href: "#", className: "btn"}, "Sign Up for Flag Updates"), 
                            React.createElement("a", {href: "#", className: "btn"}, "Buy a flag")
                        )
                    ), 
                    React.createElement(SettingsDrawer, {expand: this.openSettings, 
                                      collapse: this.closeSettings, 
                                      active: this.state.settingsExpanded
                    }, 
                        React.createElement("header", null, 
                            React.createElement("h2", null, "Settings")
                        ), 
                        React.createElement("div", null, 
                            React.createElement(FontSizeControls, null
                            ), 

                            React.createElement(FontFamilyControls, null
                            ), 

                             React.createElement("span", null, 
                                "Language:", 
                                React.createElement("a", {className: "btn small"}, "Translate")
                            )
                        )
                    )
                )
            )
        }
    });
    var HeaderTools = React.createClass({displayName: "HeaderTools",
        render: function() {
            return (
                React.createElement("div", {className: "tools"}, 
                    React.createElement(Search, {expanded: this.props.searchExpanded, 
                            expand: this.props.openSearch, 
                            collapse: this.props.closeSearch}
                    ), 
                    React.createElement(FlagStatus, {active: this.props.flagStatusExpanded, 
                                openFlagStatus: this.props.openFlagStatus, 
                                closeFlagStatus: this.props.closeFlagStatus}
                    ), 
                    React.createElement(SettingsBtn, {openSettings: this.props.openSettings, 
                                 closeSettings: this.props.closeSettings, 
                                 active: this.props.settingsExpanded}
                    ), 
                    React.createElement(MainNavBtn, {openNav: this.props.openNav, 
                                closeNav: this.props.closeNav, 
                                active: this.props.navExpanded}
                    )
                )
            )
        }
    });

    ////////////////////////////
    // Search
    ////////////////////////////
    var Search = React.createClass({displayName: "Search",

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
                React.createElement("a", {className: classes, onKeyDown: this.handleKeyPress}, 
                    React.createElement("i", {className: "fa fa-search"}), 
                    React.createElement(SearchForm, {searchQuery: this.state.searchQuery, 
                                onChange: this.updateSearchQuery}
                    ), 
                    React.createElement("i", {className: "fa fa-times close-search", onClick: this.props.collapse})
                )
            )
        },
        renderCollapsed: function(classes) {
            var query = this.state.searchQuery ?
                React.createElement("span", {className: "query"}, this.state.searchQuery) :
                React.createElement("span", {className: "query"}, "Search") ;
            return (
                React.createElement("a", {onClick: this.props.expand, className: classes}, 
                  React.createElement("i", {className: "fa fa-search"}), 
                  query
                )
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

    var SearchForm = React.createClass({displayName: "SearchForm",
        componentDidMount: function() {
            React.findDOMNode(this.refs.searchInput).focus();
        },
        render: function() {
           var drawerContent = this.props.searchQuery ? "Searching for: " + this.props.searchQuery : "Start typing a keyword to search... Press 'esc' or click elsewhere to exit search";
             return (
                 React.createElement("div", null, 
                      React.createElement("input", {ref: "searchInput", 
                             onChange: this.props.onChange, 
                             value: this.props.searchQuery}
                      ), 
                      React.createElement(SearchDrawer, null, 
                           drawerContent
                      )
                 )
             );
        }
    });

    var SearchDrawer = React.createClass({displayName: "SearchDrawer",
        render: function() {
            return (
                React.createElement("div", {className: "drawer"}, 
                    this.props.children
                )
            );
        }
    });

    var ScreenDim = React.createClass({displayName: "ScreenDim",
        render: function() {
            var active = this.props.active ? "active" : "",
                classes = "screen-dim " + active;
            return (
                React.createElement("div", {onClick: this.props.closeSearch, className: classes}
                )
            );
        }
    });

    ////////////////////////////
    // Flag Status
    ////////////////////////////
    var FlagStatus = React.createClass({displayName: "FlagStatus",
        render: function() {
            return (
                React.createElement("a", {className: "flag-status", onClick: this.props.openFlagStatus, onMouseLeave: this.props.closeFlagStatus}, 
                    React.createElement("div", null, 
                        React.createElement("img", {className: "flag-icon", src: "https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/Flag_of_the_United_States.svg"}), 
                        "Full"
                    ), 
                    React.createElement("div", null, 
                        React.createElement("img", {className: "flag-icon", src: "https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/co-flag.svg"}), 
                        "Full"
                    )
                )
            )
        }
    });

    var FlagStatusDrawer = React.createClass({displayName: "FlagStatusDrawer",
        render: function() {
            var expanded = this.props.active ? "active" : "",
            classes = "flag-status-drawer " + expanded;
            return (
                React.createElement("div", {className: classes, onMouseOver: this.props.expand, onMouseLeave: this.props.collapse}, 
                    this.props.children
                )
            )
        }
    });
    ////////////////////////////
    // Settings
    ////////////////////////////
    var SettingsBtn = React.createClass({displayName: "SettingsBtn",
        render: function(){
           var active = this.props.active ? "active" : "",
               classes = "settings-btn " + active;
           return(
                React.createElement("a", {className: classes, onClick: this.props.openSettings, onMouseLeave: this.props.closeSettings}, 
                    React.createElement("i", {className: "fa fa-gear"})
                )
           )
        }
    });
    var SettingsDrawer = React.createClass({displayName: "SettingsDrawer",
        render: function(){
            var expanded = this.props.active ? "active" : "",
            classes = "settings-drawer " + expanded;
            return (
                React.createElement("div", {className: classes, onMouseOver: this.props.expand, onMouseLeave: this.props.collapse}, 
                    this.props.children
                )
            )
        }
    });
    var FontSizeControls = React.createClass({displayName: "FontSizeControls",
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
                React.createElement("span", null, 
                    "Text Size:", 
                    React.createElement("a", {className: classes + " active", onClick: this.smallFont, ref: "smallFont"}, 
                        React.createElement("i", {className: "fa fa-font"})
                    ), 
                    React.createElement("a", {className: classes, onClick: this.mediumFont, ref: "mediumFont"}, 
                        React.createElement("i", {className: "fa fa-font fa-lg"})
                    ), 
                    React.createElement("a", {className: classes, onClick: this.largeFont, ref: "largeFont"}, 
                        React.createElement("i", {className: "fa fa-font fa-2x"})
                    )
                )
           );
        }
    });
    var FontFamilyControls = React.createClass({displayName: "FontFamilyControls",
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
                React.createElement("span", null, 
                    "Font:", 
                    React.createElement("a", {className: classes + " active", onClick: this.setDefault}, "Default"), 
                    React.createElement("a", {className: classes, onClick: this.setDyslexic}, "OpenDyslexic")
                )
            );
        }
    });

    ////////////////////////////
    // Main Navigation
    ////////////////////////////
    var MainNavBtn = React.createClass({displayName: "MainNavBtn",
        render: function() {
            var active = this.props.active ? "active" : "",
                classes = "main-nav-btn " + active;
            return (
                React.createElement("a", {className: classes, onMouseOver: this.props.openNav, onMouseLeave: this.props.closeNav}, 
                    React.createElement("i", {className: "fa fa-th"}), 
                    React.createElement("span", {className: "query"}, "Menu")
                )
            )
        }
    });
    var MainNav = React.createClass({displayName: "MainNav",
        getInitialState: function() {
                return {
                    menuData: []
                }
        },
        componentDidMount: function() {
            $.get("/api/menu/main-menu.json", function(data){
                this.setState({menuData: data});
            }.bind(this));
        },
        render: function(){
            var classes = this.props.active ? "active" : "";
            return(
                React.createElement("nav", {id: "main-nav", className: classes, onMouseOver: this.props.openNav, onMouseLeave: this.props.closeNav}, 
                    React.createElement("aside", {className: "featured-items"}, 
                       React.createElement("div", null, 
                            React.createElement("img", {src: "https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/hick-about-1.jpg"})
                       ), 
                       React.createElement("div", null, 
                            React.createElement("img", {src: "https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/garcia-about.jpg"})
                       )
                    ), 
                    React.createElement("section", null, 
                        React.createElement(Menu, {items: this.state.menuData}), 
                        React.createElement(SocialIcons, null)
                    )
                )
            )
        }
    });

    var Menu = React.createClass({displayName: "Menu",
        render: function() {
            var arr = [],
                items = this.props.items.tree;

            // Take the Drupal returned Menu tree and push the objects into an array
            for (var prop in items) {
                arr.push(items[prop]);
            }

            return (
                React.createElement("ul", {className: "clean-accordion"}, 
                    
                        arr.map(function(item){
                            return React.createElement(MenuItem, {title: item.link.title, link: item.link.href})
                        })
                     
                )
            );
        }
    });

    var MenuItem = React.createClass({displayName: "MenuItem",
        render: function() {
            return (
                React.createElement("a", {href: this.props.link}, 
                    React.createElement("li", null, 
                        React.createElement("span", {className: "nav-item-title"}, 
                            this.props.title
                        )
                    )
                )
            );
        }
    });

    var SocialIcons = React.createClass({displayName: "SocialIcons",
        render: function(){
            return (
                React.createElement("div", {className: "social-icons light"}, 
                    React.createElement("a", {href: "#"}, 
                        React.createElement("i", {className: "fa fa-twitter"})
                    ), 
                    React.createElement("a", {href: "#"}, 
                      React.createElement("i", {className: "fa fa-facebook"})
                    ), 
                    React.createElement("a", {href: "#"}, 
                      React.createElement("i", {className: "fa fa-instagram"})
                    )
                )
            );
        }
    });

    ////////////////////////////
    // Render
    ////////////////////////////
    var headerRender = document.getElementById("header-render");

    React.render(
    React.createElement(Header, null)
    , headerRender);

}(jQuery));

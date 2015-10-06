<!-- Hero/Slide show -->

<div class="hero">
    <div class="slideshow-bg">
        <img src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/Black-Canyon-3.jpg" alt="" />
        <img src="https://upload.wikimedia.org/wikipedia/commons/e/e7/Governor_John_Hickenlooper.jpg" alt="" />
        <img src="http://images1.westword.com/imager/john-hickenlooper-joined-the-string-cheese/u/original/6152716/10241396.0.jpg" alt="" />
    </div>

    <div class="slideshow">
        <div class="slide gov">
            <div class="container flex">
                <header>
                    <h2>
                        <span class="welcome-msg">Welcome to the Offical Site of</span>
                        <span>Governor</span>
                        John Hickenlooper
                    </h2>
                </header>
                <aside>
                    <img src="<?php echo $GLOBALS['theme_path'] ?>/images/hickenlooper_portrait_blue_shirt_left.png" alt="" />
                </aside>
            </div>
        </div>

        <div class="slide flex">
            <div class="container">
                <section>
                    <h2>John wins intense arm wrestling match with Joe Biden!</h2>
                    <p>
                        Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
                    </p>
                    <div class="btn">
                        Read more!
                    </div>
                </section>
            </div>
        </div>

        <div class="slide flex">
            <div class="container">
                <section>
                    <h2>Hick Haps!</h2>
                    <p>
                        Wow Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
                    </p>
                    <div class="btn">
                        Read more!
                    </div>
                </section>
            </div>
        </div>
    </div>
</div>

<!-- Goals -->
<div class="goals">
        <div class="container">
            <header>
                <h2>Governor's Goals</h2>
            </header>
            <div class="goals-wall">
                <ul>
                    <li data-contenttype="image" data-href="<?php echo $GLOBALS['theme_path'] ?>/images/icons/goals/health.svg">
                         <img src="<?php echo $GLOBALS['theme_path'] ?>/images/icons/goals/health.svg" />
                         <h4>Health</h4>
                    </li>
                    <li data-contenttype="image" data-href="<?php echo $GLOBALS['theme_path'] ?>/images/icons/goals/infrastructure.svg">
                         <img src="<?php echo $GLOBALS['theme_path'] ?>/images/icons/goals/infrastructure.svg" />
                         <h4>Economic Development <br/>Infrastructure</h4>
                    </li>
                    <li data-contenttype="image" data-href="<?php echo $GLOBALS['theme_path'] ?>/images/icons/goals/energy.svg">
                         <img src="<?php echo $GLOBALS['theme_path'] ?>/images/icons/goals/energy.svg" />
                         <h4>Energy/Environment</h4>
                    </li>
                    <li data-contenttype="image" data-href="<?php echo $GLOBALS['theme_path'] ?>/images/icons/goals/education.svg">
                         <img src="<?php echo $GLOBALS['theme_path'] ?>/images/icons/goals/education.svg" />
                         <h4>Workforce/Education</h4>
                    </li>
                    <li data-contenttype="image" data-href="<?php echo $GLOBALS['theme_path'] ?>/images/icons/goals/government.svg">
                         <img src="<?php echo $GLOBALS['theme_path'] ?>/images/icons/goals/government.svg" />
                         <h4>Government Services</h4>
                    </li>
                </ul>
            </div>
        </div>
</div>

<!-- Main Panel Area -->
<div class="panel-area">

    <!-- Main Content -->
    <div class="main-content">
        <div class="container">

            <div class="container">
                <section class="half">
                    <h2>
                        Something!
                    </h2>
                    <p>
                        Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
                    </p>
                </section>

                <section class="half">
                    <iframe width="560" height="315" src="https://www.youtube.com/embed/f0q-vf8LrE8" frameborder="0" allowfullscreen></iframe>
                </section>
            </div>

            <div class="container">
                <section class="third">
                    <h3>Little Heading</h3>
                    <ul class="list">
                        <a href="#"><li>Lorem</li></a>
                        <a href="#"><li>Ipsum</li></a>
                        <a href="#"><li>Planta</li></a>
                        <a href="#"><li>Delset</li></a>
                        <a href="#"><li>Polouis</li></a>
                        <a href="#"><li>Lameritn</li></a>
                    </ul>
                </section>
                <section class="third">
                    <h3>Little Heading</h3>
                    <ul class="list">
                        <a href="#"><li>Lorem</li></a>
                        <a href="#"><li>Ipsum</li></a>
                        <a href="#"><li>Planta</li></a>
                        <a href="#"><li>Delset</li></a>
                        <a href="#"><li>Polouis</li></a>
                        <a href="#"><li>Lameritn</li></a>
                    </ul>
                </section>
                <section class="third">
                    <img src="https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/red-sunset.jpg" alt="" />
                </section>
            </div>

            <section class="sidebar-l">
                <section>
                    <h2>What's New</h2>
                    <?php
                        for ($i=0; $i < 5; $i++) {
                            echo "
                            <div class='news-tile'>
                                <img src='https://s3-us-west-2.amazonaws.com/s.cdpn.io/166133/red-sunset.jpg' />
                                <div class='content'>
                                    <a href='#'><h3>Clickable Title Making it long</h3></a>
                                    <span class='date'>
                                        written: 05/11/12
                                    </span>

                                    <div class='tags'>
                                        <span>News</span>
                                        <span class='alert'>Alert</span>
                                        <span class='proclomation'>Proclomation</span>
                                    </div>
                                </div>
                            </div>";
                        }
                    ?>
                </section>
                <aside>
                    <?php include $GLOBALS['theme_path'] . "/templates/includes/text-to-style.inc" ?>
                </aside>
            </section>

            <section class="full">
                <?php include $GLOBALS['theme_path'] . "/templates/includes/text-to-style.inc" ?>
            </section>
        </div>
    </div>
</div>

<?php

	$username = "username";
	$password = "password";
	$hostname = "localhost";
	
	$dbhandle = mysql_connect($hostname, $username, $password) or die("Unable to connect to MySQL");
	$selected = mysql_select_db("dropdownvalues", $dbhandle) or die("Could not select examples");
	$choice = mysql_real_escape_string($_GET['choice']);
	
	$query = "SELECT * FROM dd_vals WHERE category='$choice'";
	
	$result = mysql_query($query);
		
	while ($row = mysql_fetch_array($result)) {
   		echo "<option>" . $row{'dd_val'} . "</option>";
	}
?>


<!--[if lt IE 9 ]> <html class="lt_ie9"> <![endif]-->
<!--[if IE 9 ]>    <html class="ie9"> <![endif]-->
<!--[if (gt IE 9)|!(IE)]><!--><html lang="en" class=""><!--<![endif]-->
<head>
	<meta charset="utf-8">

    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <meta name="description" content="">
    <meta name="author" content="">

	<title>Ticketing</title>

	<!-- Standard Favicon -->
	<link rel="icon" type="image/x-icon" href="images//favicon.ico" />
	
	<!-- For iPhone 4 Retina display: -->
	<link rel="apple-touch-icon-precomposed" sizes="114x114" href="images//apple-touch-icon-114x114-precomposed.png">
	
	<!-- For iPad: -->
	<link rel="apple-touch-icon-precomposed" sizes="72x72" href="images//apple-touch-icon-72x72-precomposed.png">
	
	<!-- For iPhone: -->
	<link rel="apple-touch-icon-precomposed" href="images//apple-touch-icon-57x57-precomposed.png">
	
	<!-- Library - Google Font Familys -->
	<link href="https://fonts.googleapis.com/css?family=Libre+Baskerville:400,400i,700" rel="stylesheet"> 
	<link href="https://fonts.googleapis.com/css?family=Kaushan+Script" rel="stylesheet"> 
	<link href="https://fonts.googleapis.com/css?family=Nixie+One" rel="stylesheet">
	<link href="https://fonts.googleapis.com/css?family=Lato" rel="stylesheet">
	<link href="https://fonts.googleapis.com/css?family=Montserrat:400,700" rel="stylesheet">
		
	<!-- Library -->
    <link rel="stylesheet" type="text/css" href="libraries/lib.css">
	
	<!-- Custom - Theme CSS -->
	<link rel="stylesheet" type="text/css" href="css/plugins.css">			
	<link rel="stylesheet" type="text/css" href="css/navigation-menu.css">
	<link rel="stylesheet" type="text/css" href="css/shortcode.css">
	<link rel="stylesheet" type="text/css" href="style.css">
	
	<!--[if lt IE 9]>
		<script src="js/html5/respond.min.js"></script>
    <![endif]-->
	
</head>

<body data-offset="200" data-spy="scroll" data-target=".ow-navigation">
	<div class="main-container">
		<!-- Loader -->
		<div id="site-loader" class="load-complete">
			<div class="loader">
				<div class="loader-inner ball-clip-rotate">
					<div></div>
				</div>
			</div>
		</div><!-- Loader /- -->

		<!-- Header Section -->
		<header class="container-fluid no-padding header-section">
		
			<!-- SidePanel -->
			<div id="slidepanel">
			
			
			<div class="container-fluid no-padding menu-block">
				<!-- Container -->
				<div class="container">	
					<!-- nav -->
					<nav class="navbar navbar-default ow-navigation">
						<div class="navbar-header">
							<button aria-controls="navbar" aria-expanded="false" data-target="#navbar" data-toggle="collapse" class="navbar-toggle collapsed" type="button">
								<span class="sr-only">Toggle navigation</span>
								<span class="icon-bar"></span>
								<span class="icon-bar"></span>
								<span class="icon-bar"></span>
							</button>
							<a href="index.html" class="navbar-brand"><img src="images/logo.png" alt="logo" /></a>
						</div>
						<div class="navbar-collapse collapse" id="navbar">
							<ul class="nav navbar-nav">
								<li class="dropdown">
									<a href="index.html" title="Home" class="dropdown-toggle" role="button" aria-haspopup="true" aria-expanded="false">Home</a>
									<i class="ddl-switch fa fa-angle-down"></i>
									<ul class="dropdown-menu">				
									</ul>
								</li>
								<li><a href="directory.html" title="directory">Directory</a></li>
								 <li class="active dropdown">
									<a href="ticketing.html" title="ticketing" class="dropdown-toggle" role= "button" aria-haspopup="true" aria-haspopup="false">ticketing</a>
									<i class="ddl-switch fa fa-angle-down"></i>
									<ul class="dropdown-menu"></ul>
								</li> 
								<li><a href="gallery.html" title="Gallery">Gallery</a></li>
								<li class="dropdown">
									<a href="#" title="Donations" class="dropdown-toggle" role="button" aria-haspopup="true" aria-expanded="false">Donations</a>
									<i class="ddl-switch fa fa-angle-down"></i>
									<ul class="dropdown-menu">
										<li><a href="donations.html" title="Donations">Donations</a></li>
										<li><a href="cart.html" title="Cart">cart</a></li>
										<li><a href="checkout.html" title="Checkout">checkout</a></li>

									</ul>
								</li>
								<li class="dropdown">
									<a href="blog.html" title="Blog" class="dropdown-toggle" role="button" aria-haspopup="true" aria-expanded="false">Profile</a>
									<i class="ddl-switch fa fa-angle-down"></i>
									<ul class="dropdown-menu">
										<li><a href="UserProfile.html" title="User Profile">User Profile</a></li>
										<li><a href="login.html" title="Login">Log In</a></li>
										<li><a href="sign-up.html" title="Sign-Up">Sign Up</a></li>
									</ul>
								</li>
								<li><a href="contactus.html" title="Contact Us">Contact Us</a></li>
							</ul>
						</div><!--/.nav-collapse -->
						<div id="loginpanel" class="desktop-hide">
							<div class="right" id="toggle">
								<a id="slideit" href="#slidepanel"><i class="fo-icons fa fa-inbox"></i></a>
								<a id="closeit" href="#slidepanel"><i class="fo-icons fa fa-close"></i></a>
							</div>
						</div>
					</nav><!-- nav /- -->
				</div><!-- Container /- -->
			</div>
		</header><!-- Header Section /- -->
	
		<main>
			
			<!-- Page Header -->
			<div class="container-fluid no-padding page-header">
				<div class="container">
					<ol class="breadcrumb">
						<li><a href="#">Home</a></li>
						<li class="active">Ticketing</li>
					</ol>
				</div>
			</div><!-- Page Header /- -->
						<!-- Process Section -->
                        <div class="container-fluid no-left-padding no-right-padding process-section">
                                <!-- <img src="images/logo.jpeg" alt="Destination" /> -->
                            <!-- Container -->
                            <div class="container">                                   
                                <!-- Section Header -->
                                <div class="section-header section-header2">
                                    <h3>How To Book your Tickets</h3>
                                    <h6>Process</h6>
								</div><!-- Section Header /- -->
                                <!-- Row -->
                                 <div class="row process-container">
                                    <div class="col-md-4 col-sm-6 col-xs-6 process-box">						
                                        <span></span>
                                        <div class="process-content">
											<span><i class="icon icon-WineGlass"></i></span>
											<h6> Choose your State
											<div class=  "Choose your State">
												<select>
													<option>Alabama</option>	
													<option>Alaska</option>
													<option>Arizona</option>
													<option>Arkansas</option>
													<option>California</option>
													<option>Colorado</option>
													<option>Connecticut</option>
													<option>Delaware</option>
													<option>Florida</option>
													<opition>Georgia</opition>
													<option>Hawaii</option>
													<option>Idaho</option>
													<option>Tennessee</option>
													<option>Illinois</option>
													<option>Indiana</option>
													<option>Iowa</option>
													<option>Kansas</option>
													<option>Kentucky</option>
													<opition>Louisiana</opition>
													<option>Maine</option>
													<option>Maryland</option>
													<option>Massachusetts</option>
													<option>Michigan</option>
													<option>Minnesota</option>
													<option>Missouri</option>
													<option>Montana</option>
													<option>Nebraska</option>
													<opition>Nevada</opition>
													<option>New Hampshire</option>
													<option>New Jersey</option>
													<option>New Mexico</option>
													<option>New York</option>
													<option>North Carolina</option>
													<option>North Dakota</option>
													<option>Ohio</option>
													<option>Oklahoma</option>
													<option>Oregon</option>
													<opition>Pennsylvania</opition>
													<option>Rhode Island</option>
													<option>South Carolina</option>
													<option>South Dakota</option>
													<option>Tennessee</option>
													<option>Texas</option>
													<option>Utah</option>
													<option>Vermont</option>
													<option>Virginia</option>
													<option>Washington</option>
													<option>West Virgnia</option>
													<option>Wisconsin</option>
													<option>Wyoming</option>
												</select>
											</div>
										</h6>
                                        </div>
                                    </div>
                                    <div class="col-md-4 col-sm-6 col-xs-6 process-box">
                                        <span></span>
                                        <div class="process-content">
                                            <span><i class="icon icon-Pointer"></i></span>
											<!-- <h6> Find your Park</h6> -->
											<h6> Find your park <div class = "Find your park">
												<select>
													<option>Sandy Point Park</option>
													<option> Grand Canyon </option>
													<option> Great Smokey Mountain </option>
												</select>
											</div>
										</h6>
                                        </div>
                                    </div>
                                    <div class="col-md-4 col-sm-6 col-xs-6 process-box">
                                        <span></span>
                                        <div class="process-content">
                                            <span><i class="icon icon-Icecream1"></i></span>
											<h6> <a href="cart.html"> Checkout </a></h6>  								
                                        </div> 
                                    </div>
                                </div> <!-- Row /- -->
                            </div><!-- Container /- -->
                        </div><!-- Process Section /- -->
			<!-- Destination Section -->
			<div id="destination-section" class="container-fluid no-left-padding no-right-padding destination-section">
				<!-- Container -->
				<div class="container">
					<!-- Section Header -->
					<div class="section-header">
						<h3>Events Going on Around You!</h3>
						<h6>Get your Tickets Now!</h6>
					</div><!-- Section Header /- -->
					
					<!-- Row -->
					<div class="row">
						<!-- Destination Box -->
						<div class="col-md-4 col-sm-6 col-xs-6 destination-box">
							<div class="destination-content">
								<img src="images/yellow-stone.jpg" alt="Destination" />
								<h3><span>YellowStone National Park </span></h3>
								<div class="destination-content-box">
									<h4> YellowStone National Park<br> </h4>
									<h5>Event : <span> West entrance Opening</span></h5>
									<span>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
										<i class="fa fa-star-o"></i>
									</span>
								</div>
							</div>
						</div><!-- Destination Box /- -->
						<!-- Destination Box -->
						<div class="col-md-4 col-sm-6 col-xs-6 destination-box">
							<div class="destination-content">
								<img src="images/greatsmokeymountains.jpg" alt="Destination" />
								<h3><span>Great Smokey Mountains</span></h3>
								<div class="destination-content-box">
									<h4>Great Smokey Mountains Travel<br> </h4>
									<h5>Event : <span> Season Opening</span></h5>
									<span>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
									</span>
								</div>
							</div>
						</div><!-- Destination Box /- -->
						<!-- Destination Box -->
						<div class="col-md-4 col-sm-6 col-xs-6 destination-box">
							<div class="destination-content">
								<img src="images/grandcanyon.jpg" alt="Destination" />
								<h3><span>Grand Canyon</span></h3>
								<div class="destination-content-box">
									<h4> Grand Canyon Travel<br> </h4>
									<h5>Event : <span>Season Opening</span></h5>
									<span>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
										<i class="fa fa-star"></i>
									</span>
								</div>
							</div>
						</div><!-- Destination Box /- -->								
					</div><!-- Row /- -->
				</div><!-- Container /- -->
            </div><!-- Destination Section /- -->			           						
		</main>	
			
	</div>
	<!-- JS for storing options chosen by User-->
	<script src="StoreOption.js"></script>

	<!-- JQuery v1.12.4 -->
	<script src="js/jquery-1.12.4.min.js"></script>
	<script src = "js/dynamicDD.js"></script> <!-- dropdown-->

	<!-- Library - Js -->
	<script src="libraries/lib.js"></script>

	<!-- Library - Theme JS -->
	<script src="js/functions.js"></script>
	
</body>
</html>
<?php
//Include the config.php file
require_once 'config.php';

//Define variables and initialize with empty values
$USERNAME = $PASSWORD = "";
$username_err = $password_err = $email_error = "";

//Processing form data when submitted
if($_SERVER["REQUEST_METHOD"] == "POST"){

    //Check if username is empty
    if(empty(trim($_POST["EMAIL"]))){
        $email_err = "Please enter your email address.";
    } else{
        $EMAIL = trim($_POST["EMAIL"]);
    }

    //Check if password is empty
    if(empty(trim($_POST["PASSWORD"]))){
        $password_err = "Please enter your password";
    } else{
        $PASSWORD = trim($_POST["PASSWORD"]);
    }

    //Validate credentials
    if(empty($email_err) && empty($password_err)){
        //Prepare a select statement
        $sql = "SELECT EMAIL, PASSWORD FROM USER WHERE EMAIL= ?";

        if($stmt= mysqli_prepare($link, $sql)){
            //Bind variables to the prepared statement as parameters
            mysqli_stmt_bind_param($stmt, "s", $param_email);

            //Set parameters
            $param_email = $EMAIL;

            //Attempt to execute the prepared statement
            if(mysqli_stmt_execute($stmt)){
                //Store result
                mysqli_stmt_store_result($stmt);
                //Check if username exists, if yes then verify password
                if(mysqli_stmt_num_rows($stmt) == 1){
                    //Bind result variables
                    mysqli_stmt_bind_result($stmt, $EMAIL, $hashed_password);
                    if(mysqli_stmt_fetch($stmt)){
                        if(password_verify($PASSWORD, $hashed_password)){
                            /*Password is correct, so start a new session and save the email to the session*/
                            session_start();
                            $_SESSION['EMAIL'] = $EMAIL;
                            header("location: index2.php");
                        } else{
                            //Display an error if the password doesn't exist
                            $password_err = 'Incorrect password.';
                        }
                    }
                } else{
                    $email_err = 'No account found with that email address.';
                }
            } else{
                echo "Whoops, something went wrong. Try again later.";
            }
        }
        //Close statement
        mysqli_stmt_close($stmt);
    }
    //Close connection
    mysqli_close($link);
}
?>


<!DOCTYPE html>
<!--[if lt IE 9 ]> <html class="lt_ie9"> <![endif]-->
<!--[if IE 9 ]>    <html class="ie9"> <![endif]-->
<!--[if (gt IE 9)|!(IE)]><!--><html lang="en" class=""><!--<![endif]-->
<head>
	<meta charset="utf-8">

    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <meta name="description" content="">
    <meta name="author" content="">

	<title>Log In</title>

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
	
	<div id="fb-root"></div>
	<script>(function(d, s, id) {
  		var js, fjs = d.getElementsByTagName(s)[0];
  		if (d.getElementById(id)) return;
  		js = d.createElement(s); js.id = id;
  		js.src = 'https://connect.facebook.net/en_US/sdk.js#xfbml=1&version=v3.0&appId=787868178065057&autoLogAppEvents=1';
  		fjs.parentNode.insertBefore(js, fjs);
	}(document, 'script', 'facebook-jssdk'));</script>


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
			
				<!-- Top Header -->
				<div class="container-fluid no-padding top-header">
					<!-- Container -->
					<div class="container">
						<div class="row">
							<div class="col-md-6 col-sm-6 col-xs-12 welcome-text">
								<span><i class="icon icon-Pointer"></i> 123, New street, Chicago</span>
								<span><a href="tel:+111234567890" title="+(11) 123 456 7890"><i class="icon icon-Phone2"></i>+(11) 123 456 7890</a></span>
							</div>
							<div class="col-md-6 col-sm-6 social-block">
								<div class="search">	
									<a href="#" id="search" title="Search"><i class="fa fa-search"></i></a>
								</div>
								<ul>
									<li><a href="#" title="Facebook"><i class="fa fa-facebook"></i></a></li>
									<li><a href="#" title="Twitter"><i class="fa fa-twitter"></i></a></li>
									<li><a href="#" title="Linkedin"><i class="fa fa-linkedin"></i></a></li>
									<li><a href="#" title="Tumblr"><i class="fa fa-tumblr"></i></a></li>
									<li><a href="#" title="Vimeo"><i class="fa fa-vimeo"></i></a></li>
									<li><a href="#" title="Pinterest"><i class="fa fa-pinterest-p"></i></a></li>
								</ul>
							</div>							
						</div>
						<!-- Search Box -->
						<div class="search-box">
							<span><i class="icon_close"></i></span>
							<form><input type="text" class="form-control" placeholder="Enter a keyword and press enter..." /></form>
						</div><!-- Search Box /- -->
					</div><!-- Container /- -->
				</div><!-- Top Header /- -->				
			</div><!-- SidePanel /- -->
			
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
										<li><a href="index.html" title="homepage">homepage 1</a></li>
									</ul>
								</li>
								<li><a href="about.html" title="About me">About</a></li>
								<li><a href="services.html" title="Services">Services</a></li>
								<li><a href="gallery.html" title="Gallery">Gallery</a></li>
								<li><a href="destination.html" title="Destination">destination</a></li>
								<li class="active dropdown">
									<a href="#" title="Pages" class="dropdown-toggle" role="button" aria-haspopup="true" aria-expanded="false">Pages</a>
									<i class="ddl-switch fa fa-angle-down"></i>
									<ul class="dropdown-menu">
										<li><a href="shop.html" title="Shop list">SHOP LIST</a></li>
										<li><a href="shop-single.html" title="Shop details">shop details</a></li>
										<li><a href="cart.html" title="Cart">cart</a></li>
										<li><a href="checkout.html" title="Checkout">checkout</a></li>
										<li><a href="404.html" title="404">404</a></li>
									</ul>
								</li>
								<li class="dropdown">
									<a href="blog.html" title="Blog" class="dropdown-toggle" role="button" aria-haspopup="true" aria-expanded="false">Blog</a>
									<i class="ddl-switch fa fa-angle-down"></i>
									<ul class="dropdown-menu">
										<li><a href="blog.html" title="Blog">Blog</a></li>
										<li><a href="blog-single.html" title="Blog Single">Blog Single</a></li>
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
						<li class="active">Log Into Your Account</li>
					</ol>
				</div>
			</div><!-- Page Header /- -->
			<div class="padding-80"></div>
			
			<!-- Log In -->
			<div class="container-fluid no-left-padding no-right-padding woocommerce-checkout">
				<!-- Container -->
				<div class="container">
					<div class="row">
						<!-- Sign Up -->
						<div class="col-md-12 col-sm-12 col-xs-12 login-block">
							<div class="login-check">
								<h3>Log In</h3>
								<div class="col-md-12 col-sm-6 col-xs-6 login-form">
									<form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
										<div class="form-group <?php echo(!empty($email_err)) ? 'has-error' : ''; ?>">
                                            Email Address: <input type="EMAIL" class="form-control" placeholder="Email Address" value="<?php echo $EMAIL; ?>"/>
                                            <span class="help-block"><?php echo $email_err; ?></span>
										</div>
										<div class="form-group <?php echo (!empty($password_err)) ? 'has-error' : ''; ?>">
                                            Password: <input type="PASSWORD" class="form-control" placeholder="Password" />
                                            <span class="help-block"><?php echo $password_err; ?></span>
                                            <br>
                                            <input type="submit" value="LOG IN" />
										    <a href="#" title="Forgot Password?">Forgot Password?</a>
                                        </div>
                                        <p>Don't have an account? <a href="sign-up.php">Sign up here.</a>.</p>
                                        <hr><h6 align ="center">OR</h6><hr>
										<!--Log In Using Facebook -->
										<!--Facebook login button-->
										<div class="fb-login-button" data-width="249px" data-max-rows="1" data-size="large" data-button-type="login_with" data-show-faces="false" data-auto-logout-link="false" data-use-continue-as="false"></div>										
                                        
									</form>
								</div>
							</div>
					</div>
				</div><!-- Container /- -->
			</div><!-- Create an Account /- -->
			
		</main>

		<!-- Footer Section -->
		<footer class="footer-main container-fluid no-padding footer-section2">
			<!-- Container -->
			<div class="container">
				<div class="row">

					<!-- Widget Block -->
					<div class="col-md-4 col-sm-6 col-xs-6 widget-block">
						<!-- About Widget -->
						<div class="ftr-widget ftr_widget_about">
							<h3>about us</h3>
							<div class="ftr-about-content">
								<p>Guys like us we had it made. Those were the days. The mate was a mighty sailin' man the Skipper brave and sure. Five passengers.</p>
								<a href="#" title="Read More">Read More</a>
							</div>
						</div><!-- About Widget /- -->
					</div><!-- Widget Block /- -->
					
					<!-- Widget Block -->
					<div class="col-md-4 col-sm-6 col-xs-6 widget-block">
						<!-- Latest Post Widget -->
						<div class="ftr-widget widget_hours">
							<h3>visiting hours</h3>
							<p>Monday To Friday : <span>(9.00 am - 5.30 pm)</span></p>
							<p>Saturday and Sunday : <span>(11.00 am - 2.00 pm)</span></p>
							<ul>
								<li><a href="#" title="Facebook"><i class="fa fa-facebook"></i></a></li>
								<li><a href="#" title="Twitter"><i class="fa fa-twitter"></i></a></li>
								<li><a href="#" title="Linkedin"><i class="fa fa-linkedin"></i></a></li>
								<li><a href="#" title="Tumblr"><i class="fa fa-tumblr"></i></a></li>
								<li><a href="#" title="Vimeo"><i class="fa fa-vimeo"></i></a></li>
								<li><a href="#" title="Pinterest"><i class="fa fa-pinterest-p"></i></a></li>
							</ul>
						</div><!-- Latest Post Widget /- -->
					</div><!-- Widget Block /- --> 
					
					<!-- Widget Block --> 
					<div class="col-md-4 col-sm-6 col-xs-6 widget-block">
						<!-- Subscribe Widget -->
						<div class="ftr-widget ftr_latest_tweet">
							<h3>latest tweets</h3>
							<div class="tweet-box">
								<i class="fa fa-twitter"></i>
								<p>Travel Advisor Services is a modern, flexible and highly customizable theme for your financialorate.</p>
								<a href="#">@Traveladviser123</a>
							</div>
						</div><!-- Subscribe Widget /- -->
					</div><!-- Widget Block /- --> 
					
					
					<div class="col-md-12 col-sm-12 col-xs-12">
						<!-- Widget Instagram -->
						<div class="ftr-widget ftr_widget_instagram">
							<ul>
								<li><a href="#"><img src="images/ftr-insta1.jpg" alt="Instagram" /></a></li>
								<li><a href="#"><img src="images/ftr-insta2.jpg" alt="Instagram" /></a></li>
								<li><a href="#"><img src="images/ftr-insta3.jpg" alt="Instagram" /></a></li>
								<li><a href="#"><img src="images/ftr-insta4.jpg" alt="Instagram" /></a></li>
								<li><a href="#"><img src="images/ftr-insta5.jpg" alt="Instagram" /></a></li>
								<li><a href="#"><img src="images/ftr-insta6.jpg" alt="Instagram" /></a></li>
								<li><a href="#"><img src="images/ftr-insta7.jpg" alt="Instagram" /></a></li>
								<li><a href="#"><img src="images/ftr-insta8.jpg" alt="Instagram" /></a></li>
								<li><a href="#"><img src="images/ftr-insta9.jpg" alt="Instagram" /></a></li>
							</ul>
						</div><!-- Widget Instagram /- -->
					</div>
					
				</div>
			</div><!-- Container /- -->
			<!-- Footer Bottom -->
			<div class="container-fluid no-padding btm-ftr">
				<div class="container">
					<p>Max Guider <i class="fa fa-copyright"></i> 2016.  All Rights Reserved.</p>
				</div>
			</div><!-- Footer Bottom /- -->
		</footer><!-- Footer Section /- -->
			
	</div>

	<!-- JQuery v1.12.4 -->
	<script src="js/jquery-1.12.4.min.js"></script>

	<!-- Library - Js -->
	<script src="libraries/lib.js"></script>

	<!-- Library - Theme JS -->
	<script src="js/functions.js"></script>
	
</body>
</html>
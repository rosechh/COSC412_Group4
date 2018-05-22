<?php
require "configure.php";
$conn = mysqli_connect($hostname, $username, $password) or die("Unable to connect to MySQL");
	mysqli_select_db( $conn, $database) or die("Could not select examples");
?>

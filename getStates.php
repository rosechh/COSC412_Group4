<?php

	$username = "ssingh19";
	$password = "Group4123!";
	$hostname = "localhost";
	$database = "NatParks";
	
	$conn = mysqli_connect($hostname, $username, $password) or die("Unable to connect to MySQL");
	mysql_select_db( $conn, $database) or die("Could not select examples");

    $query = "SELECT name FROM `States`";
    $data = mysqli_query($conn, $query);

    $makes = array();

    while($row = mysqli_fetch_array($data))
    {
        array_push($States, $row["name"]);
        
    }
    echo json_encode($States);

    
    
	mysqli_close($conn);
?>

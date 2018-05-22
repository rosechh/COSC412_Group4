<?php
if (isset($_GET["States"]))
{
    $username = "ssingh19";
	$password = "Group4123!";
	$hostname = "localhost";
	$database = "NatParks";
	
	$conn = mysqli_connect($hostname, $username, $password) or die("Unable to connect to MySQL");
    mysql_select_db( $conn, $database) or die("Could not select examples");
    
    $States = $_GET["States"];

    $query = "SELECT Park.name FROM `Park`  INNER JOIN States ON Park.States_id = States.id WHERE States.name LIKE '{$States}'";
    $data = mysqli_query($conn, $query);

    $Park = array();

    while($row = mysqli_fetch_array($data))
    {
        array_push($Park, $row["name"]);
        
    }
    echo json_encode($Park);

	
    mysqli_close($conn);
}
?>

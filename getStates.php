<?php

    require "opendb.php";
    
    $query = "SELECT name FROM States";
    $data = mysqli_query($conn, $query);

    $States = array();

    while($row = mysqli_fetch_array($data))
    {
        array_push($States, $row["name"]);
       
        echo "state: " . $row["name"] . "<br>";
        echo json_encode($States);
    }
    
    require "closedb.php";

?>

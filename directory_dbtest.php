
<!DOCTYPE html>
<html>
	<head>
		<style>
		table {
		    width: 100%;
		    border-collapse: collapse;
		}

		table, td, th {
		    border: 1px solid black;
		    padding: 5px;
		}

		th {text-align: left;}
		</style>
	</head>
<body>

<?php
//*****************************************************************************************
//***THIS FILE IS FOR MY LOCAL HOST TESTING ONLY;IT IS NOT MEANT TO WORK FOR ANYONE ELSE***
//*****************************************************************************************
$con = mysqli_connect('localhost','gnik','Gpn108017*','natparktest');
if (!$con) {
    die('Could not connect: ' . mysqli_error($con));
}

$sql="SELECT * FROM nParks";
$result = mysqli_query($con,$sql);

echo "<table>
<tr>
<th>Name</th>
<th>State</th>
<th>Latitude</th>
<th>Longitude</th>
<th>Image</th>
<th>Content</th>
</tr>";
while($row = mysqli_fetch_array($result)) {
    echo "<tr>";
    echo "<td>" . $row['name'] . "</td>";
    echo "<td>" . $row['state'] . "</td>";
    echo "<td>" . $row['lat'] . "</td>";
    echo "<td>" . $row['lng'] . "</td>";
    echo "<td>" . $row['image'] . "</td>";
    echo "<td>" . $row['content'] . "</td>";
    echo "</tr>";

    $name = $row['name'];

}
echo "</table>";
mysqli_close($con);
?>
<script type="text/javascript">
var name =  <?php echo $name;  ?>
document.write(name);
//This doesn't work :[
</script>
</body>
</html> 
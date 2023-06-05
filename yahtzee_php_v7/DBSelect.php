<?php
	//Dr. Mark E. Lehr
	//Create a connection to the database
	//DB, UN, Pass, DB
        require_once ('ConnectTest.php'); // Connect to the db.
        //require_once ('ConnectTest.php'); // Connect to the db.
          
	//Query the database
        $sql= "SELECT `name` AS `UserName`, `email` AS `Email`, `password` AS `Password`, `chekpass` AS `Check Password`, `hiscore` AS `High Score` FROM `yahtzeedatabase`.`entity_users` AS `entity_users`";

        $result=$conn->query($sql);
        echo "<table border='1'>";
		    echo "<tr><th>".'name'."</th>";
            echo "<th>".'studio'."</th>";
            echo "<th>".'release_date'."</th>";
            echo "<th>".'duration'."</th></tr>";
        while($re = $result->fetch_assoc()){
                  echo "<tr><td>".$re['name']."</td>";
                  echo "<td>".$re['studio']."</td>";
                  echo "<td>".$re['release_date']."</td>";
                  echo "<td>".$re['duration']."</td></tr>";
        }
        echo "</table>";
?>

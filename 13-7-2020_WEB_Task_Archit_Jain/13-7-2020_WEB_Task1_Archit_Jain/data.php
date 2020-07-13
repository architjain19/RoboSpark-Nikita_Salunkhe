<?php
include('db.php');
if(isset($_POST['submit']))
{
    $user_id=$_POST['user_id'];    
    $query = "SELECT * FROM `users` WHERE `user_id`='$user_id'";
    $run = mysqli_query($con, $query);
    $row = mysqli_num_rows($run);
}
?>

<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <style>
        body{
            background-image: url('back.jpeg'); 
            background-size: cover;
        }
        h1{
            color: #031424;
            margin: 200px 100px 10 100px;
            padding-bottom: 5px;
            border-bottom: 2px solid #031424;
            position: relative;
        }
        p{
            position: absolute;
            color: #FFFFFF;
            margin: 5px 100px;
            font-size: 25px;
        }
    </style>
    <title>Student details</title>
<body>
        <h1>Student Database</h1>
        <p>
        <?php 
         if($row==1)
         {
             // echo "Successfully logged in :)<br>";
             $user_row = mysqli_fetch_assoc($run); //fetching data and printing it
             echo "<br>Welcome ".$user_row['username'];
             echo "<br><br>Your branch is : ".$user_row['user_branch'];
             echo "<br><br>And your cgpa is : ".$user_row['user_cgpa'];
         }
        else
         {
             echo "Access denied :(";
             // echo mysqli_error($con);
         }
         ?> 
         </p>
</body>
</html>
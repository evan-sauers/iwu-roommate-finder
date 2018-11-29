<?php
    // Create connection and begin session
    include("config.php");
    session_start();
    
    if($_SERVER["REQUEST_METHOD"] == "POST"){
        $myusername = mysqli_real_escape_string($conn, $_POST['username']);
        $mypassword = mysqli_real_escape_string($conn, $_POST['password']);
        
        // Query username and password from user table
        $sql = $conn->query("SELECT userID FROM user WHERE username = '$myusername' and password = '$mypassword'");
        
        $row = mysqli_fetch_array($sql,MYSQLI_ASSOC);
        $active = $row['active'];
        $count = mysqli_num_rows($sql);
        
        if($count == 1) {
            $_SESSION['username'];
            $_SESSION['login'] = $myusername;
            
            header("location: dashboard.php");
        }else{
            // Error if username/password is invalid
            $_SESSION['error'] = "<span style=\"color:red;\">Username/Password Invalid</span>";
        }
    }
?>

<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8">
        <title>IWU Roommate Finder</title>
        <link rel="stylesheet" href="styles/login-styles.css">
        <link href="https://fonts.googleapis.com/css?family=ABeeZee" rel="stylesheet">
        <!-- Bootstrap CSS -->
        <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css" integrity="sha384-MCw98/SFnGE8fJT3GXwEOngsV7Zt27NXFoaoApmYm81iuXoPkFOJwJ8ERdknLPMO" crossorigin="anonymous">
    </head>

    <body>
        <div class="login">
            <div class="row">
                <div class="col-lg-12">
                <!-- LOGIN FORMS -->
                <form method="post" id="login">
                    <img class="logo" src="images/logo.PNG">
                    <h1>IWU Roommate Finder</h1>
                    <div id="error"><i><?= $_SESSION['error']; ?></i></div>
                    <input class="form" type="text" name="username" placeholder="username" required><br>
                    <input class="form" type="password" name="password" placeholder="password" required><br>
                    <input id="loginButton" class="btn" type="submit" value="Sign In">
                    <button id="createButton" class="btn"  onclick="window.location.href='create.php'">Create Account</button>
                </form>
                </div>
                <footer>
                    <p>Created by Cynthia Carter, Evan Sauers, and Joshua Schoonmaker.</p>
                </footer>
                
            </div>
        </div>
    </body>
</html>
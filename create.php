<?php
    // Create connection and begin session
    include("config.php");
    session_start();

    $_SESSION['error'] = '';
    
    // If form is submitted
    if($_SERVER["REQUEST_METHOD"] == "POST"){
        
        // Two passwords are equal to each other
        if($_POST['password'] == $_POST['confirmPass']) {
            $myusername = mysqli_real_escape_string($conn, $_POST['username']);
            $mypassword = mysqli_real_escape_string($conn, $_POST['password']);
            
            $_SESSION['username'];
            $_SESSION['login'] = $myusername;

            // Query username and password from user table
            $sql = $conn->query("INSERT INTO user (username, password) VALUES('$myusername', '$mypassword')");
            
            if ($conn->query($sql) === false) {
                $_SESSION['error'] = "Registration successful";
                header("location: dashboard.php");
            } else {
                $_SESSION['error'] = "<span style=\"color:red;\">Registration failed</span>";
            }
        } else {
            $_SESSION['error'] = "<span style=\"color:red;\">The passwords did not match</span>";
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
                <form action="create.php" method="post" id="login">
                    <img class="logo" src="images/logo.PNG">
                    <h1>IWU Roommate Finder</h1>
                    <p>Create a username and password:</p>
                    <div class="error"><i><?= $_SESSION['error']; ?></i></div>
                    <input id="username" class="form" type="text" name="username" placeholder="username" required><p id="check"></p>
                    <input class="form" type="password" name="password" placeholder="password" required><br>
                    <input class="form" type="password" name="confirmPass" placeholder="confirm password" required><br>
                    <input id="loginButton" class="btn" value="Submit" type="submit">
                    <button id="createButton" class="btn btn-basic" value="Back" onclick="window.location.href='login.php'">Back</button>
                </form>
                </div>
                <footer>
                    <p>Created by Cynthia Carter, Evan Sauers, and Joshua Schoonmaker.</p>
                </footer>
                    <script>
                        function create(){
                            window.location = 'login.php';
                        }
                        
                        // Use AJAX to check availability of username
                        let us = document.getElementById("username");
                        let check = document.getElementById("check");

                        us.addEventListener("input", function(event){

                            let xhr = new XMLHttpRequest();

                            xhr.onreadystatechange=function() {
                                if (this.readyState === 4 && this.status === 200) {
                                    // Display response
                                    check.innerHTML = xhr.responseText;
                                }   
                            }
                            xhr.open("GET", "username.php?us=" + us.value, true);
                            xhr.send();
                        });
                </script>
            </div>
        </div>
    </body>
</html>
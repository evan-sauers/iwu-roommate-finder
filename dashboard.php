<?php
    //include('session.php');

    
    
?>

<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="utf-8">
        <title>IWU Roommate Finder</title>
        <link rel="stylesheet" href="styles/styles.css">
        <link href="https://fonts.googleapis.com/css?family=ABeeZee" rel="stylesheet">
        <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
        
        <!-- Bootstrap CSS -->
        <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css" integrity="sha384-MCw98/SFnGE8fJT3GXwEOngsV7Zt27NXFoaoApmYm81iuXoPkFOJwJ8ERdknLPMO" crossorigin="anonymous">
        
        <!-- Bootstrap jQuery -->
        <script src="https://code.jquery.com/jquery-3.2.1.slim.min.js" integrity="sha384-KJ3o2DKtIkvYIK3UENzmM7KCkRr/rE9/Qpg6aAZGJwFDMVNA/GpGFF93hXpG5KkN" crossorigin="anonymous"></script>
        <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.12.9/umd/popper.min.js" integrity="sha384-ApNbgh9B+Y1QKtv3Rn7W3mgPxhU9K/ScQsAP7hUibX39j7fakFPskvXusvfa0b4Q" crossorigin="anonymous"></script>
        <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js" integrity="sha384-JZR6Spejh4U02d8jOt6vLEHfe/JQGiRRSQQxSfFWpi1MquVdAyjUar5+76PVCmYl" crossorigin="anonymous"></script>
    </head>

    <body>        
        <!-- Navigation Bar -->
        <nav class="navbar bg-dark navbar-dark">
            <a class="navbar-brand" href="#"><h2><img src="images/iwu-logo.gif" id="logo"> Roommate Finder</h2></a>

            <!-- Toggle "Hamburger" Button -->
            <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#collapsibleNavbar">
                <span class="navbar-toggler-icon"></span>
            </button>

            <!-- Navigation Bar links -->
            <div class="collapse navbar-collapse" id="collapsibleNavbar">
                <ul class="navbar-nav">
                    <li class="nav-item">
                        <a class="nav-link" href="#">My Profile</a>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link" href="#">Insert Link</a>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link" href="#">Logout</a>
                    </li> 
                </ul>
            </div> 
        </nav>

        <div class="container-fluid">
            <div class="row">
                <!-- Process Section -->
                <div class="col-lg-4">
                    <div class="content">
                        <h2><u>Your Process</u></h2>
                        <ol>
                            <h3><li>Take The Survey</li>
                            <li>Find A Roommate</li>
                            <li>Choose Your Housing</li></h3>
                        </ol>
                    </div>
                </div>
                <!-- Welcome Section -->
                <div class="col-lg-8">
                    <div class="content"> 
                        <div class="row">
                            <div class="col-lg-6">
                                <div class="welcome">  
                                    <h1>Welcome</h1>
                                    <!--<h4><?php echo $session; ?></h4>-->
                                </div>
                            </div>
                            <div class="col-lg-6">
                                <img id="profile" src="images/cynthia.jpg" alt="Profile Image">
                            </div>
                        </div>
                        <div class="row">
                            <div class="col-lg-6">
                                <button id="surveyButton" type="submit"><span>Take the Survey</span></button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </body>
</html>
<?php
    include('session.php');
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
    </head>

    <body>        
        <div class="container-fluid">
            <!-- Title -->
            <div class="row">
              <div class="col-lg-6">
                  <h1>[INSERT LOGO HERE]]</h1>
              </div>
                <div class="col-lg-6">
                    <div id="rightNav">
                        <h4>Welcome, <?php echo $session; ?></h4>&nbsp;&nbsp;
                        <h4><a href="logout.php">Logout</a></h4>
                    </div>
                </div>
            </div>
            
            <!-- Footer -->
            <div class="row">
                <div class="col-lg-12">
                    <p class="footer">Created by Cynthia Carter, Evan Sauers, and Josh Schoonmaker.</p>
                </div>
            </div>
        </div>
    </body>
</html>
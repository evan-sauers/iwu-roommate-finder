<?php 
    session_start();

    if(session_destroy()){
        // Redirect to Login Screen
        header("Location: login.php");
    }
?>
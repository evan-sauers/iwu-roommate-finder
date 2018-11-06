<?php
    include('config.php');
    session_start();

    $user = $_SESSION['login'];
    
    // Query username from user table
    $sql = $conn->query("SELECT username FROM user WHERE username = '$user'");

    $row = mysqli_fetch_array($sql,MYSQLI_ASSOC);
    
    // Set username as variable for dashboard use
    $session = $row['username'];

    if(!isset($_SESSION['login'])){
        header("location:login.php");
    }
?>
var mainApp ={};
var userState;
(function(){
    var firebase = app_Firebase;
   
    var uid = null;
    firebase.auth().onAuthStateChanged(function(user) {
        if (user) {
          // User is signed in.
            uid = user.uid;
            userState = user.email.replace(/[^a-zA-Z ]/g, "");

        } else {
        //Redirect to main page
        uid = null;
        window.location.replace("login.html");
        }
      });

    function logOut(){
        firebase.auth().signOut();
      }
      mainApp.logOut = logOut;
})()
var myLink = document.getElementById('myLink');

myLink.onclick = function(){
    var usersRef = firebase.database().ref("users/" + userState);
        usersRef.once("value").then(function(snapshot) {
            if (snapshot.exists()) {
                window.location = "profileSave.html";
            } else {
                window.location = "profile.html";
            }
        });
}
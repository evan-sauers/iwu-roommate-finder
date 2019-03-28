var ref = firebase.database().ref("images");
ref.once("value").then(function(snapshots) {
    var user = firebase.auth().currentUser;
    if (user != null) {
        user.providerData.forEach(function (profile) {
            var email = user.email.replace(/[^a-zA-Z ]/g, "");
            var re = firebase.database().ref("images/" + email);
            re.once("value").then(function(snapshot) {

                var imageVal = snapshot.val().imageUpload;

                $("#imageRetrieve").append(imageVal);
            });
        });
    }; 
});
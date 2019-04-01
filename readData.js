var ref = firebase.database().ref("users");
ref.once("value").then(function(snapshots) {
    var user = firebase.auth().currentUser;
    if (user != null) {
        user.providerData.forEach(function (profile) {
            var email = user.email.replace(/[^a-zA-Z ]/g, "");
            
            var re = firebase.database().ref("users/" + email);
            re.once("value").then(function(snapshot) {
                
                
                var storageRef = firebase.storage().ref();
                storageRef.child('images/' + userState).getDownloadURL().then(function(url) {
                    var profileImage = url;

                    document.querySelector('img').src = profileImage;

                 }).catch(function(error) {

                 });

                var key = snapshot.key;
                var first_val = snapshot.val().first;
                var last_val = snapshot.val().last;
                var year_val = snapshot.val().list;
                var home_val = snapshot.val().city;
                var state_val = snapshot.val().inputState;
                var bio_val = snapshot.val().comment;
                var email_val = snapshot.val().email;

                $("#first").append(first_val);
                $("#last").append(last_val);
                $("#year").append("Gradutation Year: " + year_val);
                $("#home").append(home_val);
                $("#state").append(state_val);
                $("#bio").append(bio_val);
            });
        });
    }; 
});
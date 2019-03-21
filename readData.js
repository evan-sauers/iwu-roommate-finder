var user = firebase.auth().currentUser;

if (user != null) {
    var email = user.email.replace(/[^a-zA-Z ]/g, "");

    console.log("  Email: " + email);
}

var ref = firebase.database().ref("users/" + "evansauersmyemailindwesedu");
//var ref = firebase.database().ref("users/" + userState);
ref.once("value").then(function(snapshot) {
    
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
    $("#extra").append(userState);
});

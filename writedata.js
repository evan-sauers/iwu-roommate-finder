// Writes data to the Firebase Database
var database = firebase.database();
var ref = database.ref('users');
function submitBtn() {  
    var ref = database.ref('users/' + userState);
    var user = firebase.auth().currentUser;

    var first = $("#first").val();
    var last = $("#last").val();
    var list = $("#list").val();
    var sex = $("#sex").val();
    var city = $("#city").val();
    var inputState = $("#inputState").val();
    var comment = $("#comment").val();

    var userID = user.email.replace(/[^a-zA-Z ]/g, "");  

    ref.set({
        "first" : first,
        "last" : last,
        "sex" : sex,
        "list" : list,
        "city" : city,
        "inputState" : inputState,
        "comment" : comment,
        "userID" : userID
    });

    window.location.replace("profileSave.html");
}

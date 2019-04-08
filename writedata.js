// Writes data to the Firebase Database
var database = firebase.database();
var ref = database.ref('users');
function submitBtn() {  

    var emailName = user.getEmail();
    var refChild = ref.child(emailName);

    var first = $("#first").val();
    var last = $("#last").val();
    var list = $("#list").val();
    var city = $("#city").val();
    var inputState = $("#inputState").val();
    var comment = $("#comment").val();  
    var email = $("#email").val();
    
    refChild.push({
        "first" : first,
        "last" : last,
        "list" : list,
        "city" : city,
        "inputState" : inputState,
        "comment" : comment,
        "email" : email
    });
    console.log(emailName);
}

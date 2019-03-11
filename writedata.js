// Writes data to the Firebase Database
var database = firebase.database();

function submitBtn() {  
    var ref = database.ref('users');
    
    var first = $("#first").val();
    var last = $("#last").val();
    var list = $("#list").val();
    var city = $("#city").val();
    var inputState = $("#inputState").val();
    var comment = $("#comment").val();
        
    ref.push({
        "first" : first,
        "last" : last,
        "list" : list,
        "city" : city,
        "inputState" : inputState,
        "comment" : comment
    });
}

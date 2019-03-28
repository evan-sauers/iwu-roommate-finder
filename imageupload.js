// Uploads images to Firebase and displays the images on the webpage
var database = firebase.database();

function fileSubmitBtn() {
    var ref = database.ref('images/' + userState);
    var user = firebase.auth().currentUser;
    
    var image = $("#imageUpload").val();

        ref.set ({
            "imageUpload" : image
        });
    alert("Upload Complete. Finish profile information at this time.")
}
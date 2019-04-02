// Get image uploader
var progress = document.getElementById('progress');
var imageUpload = document.getElementById('imageUpload');

// Update progress bar and upload image to storage
imageUpload.addEventListener('change', function (imageFile) {
    // Create file and upload
    var file = imageFile.target.files[0];
    var storageRef = firebase.storage().ref('images/' + userState);
    var task = storageRef.put(file);
    
    // Update progress bar
    task.on('state_changed', 
        function bar(snapshot) {
            var percent = (snapshot.bytesTransferred / snapshot.totalBytes) * 100;
            progress.value = percent;
        }
        );
});

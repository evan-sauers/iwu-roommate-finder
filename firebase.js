var app_Firebase = {};
(function(){
    // intializing Firebase
    var config = {
        apiKey: "AIzaSyA44gWTVuNqxtzIVHkcSyBf4q4XCBwrRYA",
        authDomain: "iwu-roommate-finder.firebaseapp.com",
        databaseURL: "https://iwu-roommate-finder.firebaseio.com",
        projectId: "iwu-roommate-finder",
        storageBucket: "iwu-roommate-finder.appspot.com",
        messagingSenderId: "545125658972"
    };
    firebase.initializeApp(config);
    app_Firebase = firebase;
})()
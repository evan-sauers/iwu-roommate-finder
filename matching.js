   // Matching algorirhm

   // filler data
    // name, nonneg., HQ data, LR data, AHQ data, get PCQ data
    var cu = [
        "cu", "M","b", "c", "a", "d", "f", "e", "b", "a", "b", "e", "e", "b", "c", "c", "c", "e", "d", "e", "d", "e", "d", "b", "a"
    ];

    // get pm name and survey results.
    // name, nonneg., HQ data, LR data, AHQ data, get PCQ data
    var pmPool = [
        ["Matthew P.", "M", "b", "c", "a", "d", "f", "e", "b", "a", "b", "e", "e", "b", "c", "c", "c", "e", "d", "e", "d", "e", "d", "b", "a"], 
        ["Linda R.", "F", "b", "a", "c", "d", "f", "b", "b", "c", "d", "a", "a", "a", "b", "d", "c", "c", "a", "f", "a", "c", "b", "c", "d"], 
        ["Jeff J.", "M", "b", "c", "a", "d", "f", "e", "b", "c", "d", "d", "a", "a", "c", "c", "c", "e", "d", "e", "d", "e", "d", "b", "a"], 
        ["Kyle K.", "M", "a", "d", "d", "c", "f", "a", "b", "a", "b", "e", "e", "b", "c", "c", "c", "e", "a", "a", "a", "f", "b", "c", "b"]
    ];

    var matchPool = new Array;
    var compPool = new Array;
    var currentCol = new Array;
    var matchScoreLRQ, matchScoreAHQ, matchScorePCQ;
    var totalScore1, totalScore2, totalScore3;

// Main Function
function sortCScore() {
    getMatchScore(matchPool);
}

// Populates the PM pool
function hardQuestions() {
    for (let i = 0; i < pmPool.length; i++) {
        if (cu[1] == pmPool[i][1]) {
           matchPool.push(pmPool[i]);
        }
    }
}

// Gets match score
function getMatchScore(){
    // get current match pool

    matchPool = new Array;

    hardQuestions(matchPool);
    
    // Question Catagories  
    // name, ordered number of questions, weight
    var qCat = [
        ["LRQ", "AHQ", "PCQ"],
        [ 7, 3, 7],
        [ 2 , 1, 1.5]
    ];

    // import real questionarie at some point.
    // Currently using examples
    for (let i = 0; i < matchPool.length; i++) {
        compPool = new Array;
        for (let x = 2; x <= 8; x++) {
            currentCol = x;
            matchScoreLRQ = (calcMatchScores(currentCol,i) * 2);
            var totalScore1 = matchScoreAHQ + matchScoreLRQ + matchScorePCQ;
        }
        for (let y = 9; y <= 12; y++) {
            currentCol = y;
            matchScoreAHQ = calcMatchScores(currentCol,i) * 1;
            var totalScore2 = matchScoreAHQ + matchScoreLRQ + matchScorePCQ;
        }
        for (let z = 13; z <= 24; z++) {
            currentCol = z;
            matchScorePCQ = calcMatchScores(currentCol,i) * 1.5;
            var totalScore3 = matchScoreAHQ + matchScoreLRQ + matchScorePCQ;
        } 
        document.getElementById("viewFinalMP").innerHTML = 
        "Name: " + matchPool[0][0] + " Match Score: " + totalScore1 / 59.5 * 100 + "%" + "<br>" +
        "Name: " + matchPool[1][0] + " Match Score: " + totalScore2 / 59.5 * 100 + "%" + "<br>" +
        "Name: " + matchPool[2][0] + " Match Score: " + totalScore3 / 59.5 * 100 + "%";
    }
}

// Calculates the match score for getMatchScore for loops
function calcMatchScores(currentCol, i) {
    if (cu[currentCol] == matchPool[i][currentCol]) {
        compPool.push(matchPool[i][currentCol]);
        return compPool.length;
    } else {
        return 0;
    }
}

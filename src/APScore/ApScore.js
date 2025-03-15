function apScore() {
    
    const apClass = document.getElementById("class").value;
    const score = document.getElementById("score").value;
        
    if (score <= 2) {
        document.getElementById("output").innerHTML = "At this time the University of Texas at Dallas isn't accepting scores of 2 or lower.";
    }
    
    // Hard Coding scores for Subjects
    
    if(apClass == "AP Chemistry" && score == 4) {
        document.getElementById("output").innerHTML = "Congratulations! You will be able to receive credit for " + apClass + ". Credit awarded: CHEM 1311 + Lab";
    }
    
    else if (apClass == "AP Chemistry" && score == 5) {
        document.getElementById("output").innerHTML = "Congratulations! You will be able to receive credit for " + apClass + ". Credit awarded: CHEM 1311 + Lab";
    }
    
    else if (apClass == "AP Chemistry" && score == 3) {
        document.getElementById("output").innerHTML = "Credit awarded: 3 SCH free electives";
    }

    
    if(apClass == "AP Biology" && score == 4) {
        document.getElementById("output").innerHTML = "Congratulations! You will be able to receive credit for " + apClass + ". Credit awarded: BIOL 2312 + 2112, BIOL 2311 + 2111";
    }
    
    else if(apClass == "AP Biology" && score == 5) {
        document.getElementById("output").innerHTML = "Congratulations! You will be able to receive credit for " + apClass + ". Credit awarded: BIOL 2312 + 2112, BIOL 2311 + 2111";
    }
    
    else if (apClass == "AP Biology" && score == 3) {
        document.getElementById("output").innerHTML = "Credit awarded: 3 SCH free electives";
    }
    
    // Repeat the same pattern for other subjects...
}
        
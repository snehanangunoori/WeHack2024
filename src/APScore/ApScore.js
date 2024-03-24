const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Please enter the AP classes you took in high school: ", function(apClasses) {
    rl.question("Please enter the score you received: ", function(scoreInput) {
        const score = parseInt(scoreInput);
        
        if (score <= 2) {
            console.log("At this time the University of Texas at Dallas isn't accepting scores of 2 or lower.");
        }
        
        // Hard Coding scores for subjects
        
        if(apClasses === "AP Chemistry" && score === 4) {
            console.log("Congratulations! You will be able to receive credit for " + apClasses + ". Credit awarded: CHEM 1311† + Lab");
        }
        
        else if (apClasses === "AP Chemistry" && score === 5) {
            console.log("Congratulations! You will be able to receive credit for " + apClasses + ". Credit awarded: CHEM 1311† + Lab");
        }
        
        else if (score === 3) {
            console.log("Credit awarded: 3 SCH free electives");
        }
        
        if(apClasses === "AP Biology" && score === 4) {
            console.log("Congratulations! You will be able to receive credit for " + apClasses + ". Credit awarded: BIOL 2312† + 2112, BIOL 2311† + 2111");
        }
        
        else if(apClasses === "AP Biology" && score === 5) {
            console.log("Congratulations! You will be able to receive credit for " + apClasses + ". Credit awarded: BIOL 2312† + 2112, BIOL 2311† + 2111");
        }
        
        else if (score === 3) {
            console.log("Credit awarded: 3 SCH free electives");
        }
        
        // Repeat the same pattern for other subjects...
        
        rl.close();
    });
});

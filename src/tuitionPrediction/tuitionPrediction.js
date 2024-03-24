let major =+ document.querySelector('input[name="major"]:checked');

let housing =+ document.getElementById("dorm").value;
let car =+ document.getElementById("car").value;
let residency = +document.getElementById("resident").value;
let finAid = +document.getElementById("aid").value;
let parkingPlan = +document.getElementById("credits").value;
let semester = +document.getElementById("sem").value;
let mealCost = 0, parkingCost = 0, tuition = 0, finAmount = 0, totalCost = 0, housingCost = 0;
const booksCost = 600.00, fees = 300.00, travelCost = 765.00, personalCost = 1125.00;
let credits = +document.getElementById("credits").value;
let mealPlan = + document.getElementById("meal").value;
let outputElement = document.getElementById("output");


if (housing.toLowerCase() === "yes") {
    housingCost = 4300;
}

switch (mealPlan) {
    case 10:
        mealCost = 1936.36;
        break;
    case 14:
        mealCost = 2046.19;
        break;
    case 19:
        mealCost = 2316.27;
        break;
}

if (residency.toLowerCase() === "yes") {
    switch (credits) {
        case 1:
            tuition = 1957;
            break;
        case 2:
            tuition = 2607;
            break;
        case 3:
            tuition = 3260;
            break;
        case 4:
            tuition = 3912;
            break;
        case 5:
            tuition = 4565;
            break;
        case 6:
            tuition = 5216;
            break;
        case 7:
            tuition = 5869;
            break;
        case 8:
            tuition = 6521;
            break;
        case 9:
            tuition = 7173;
            break;
        case 10:
            tuition = 7195;
            break;
        case 11:
            tuition = 7214;
            break;
        default:
            if (credits >= 12 && credits <= 15) {
                tuition = 8246;
            }
            break;
    }
}

else if (residency.toLowerCase() === "no") {
    switch (credits) {
        case 1:
            tuition = 5271;
            break;
        case 2:
            tuition = 7065;
            break;
        case 3:
            tuition = 8858;
            break;
        case 4:
            tuition = 10650;
            break;
        case 5:
            tuition = 12446;
            break;
        case 6:
            tuition = 14238;
            break;
        case 7:
            tuition = 16032;
            break;
        case 8:
            tuition = 17825;
            break;
        case 9:
            tuition = 19617;
            break;
        case 10:
            tuition = 19691;
            break;
        case 11:
            tuition = 19766;
            break;
        default:
            if (credits >= 12 && credits <= 15) {
                tuition = 22590;
            }
            break;
    }


    totalCost = (housingCost + mealCost + parkingCost + tuition) - finAmount;
    
    outputElement.innerHTML ="<p>kajkdjfkjfkldsfkdf</p>";
    
}


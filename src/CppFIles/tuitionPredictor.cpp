#include <iomanip>
#include <iostream>

using namespace std; 

int main()
{
    string major, housing, car, residency, finAid, parkingPlan, semester; 
    double mealCost = 0, parkingCost = 0, tuition = 0, finAmount = 0, totalCost = 0, housingCost = 0; 
    
    double booksCost = 600.00, fees = 300.00, travelCost = 765.00, personalCost = 1125.00; 
    int option, credits, mealPlan; 
    
    cout << "Enter your information to calculate your total costs at UTD" << endl; 
    
    cout << "What is your major: "; 
    getline(cin, major); 
    
    cout << "How many credits will you be taking this semester? "; 
    cin >> credits; 
    
    cin.ignore();
    
    cout << "Will you be living at the dorms? "; 
    getline(cin, housing); 
    if(housing == "yes" || housing == "Yes"){
        housingCost = 4300;
    }    

    cout << "What meal plan will you have? 0, 10, 14, or 19: "; 
    cin >> mealPlan; 
   
    if (mealPlan == 10){
        mealCost = 1936.36;
    }
    
    else if (mealPlan == 14){
        mealCost = 2046.19;
    }
    
    else if (mealPlan == 19){
        mealCost = 2316.27; 
    }
    
    cin.ignore();

    cout << "Will you have a car? "; 
    getline(cin, car); 
    
    if (car == "yes" || car == "Yes"){
        cout << "What parking plan will you be on? " << "\na) University Commons Residence Halls Permit";
        cout << "\nb) University Commons Residence Halls + Gold Combo Permit\nc) University Commons Residence Halls + Orange Combo Permit";
        cout << "\nd) Accessible Parking Permit" << endl;
        cin >> parkingPlan;
        
        //cin.ignore();
        
        cout << "Will you purchase a parking plan for the fall or spring? "; 
        getline(cin, parkingPlan);
        if (semester == "fall"){
            option = 1; 
        }
        
        else if (semester == "spring"){
            option = 2; 
        }
        
        switch (option){
            case 1:
            if (parkingPlan == "University Commons Residence Halls Permit"){
                parkingCost = 169; 
            }
            
            else if (parkingPlan == "University Commons Residence Halls + Gold Combo Permit"){
                parkingCost = 472; 
            }
            
            else if (parkingPlan == "University Commons Residence Halls + Orange Combo Permit"){
                parkingCost = 636;
            }
            
            else if (parkingPlan == "Accessible Parking Permit"){
                parkingCost = 169;
            }
            
            break;
            
            case 2:
            if (parkingPlan == "University Commons Residence Halls Permit"){
                parkingCost = 113; 
            }
            
            else if (parkingPlan == "University Commons Residence Halls + Gold Combo Permit"){
                parkingCost = 315; 
            }
            
            else if (parkingPlan == "University Commons Residence Halls + Orange Combo Permit"){
                parkingCost = 424;
            }
            
            else if (parkingPlan == "Accessible Parking Permit"){
                parkingCost = 113;
            }
            break;
            
            
        }
    }
    

    cout << "Are you a texas resident? "; 
    getline(cin, residency);
    if (residency == "yes" || residency == "Yes"){
        if (credits == 1){
            tuition = 1957; 
        }
        
        else if (credits == 2){
            tuition = 2607; 
        }
        
        else if (credits == 3){
            tuition = 3260; 
        }
        
        else if(credits == 4){
            tuition = 3912;
            
        }
        
        else if (credits == 5){
            tuition = 4565;
        }
        
        else if (credits == 6){
            tuition = 5216;
        }
        
        else if(credits == 7){
            tuition = 5869; 
        }
        
        else if(credits == 8){
            tuition = 6521;
        }
        
        else if(credits == 9){
            tuition = 7173;
        }
        
        else if(credits == 10){
            tuition = 7195;
        }
        
        else if(credits == 11){
            tuition = 7214;
        }
        
        else if(credits >= 12 && credits <= 15){
            tuition = 8246;
        }
        
         
    }
    
    else if(residency == "no" || residency == "No"){
        if (credits == 1){
            tuition = 5271; 
        }
        
        else if (credits == 2){
            tuition = 7065; 
        }
        
        else if (credits == 3){
            tuition = 8858; 
        }
        
        else if(credits == 4){
            tuition = 10650;
            
        }
        
        else if (credits == 5){
            tuition = 12446;
        }
        
        else if (credits == 6){
            tuition = 14238;
        }
        
        else if(credits == 7){
            tuition = 16032; 
        }
        
        else if(credits == 8){
            tuition = 17825;
        }
        
        else if(credits == 9){
            tuition = 19617;
        }
        
        else if(credits == 10){
            tuition = 19691;
        }
        
        else if(credits == 11){
            tuition = 19766;
        }
        
        else if(credits >= 12 && credits <= 15){
            tuition = 22590;
        }
        
    }
    
    cout << "Are you receiveing a scholarship or financial aid? ";
    getline(cin, finAid);  
    if (finAid == "yes" || finAid == "Yes"){
        cout << "How much aid are you receiving? "; 
        cin >> finAmount;
    }
    

    cout << fixed << setprecision(2);
    totalCost = (housingCost + mealCost + parkingCost + tuition) - finAmount;
    cout << "\nYour raw total cost: $" << totalCost;
    totalCost = (housingCost + mealCost + parkingCost + tuition + booksCost + fees + travelCost + personalCost) - finAmount;
    cout << "\nYour expected total cost: $" << totalCost;  
    
    return 0;
}

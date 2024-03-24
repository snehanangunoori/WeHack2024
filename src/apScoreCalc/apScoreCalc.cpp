#include <iostream>
using namespace std;

int main()
{
    string apClasses;
    cout << "Please enter the AP classes you took in high school: ";
    getline (cin, apClasses);
    

    int score = 0;
    cout << "Please enter the score you recieved: ";
    cin >> score;
    
    if (score <= 2)
    {
        cout << "At this time the University of Texas at Dallas isn't accepting scores of 2 or lower.";
    }
    
    // Hard Coding scores for subjects
    
    if(apClasses == "AP Chemistry" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: CHEM 1311† + Lab";
    }
    
    else if (apClasses == "AP Chemistry" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: CHEM 1311† + Lab";
    }
    
    else if (score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
    if(apClasses == "AP Biology" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: BIOL 2312† + 2112, BIOL 2311† + 2111";
    }
    
    else if(apClasses == "AP Biology" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: BIOL 2312† + 2112, BIOL 2311† + 2111";
    }
    
    else if (score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
    if(apClasses == "AP Computer Science" && score == 4)
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: CS 1436 + 1337";
    }
    
    else if(apClasses == "AP Computer Science" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: CS 1436 + 1337";
    }
    
    else if (score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
    if(apClasses == "AP Macroeconomics" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: ECON 2301†";
    }
    
    else if(apClasses == "AP Macroeconomics" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: ECON 2301†";
    }
    
    else if(score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
    if(apClasses == "AP Microeconomics" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: ECON 2302†";
    }
    
    else if(apClasses == "AP Microeconomics" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: ECON 2302†";
    }
    
    else if(score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
    if(apClasses == "AP English Language" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: RHET 1302†";
    }
    
    else if(apClasses == "AP English Language" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: RHET 1302†";
    }
    
    else if(score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
    if(apClasses == "AP English Literature" && score == 4)
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: RHET 1302†";
    }
    
    else if(apClasses == "AP English Literature" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: RHET 1302†";
    }
    
    else if(score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
    if(apClasses == "AP Calculus AB" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: MATH 2312† + 1325† or MATH 2312† + 2413†";
    }
    
    else if(apClasses == "AP Calculus AB" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: MATH 2312† + 1325† or MATH 2312† + 2413†";
    }
    
    else if(score == 3)
    {
        cout << "Credit awarded: MATH 2312†";
    }
    
    if(apClasses == "AP Calculus BC" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: MATH 2312† + 2417† or MATH 1325† + 1326^† or MATH 2413† + 2414†";
    }
    
    else if(apClasses == "AP Calculus BC" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: MATH 2312† + 2417† or MATH 1325† + 1326^† or MATH 2413† + 2414†";
    }
    
    else if(score == 3)
    {
        cout << "Credit awarded: MATH 2312† + 1325† or MATH 2312† + 2413*";
    }
    
    if(apClasses == "AP Physics 1" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: PHYS 1301 + 1101";
    }
    
    else if(apClasses == "AP Physics 1" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: PHYS 1301 + 1101";
    }
    
    else if(score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
    if(apClasses == "AP Physics C: Mechanics" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: PHYS 2325 + 2125";
    }
    
    else if(apClasses == "AP Physics C: Mechanics" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: PHYS 2325 + 2125";
    }
    
    else if(score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
    if(apClasses == "AP Physics C: Electrical and Magnetic" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: PHYS 2326†+ 2126";
    }
    
    else if(apClasses == "AP Physics C: Electrical and Magnetic" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: PHYS 2326†+ 2126";
    }
    
    else if(score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
    if(apClasses == "AP Statistics" && score == 4 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: STAT 1342†";
    }
    
    else if(apClasses == "AP Statistics" && score == 5 )
    {
        cout << "Congratulations! You will be able to recieve credit for " << apClasses << ". Credit awarded: STAT 1342†";
    }
    
    else if(score == 3)
    {
        cout << "Credit awarded: 3 SCH free electives";
    }
    
}

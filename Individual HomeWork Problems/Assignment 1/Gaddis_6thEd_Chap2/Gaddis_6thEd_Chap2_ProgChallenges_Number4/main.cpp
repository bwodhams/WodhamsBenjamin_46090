/* 
 * File:   main.cpp
 * Author: Ben Wodhams
 *
 * Created on June 26, 2015, 2:00 PM
 * Purpose : Gaddis 6th Edition Chapter 2 Number 4
 */

//System Libraries
#include <iostream>//I/O Library
#include <iomanip>
using namespace std;//Namespace for iostream
 
//User Libraries
 
//Global Constants

//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare variables
    float mlChrg=44.50; //Meal Charge = $44.50 (In dollars)
    float tax=.0675; //Meal Tax = 6.75% of meal charge.
    float tip=.15; //Tip = 15% of (meal charge + tax)
    
    //Calculate Tax Amount
    float txAmnt=tax*mlChrg; //Tax amount = Tax * Meal Charge (In Dollars)
    
    
   //Calculate Price used to determine price before Tip
    float txandml=(txAmnt)+(mlChrg); //Tax and Meal Charge = Total price before Tip (In Dollars)
    
   //Calculate Price of Tip
    float tipPrc=txandml*tip; //Tip price = Tax and Meal Charge * Tip percentage (Tip Price given in Dollars)
    
    
   //Calculate total Bill Amount
    float totBill=txandml+tipPrc; //Total Bill Amount = Tax and meal charge + Tip amount (in Dollars)
    
    
   //Output
    cout<<setprecision(2)<<fixed; //Fix output to two significant digits
    
    cout<<"The meal cost is :         $"
            <<txandml<<endl;
    cout<<"The tax amount is :        $"
            <<txAmnt<<endl;
    cout<<"The tip amount is :        $"
            <<tipPrc<<endl;
    cout<<"The total bill amount is : $"
            <<totBill<<endl;
    
     return 0;
            
}

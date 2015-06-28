/* 
 * File:   main.cpp
 * Author: Ben Wodhams
 *
 * Created on June 26, 2015, 4:00 PM
 * Purpose : Gaddis 6th Edition Chapter 2 Number 2
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
    float totSls=4.6; //Total Sales 4.6 million (In Dollars)
    float eastPct=.62; //East Percentage = percent of total sales from East Coast Division
    
    
    //Calculate money earned by East Coast Division
    float eastTot=totSls*eastPct; //East Total = Total sales * East Coast Divison Percentage (in Dollars)
    
    
   //Output
    cout<<setprecision(1)<<fixed; //Fix output to one significant digit
    cout<<"The total amount of money the East Coast Division will generate in a year is : $"
            <<eastTot
            <<" million"<<endl;
    
     return 0;
            
}

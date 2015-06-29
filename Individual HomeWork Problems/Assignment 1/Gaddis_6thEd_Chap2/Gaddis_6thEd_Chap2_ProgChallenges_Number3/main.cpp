/* 
 * File:   main.cpp
 * Author: Ben Wodhams
 *
 * Created on June 26, 2015, 1:03 PM
 * Purpose : Gaddis 6th Edition Chapter 2 Number 3
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//Namespace for iostream
 
//User Libraries
 
//Global Constants

//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare variables
    float itmPrc=52; //Item Price = $52
    float ssTax=.04; //State Sales Tax = 4%
    float csTax=.02; //County Sales Tax = 2%
    float tsTax=.06; //Total Sales Tax = 6%
    
    //Calculate total sales tax in dollars
    float tsTaxD=itmPrc*tsTax; //Total Sales Tax in Dollars = Item Price * Total Sales Tax
    
    
    cout<<"The amount of money you will pay for taxes is : $"
    <<tsTaxD<<endl;
    
     return 0;
            
}

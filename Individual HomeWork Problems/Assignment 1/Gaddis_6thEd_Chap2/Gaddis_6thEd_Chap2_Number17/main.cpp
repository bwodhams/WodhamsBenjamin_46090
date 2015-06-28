/* 
 * File:   main.cpp
 * Author: Ben Wodhams
 *
 * Created on June 26, 2015, 5:00 PM
 * Purpose : Gaddis 6th Edition Chapter 2 Number 17
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
    float shares=600; //Number of Shares of stock that Kathryn Bought
    float pps=21.77; //Price per share (In Dollars)
    float brcomm=.02; //Stock Broker Commission of 2%
    
    //Calculate amount paid for the stock alone
    float stckPrc=shares*pps; //Stock Price = Shares * Price Per Share (In Dollars)
    
    //Calculate amount of commission paid to broker
    float commPrc=stckPrc*brcomm; //Commission Price = Stock Price * Broker Commission Percentage  (In Dollars)
    
    //Calculate the TOTAL amount paid
    float totPrc=stckPrc+commPrc; //Total Price = Stock Price + Commission Price (In Dollars)
    
   //Output
    cout<<setprecision(2)<<fixed; //Fix output to two significant digits
    cout<<"The amount paid for the stock alone is : $"
            <<stckPrc<<endl;
    cout<<"The amount paid for the commission is :  $"
            <<commPrc<<endl;
    cout<<"The total amount paid is :               $"
            <<totPrc<<endl;
    
    
    
     return 0;
            
}

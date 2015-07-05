/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 1, 2015, 11:04 AM
 * Purpose : Monthly Payments
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    
    //Declare Variables
    float loan=10000; //Loan = $10000
    float intrst=.01; //Interest = 1% per month
    float num=36; //Number of months = 36
    float monpay; //Monthly payment
    float temp=1; //Intermediate value found in Monthly Payment
    float cstLoan;  //Cost of the loan in $'s
    float totCost; //Total Cost
    
    //Calculate the intermediate value
    float onePlsi=(1+intrst);
    for(int months=1;months<=num;months++){
        temp*=onePlsi;
    }
    
    //Calculate the monthly payment
    monpay=intrst*temp*loan/(temp-1);
    totCost=num*monpay;
    cstLoan=totCost-loan;
    
    
    //Output the results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Loan Amount :             $"
            <<setw(8)<<loan<<endl;
    cout<<"Monthly Interest Rate:     "
            <<setw(8)<<intrst*100<<"%"<<endl;
    cout<<"Number of Payments:        "
            <<setw(8)<<static_cast<int>(num)<<endl;
    cout<<"Your monthly payment is : $"
            <<setw(8)<<monpay<<endl;
    cout<<"Amount Paid Back:         $"
            <<setw(8)<<totCost<<endl;
    cout<<"Interest Paid:            $"
            <<setw(8)<<cstLoan<<endl;
    
    
    
    //Exit stage right!

    return 0;
}


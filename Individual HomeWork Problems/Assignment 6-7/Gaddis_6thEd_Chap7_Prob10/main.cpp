/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 24, 2015, 12:25 PM
 * Purpose: Payroll
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    int empID[7]={5658845, 4520125, 7895122, 877541, 8451277, 1302850, 7580489};
    int hours[7];
    float pRates[7],wage[7];
    
    //Get input from user
    for(int i=-1; i<6; i++){
        cout<<"Please enter the number of hours worked by "<<empID[i+1]<<" : ";
        cin>>hours[i];
        cout<<"Now, please enter the pay rate for "<<empID[i+1]<<" : ";
        cin>>pRates[i];
    }
    //Calculate wages
    for(int i=0; i<7; i++){
        wage[i]=hours[i]*pRates[i];
    }
    
    //Output the results
    for (int i=-1; i<6; i++){
        cout<<"Employee ID : "<<empID[i+1]<<"\nWage: $"<<wage[i]<<endl;
    }

    //Exit stage right!

    return 0;
}
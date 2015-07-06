/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 5, 2015, 11:49 PM
 * Purpose: 
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    int month; // Month of the year
    int day; // Day of the month
    int year; // Year
    int mult;
    
    
    //User Input
    cout<<"Please input the month number"<<endl;
    cin>>month;
    cout<<"Please input the day number"<<endl;
    cin>>day;
    cout<<"Please input the last two digits of the year"<<endl;
    cin>>year;
    
    
    //Multiplication of month and day
    mult=month*day;
    
    //Determine if it's a magic date
    if (mult==year){
        cout<<"The date is magic"<<endl;
    }else
        cout<<"The date is not magic"<<endl;
    
    
    

    //Output the results






    //Exit stage right!

    return 0;
}


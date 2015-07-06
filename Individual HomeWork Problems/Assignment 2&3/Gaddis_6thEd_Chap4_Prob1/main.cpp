/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 6, 2015, 1:03 AM
 * Purpose: Minimum/Maximum
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float num1,num2; // Two inputted numbers
    
    
    //Ask for the first number
    cout<<"Enter the first number please."<<endl;
    cin>>num1;
    cout<<endl<<endl;
    cout<<"Now enter the second number."<<endl;
    cin>>num2;
    cout<<endl<<endl;
    
    
    //Use conditional operator to determine larger number
    num1>num2?cout<<"The first number is larger and the second number is smaller":cout
            <<"The first number is smaller and the second number is larger"<<endl;

    //Output the results






    //Exit stage right!

    return 0;
}


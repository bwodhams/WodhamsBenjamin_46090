/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 5, 2015, 12:59 PM
 * Purpose: Convert Celcius to Fahrenheit Problem
 */

#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float dCel; //Degrees in Celsius
    
    //Output the results
    
    cout<<"Please input the degrees in Celsius"<<endl;
    cin>>dCel;
    float fForm=(9.0f/5.0f)*dCel+32.0f; //Formula to convert Celsius to Fahrenheit  
    cout<<dCel<<" C is "<<fForm<<" F "<<endl; //Output Degrees Celsius converted to Fahrenheit
    
    //Exit stage right!

    return 0;
}


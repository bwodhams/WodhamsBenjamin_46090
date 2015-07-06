/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 6, 2015, 12:42 AM
 * Purpose: Mass and Weight problem
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const float grav=9.8; // Acceleration due to gravity in m/s^2

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float wt,mass; // wt = Weight  Mass=mass
    
    //Calculate and display weight
    cout<<"What is the object's mass? (in kg)"<<endl;
    cin>>mass;
    wt=mass*grav;
    cout<<"The object weighs "<<wt<<" N "<<endl;
    cout<<endl<<endl;
    
    //If/else statement to determine if N is larger than 1000 N or smaller than 10 N
    if (wt>1000){
        cout<<"The object is too heavy!"<<endl;
    }else if (wt<10)
        cout<<"The object is too light!"<<endl;

    //Output the results






    //Exit stage right!

    return 0;
}


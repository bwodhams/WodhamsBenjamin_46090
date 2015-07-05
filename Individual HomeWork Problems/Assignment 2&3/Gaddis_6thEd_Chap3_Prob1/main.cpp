/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 5, 2015, 2:01 PM
 * Purpose: Miles per gallon
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float gsGal; // Number of gallons of gas the car can hold
    float miles; // Number of miles car can drive on a full tank of gas
    float mpg; // Miles per gallon


    //Output the results
    cout<<"How many gallons of gas can your car hold?"<<endl;
    cin>>gsGal;
    cout<<endl<<endl;
    cout<<"How many miles can you drive on a full tank of gas?"<<endl;
    cin>>miles;
    cout<<endl<<endl;
    mpg=miles/gsGal;
    cout<<"The number of miles you can drive per gallon of gas is : "
            <<mpg<<" miles"<<endl;
    
    //Exit stage right!

    return 0;
}

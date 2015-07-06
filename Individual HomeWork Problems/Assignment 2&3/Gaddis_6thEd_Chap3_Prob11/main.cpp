/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 5, 2015, 7:19 PM
 * Purpose: Currency Converter
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float dollar; // Dollar amount
    float yen=122.64; // Yen = 112.64 per $1
    float euro=0.91; // Euro = .91 per $1
    float dty; // dty = Dollars to Yen
    float dte; // dte = Dollars to Euros
    

    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Enter the amount of dollars you would like converted to Yen and Euros."<<endl;
    cin>>dollar;
    dty=dollar*yen; // Convert dollars to Yen
    dte=dollar*euro; // Convert dollars to Euros
    cout<<"$"<<dollar<<" = "<<dty<<" Yen or "<<dte<<" Euros "<<endl;

    //Exit stage right!

    return 0;
}


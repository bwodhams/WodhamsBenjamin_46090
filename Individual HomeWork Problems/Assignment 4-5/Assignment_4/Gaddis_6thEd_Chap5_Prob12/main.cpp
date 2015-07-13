/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 12, 2015, 8:41 PM
 * Purpose: Celsius to Fahrenheit Table
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
    float fahr; //Fahrenheit
    float cels; //Celsius
    
    //Output the results
    cout<<"     Celsius        "<<"Fahrenheit  "<<endl; //Table heading
    for(cels=0;cels<=20;cels++){
        fahr=(9/5)*cels+32;
        cout<<setw(5)<<cels<<" degrees    ="<<setw(5)<<fahr<<" degrees  "<<endl;
    }






    //Exit stage right!

    return 0;
}


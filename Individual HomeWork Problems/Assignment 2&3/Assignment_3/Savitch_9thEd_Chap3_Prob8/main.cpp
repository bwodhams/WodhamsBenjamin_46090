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
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    
    //Declare Variables
    int nTerms=2000000;
    double apprxPI=1;
    
    //Now Calculate PI with a for-loop
    for(int i=3,nTerm=1;nTerm<=nTerms;i+=4,nTerm+=2){
        apprxPI+=(-1.0f/i+1.0f/(i+2));
        
    }
    apprxPI*=4;
    
    //Output the results and compare
    cout<<fixed<<showpoint<<setprecision(15);
    cout<<"Exact Value of PI = "<<PI<<endl;
    cout<<"The approximate value of PI = "<<apprxPI<<endl;
    

    return 0;
}


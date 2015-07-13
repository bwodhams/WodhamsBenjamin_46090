/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 12, 2015, 4:57 PM
 * Purpose: Membership Fees Increase
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float mFee=.04; //Membership fee increases by 4% each year
    float fee=2500; //Initial membership fee $2,500
    int years=6; //6 year period
    float totFee; //Total fee over time
    
    

    //Output the results
    for(years=1;years<=6;years++){
        fee+=fee*mFee; //Calculate fee per year
        cout<<"Year "<<years<<" charges = $"<<fee<<endl;
        
    }






    //Exit stage right!

    return 0;
}


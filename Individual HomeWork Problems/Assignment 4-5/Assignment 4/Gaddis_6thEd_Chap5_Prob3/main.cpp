/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on July 12, 2015, 7:50 AM
 * Purpose : Determine how much ocean will rise over 25 years in millimeters
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float stLvl=1.5; //First year risen level
    float mpy=1.5; //Level of rising per year in millimeters.
    unsigned int year=1; //Year
    float tot; // Total to increment each year in millimeters
    
    
    



    //Output the results
    cout<<"Year    "<<"Amount ocean level has risen (mm)"<<endl; //Table heading
    
    for(year=1;year<=25;year++){
        tot += mpy;
        
        cout<<year<<"                "<<tot<<endl;
    }






    //Exit stage right!

    return 0;
}

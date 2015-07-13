/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 13, 2015, 1:23 AM
 * Purpose: Falling Distance
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float flDst(int);
//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float dstnc;
    int time;
    
    //Loop to repeat for time x=?
    for(time=1;time<=10;time++){
        //Call function flDst
        dstnc=flDst(time);
        //Output the results
        cout<<"The distance at time interval "<<time<<" in meters is : "<<dstnc<<endl;
        
    }


    //Exit stage right!

    return 0;
}

/**********************************************************************************
 **********************************************************************************
 *************************************  flDst   ***********************************
 **Purpose : Calculate falling distance in meters     *****************************
 **Input : Time           *********************************************************
 **Output : Distance      *********************************************************
 **********************************************************************************
 **********************************************************************************
 **********************************************************************************
 */


float flDst(int time){
    float dstnc,g=9.8; //Distance and gravity = 9.8 m/s^2
    dstnc=static_cast<float>(0.5*g*time*time);
    return dstnc;
}

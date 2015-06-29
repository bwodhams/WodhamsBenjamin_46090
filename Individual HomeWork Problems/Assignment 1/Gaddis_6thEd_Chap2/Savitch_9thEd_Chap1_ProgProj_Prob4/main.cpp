/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on June 23, 2015, 12:06 PM
 * Purpose : Homework, Free Fall
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants
const float GRAVITY=3.2174e1f;//Acceleration due to Gravity Earth (ft/s^2)

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    //dstnce = distance dropped in (ft)
    //time = time in (s)
    float dstnce, time;
    //Prompt then input the time
    cout<<"To calculate the Distance Dropped"<<endl;
    cout<<"Input the Time in Seconds"<<endl;
    cout<<"Time should be in floating point format"<<endl;
    cin>>time;
    //Calculate the free-fall distance
    dstnce=GRAVITY*time*time/2;
    //Output the results
    cout<<"The distance traveled = ";
    cout<<dstnce<<"(ft)"<<endl;
    //Exit stage right!
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 5, 2015, 10:32 PM
 * Purpose: Average Rainfall
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
    string mnth1; // First month input
    string mnth2; // Second month input
    string mnth3; // Third month input
    float mnth1in; // First month rainfall (in inches)
    float mnth2in; // Second month rainfall (in inches)
    float mnth3in; // Third month rainfall (in inches)
    float avgrn; // Average rainfall
    


    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Please enter the first month."<<endl;
    cin>>mnth1;
    cout<<"Please enter the amount of rain that fell in "<<mnth1<<" (in inches) "<<endl;
    cin>>mnth1in;
    cout<<endl<<endl;
    cout<<"Please enter the second month."<<endl;
    cin>>mnth2;
    cout<<"Please enter the amount of rain that fell in "<<mnth2<<" (in inches) "<<endl;
    cin>>mnth2in;
    cout<<endl<<endl;
    cout<<"Please enter the third month."<<endl;
    cin>>mnth3;
    cout<<"Please enter the amount of rain that fell in "<<mnth3<<" (in inches) "<<endl;
    cin>>mnth3in;
    cout<<endl<<endl;
    avgrn=(mnth1in+mnth2in+mnth3in)/3;
    cout<<"The average rainfall for "<<mnth1<<", "<<mnth2<<", and "<<mnth3<<" is "<<avgrn<<" inches."<<endl;
    
   
    //Exit stage right!

    return 0;
}


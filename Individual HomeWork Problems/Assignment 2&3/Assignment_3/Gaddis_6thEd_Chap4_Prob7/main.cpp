/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 *
 * Created on July 2, 2015, 12:20 PM
 * Purpose : Time calculator
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global constants

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare our variables
    int tSecs; //Time in seconds
    int tSec2; //Time remaining in seconds
    int tMin; //Time in minutes
    int tHour; //Time in hours
    int nDays; //Number of days
    int nMont; //Number of months
    int nYrs; //Number of years
    int nWeek; //Number of weeks
    
    
    cout<<"Please input the amount of time, in seconds."<<endl;
    cin>>tSec2;
    
    tSec2=tSecs%60; //How many seconds
    tSecs/=60; //Now determine minutes
    tMin=tSecs%60; //How many minutes
    tSecs/=60; //Now determine Hours
    tHour=tSecs%24; //How many hours
    tSecs/=24; //Now determine Days
    nDays=tSecs%7; //How many days
    tSecs/=7;  //Now determine Weeks
    nWeek=tSecs%4; //How many weeks
    tSecs/=4; //Now determine months
    nMont=tSecs%12; //How many months
    nYrs=tSecs/12; //How many years

    
    //Output
    cout<<"Here are your conversions"<<endl;
    cout<<endl;
    cout<<nYrs<<" years"<<endl;
    cout<<endl;
    cout<<nMont<<" months"<<endl;
    cout<<endl;
    cout<<nWeek<<" weeks"<<endl;
    cout<<endl;
    cout<<nDays<<" days"<<endl;
    cout<<endl;
    cout<<tHour<<" hours"<<endl;
    cout<<endl;
    cout<<tMin<<" minutes"<<endl;
    cout<<endl;
    cout<<tSec2<<" seconds"<<endl;
    cout<<endl;

    return 0;
}


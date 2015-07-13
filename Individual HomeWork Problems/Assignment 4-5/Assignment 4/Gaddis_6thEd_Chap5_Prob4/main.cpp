/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on July 12, 2015, 8:32 AM
 * Purpose : Calculating calories burned
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    
    float cpm=3.9; //Calories per minute
    float totCal; //Total Calories
    unsigned int minute; //Minute mark
    



    //Output the results
    cout<<"Minutes    "<<"Calories Burned"<<endl;
    for(minute=1;minute<=30;minute++){
        totCal += cpm; // Calculate calories burned total up to that minute
        if(minute==10){
            cout<<minute<<"             "<<totCal<<endl;
        }
        if(minute==15){
            cout<<minute<<"             "<<totCal<<endl;
        }
        if(minute==20){
            cout<<minute<<"             "<<totCal<<endl;
        }
        if(minute==25){
            cout<<minute<<"             "<<totCal<<endl;
        }
        if(minute==30){
            cout<<minute<<"             "<<totCal<<endl;
        }
    }






    //Exit stage right!

    return 0;
}

/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 24, 2015, 10:30 AM
 * Purpose: 
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float min,  //smallest value
          max,  //largest value
          sum=0,//sum of all values
          avg;  //average of all values
    //Initialize array
    const int SIZE=12;
    float array[SIZE];

    //Get user inputted values
    
    cout<<"Please enter the amount of rainfall per month for the "<<SIZE<<" months. (in inches)"<<endl;
    for(int i=0; i<SIZE; i++){
        cout<<"Rainfall for month number : "<<i+1<<endl;
        cin>>array[i];
    }
        
    
    //Determine smallest and largest rainfall months
    //Initialize arrays
    min=array[0];
    max=array[0];
    for(int j=0; j<SIZE; j++){
        if(array[j]>=max){
            max=array[j];
        }
        if(array[j]<=min){
            min=array[j];
        }
    }
    
    //Calculate sum and average
    for (int i=0; i<SIZE; i++){
        sum+=array[i];
    }
    
    avg=sum/SIZE;
    //Output the results
    cout<<"The total rainfall for the year was "<<sum<<" inches."<<endl;
    cout<<"The average monthly rainfall for the year was "<<avg<<" inches."<<endl;
    cout<<"The max rainfall occurred was "<<max<<" inches in a month"<<endl;
    cout<<"The min rainfall occurred was "<<min<<" inches in a month"<<endl;


    //Exit stage right!

    return 0;
}

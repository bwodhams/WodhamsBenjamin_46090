/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 24, 2015, 10:15 AM
 * Purpose: Largest/Smallest Array Values
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
    const int SIZE=10;  //Size of array
    int small,       //Small number
            large;   //Large number
    int array[SIZE];  //Initialize array
    
    //Get intput from user
    cout<<"Please input the 10 values into the array!"<<endl;
    for(int i=0; i<SIZE; i++){
        cin>>array[i];
    }
    
    //Initialize first small and large variable
    small=array[0];
    large=array[0];
    
    //Determine largest and smallest numbers
    for(int j=0; j<SIZE; j++){
        if(array[j]>large)
            large=array[j];
        if(array[j]<small)
            small=array[j];
    }
    
    //Output the results
    cout<<"The smallest value is : "<<small<<endl;
    cout<<endl<<endl;
    cout<<"The largest value is : "<<large<<endl;
    cout<<endl<<endl;

    //Exit stage right!

    return 0;
}



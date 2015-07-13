/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 13, 2015, 1:48 AM
 * Purpose: Coin Toss
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void cToss();

//Execution Begins Here!

int main(int argc, char** argv) {
    //Set random seed
    srand((time(0)));

    //Declare Variables
    int number;
    //Input number of times to toss
    cout<<"Please enter number of tosses:"<<endl;
    cin>>number;
    
    //For Loop
    for(int i=0;i<number;i++){
        //Output the results
        cToss();
    }

    //Exit stage right!

    return 0;
}



/*******************************************************************************
 *******************************************************************************
 *********************************   cToss   ***********************************
 *******************************************************************************
 **Purpose : Calculate results of tosses     ***********************************
 **Input : Num        **********************************************************
 **Output : Heads or tails       ***********************************************
 *******************************************************************************
 *******************************************************************************
 */
void cToss(){
    int num;
    num=1+rand()%2; //Generates a random number
    if(num==1)
        cout<<"Heads"<<endl;
    else
        cout<<"Tails"<<endl;
}

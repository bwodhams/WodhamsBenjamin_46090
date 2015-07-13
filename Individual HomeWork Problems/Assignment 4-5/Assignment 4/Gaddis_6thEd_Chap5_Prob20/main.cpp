/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 12, 2015, 5:56 PM
 * Purpose: Random Number Guessing Game
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Set the random seed
    srand((time(0)));

    //Declare Variables
    int x; //Input number
    int randNum=rand();
    unsigned int num;
    num=1 + (randNum % 100); //Generates random number between 1 and 100



    //Output the results
    cout<<"Guess a number between 1 and 100"<<endl;
    do{
        cin>>x;
        if(x>num)
            cout<<"Too high, try again";
        cout<<endl;
        if(x<num)
            cout<<"Too low, try again";
        cout<<endl;
        if(x==num){
            cout<<"Nicely done, you got it right"<<endl;
            break;
        }
        cout<<endl;
    }while(x!=num);

    //Exit stage right!

    return 0;
}


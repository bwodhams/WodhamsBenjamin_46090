/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 5, 2015, 10:56 PM
 * Purpose: 
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float cbag=40; // Cookie bag has 40 cookies per bag
    float sbag=10; // Servings per bag = 10
    float cps=300; // Calories per serving = 300
    float cpc=(cps/4); // Calories per cookie 
    float cookeat; // Number of cookies eaten
    float caltot; // Total calories



    //Output the results
    cout<<"Enter the amount of cookies you ate."<<endl;
    cin>>cookeat;
    caltot=cookeat*cpc;
    cout<<"The total amount of calories you consumed was : "
            <<caltot<<" calories."<<endl;
    
    
    






    //Exit stage right!

    return 0;
}


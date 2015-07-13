/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 13, 2015, 1:35 AM
 * Purpose: Kinetic Energy
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float kEnrg(float,float);
//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float mass; //Mass
    float veloc; //Velocity
    float kE; //Kinetic Energy
    
    //Input mass
    cout<<"Enter mass of body:"<<endl;
    cin>>mass;
    //Input Velocity
    cout<<"Now enter velocity:"<<endl;
    cin>>veloc;
    
    //Call kEnrg function to calculate distance
    kE=kEnrg(mass,veloc);
    
    //Output the results
    cout<<"Kinetic Energy : "<<kE<<" J "<<endl;
    
    
    //Exit stage right!

    return 0;
}



/*******************************************************************************
 *******************************************************************************
 *********************************kEnrg ****************************************
 *******************************************************************************
 **Purpose : Calculate Kinetic Energy    ***************************************
 **Input : mass, velocity          *********************************************
 **Output : Kinetic Energy      ************************************************
 *******************************************************************************
 *******************************************************************************
 */
float kEnrg(float mass,float veloc){
    float kE;
    kE=(0.5*mass*veloc*veloc);
    return kE;
}


/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 *
 * Created on July 2, 2015, 10:22 AM
 * Purpose : Approximate PI
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global constants
const double PI=4*atan(1.0);
const double MXRND=pow(2,31)-1;

int main(int argc, char** argv) {
    //Set the random number seed with time
    srand(static_cast<unsigned int>(time(0)));
    //Determine the maximum and minimum 
    unsigned int max=rand(),min=rand();
    unsigned int nDarts=1000000,nDrtInC=0;
    float apprxPI=0;
    //Loop to find the darts in the circle
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MXRND;//[0,1]
        float y=rand()/MXRND;//[0,1]
        if(x*x+y*y<=1)nDrtInC++;    
    }
    apprxPI=4.0f*nDrtInC/nDarts;
    //Output the results
    cout<<fixed<<showpoint<<setprecision(20)<<endl;
    cout<<"Exact value of PI = "<<PI<<endl;
    cout<<"The approximate value of PI = "<<apprxPI<<endl;
    
    
    //Exit stage right!

    return 0;
}


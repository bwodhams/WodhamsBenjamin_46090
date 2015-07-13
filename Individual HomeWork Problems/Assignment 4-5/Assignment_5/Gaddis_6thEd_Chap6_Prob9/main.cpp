/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 13, 2015, 2:06 AM
 * Purpose: Present Value
 */

#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float pVal(float,float,float);
//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float f,n; //F = Future Value, n=number of years
    float r; // annual interest rate
    
    //Input from user
    cout<<"Enter Future Value :"<<endl;
    cin>>f;
    cout<<"Enter annual interest rate:"<<endl;
    cin>>r;
    cout<<"Enter number of years:"<<endl;
    cin>>n;
    
    //Call function pVal
    float p=pVal(f,r,n);
    //Output the results
    cout<<p;

    //Exit stage right!

    return 0;
}




/**************************************************************************
 **************************************************************************
 ***************************   pVal   *************************************
 **************************************************************************
 **************************************************************************
 **Input : Future value, interest rate, number of years    ****************
 **Output : Present value       *******************************************
 **************************************************************************
 **************************************************************************
 */



float pVal(float f, float r, float n){
    float p;
    p=f/(pow((1+r),n));
    return p;
}

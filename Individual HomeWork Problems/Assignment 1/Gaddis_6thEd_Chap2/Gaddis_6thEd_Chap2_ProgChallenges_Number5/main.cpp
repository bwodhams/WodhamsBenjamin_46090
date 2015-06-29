/* 
 * File:   main.cpp
 * Author: Ben Wodhams
 *
 * Created on June 26, 2015, 4:15 PM
 * Purpose : Gaddis 6th Edition Chapter 2 Number 5
 */

//System Libraries
#include <iostream>//I/O Library

using namespace std;//Namespace for iostream
 
//User Libraries
 
//Global Constants

//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare variables
    float var1=28; //Declare Variable 1
    float var2=32; //Declare Variable 2
    float var3=37; //Declare Variable 3
    float var4=24; //Declare Variable 4
    float var5=33; //Declare Variable 5
    
    
    //Calculate the sum of all variables
    float sum=(var1+var2+var3+var4+var5); //Adds Variable 1 to Variable 5 all together to get the SUM
    
    
   //Calculate the average of all variables
    float avg=sum/5; //Average of all variables = SUM of all variables divided by 5.
    
    
    
   //Output
    cout<<"The average is : "
            <<avg<<endl;
    
     return 0;
            
}

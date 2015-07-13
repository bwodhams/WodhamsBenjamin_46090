/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on July 12, 2015, 9:01 AM
 * Purpose : Sum of numbers
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    int num; //Number inputted by user
    int sum=0; // Sum of all numbers
    int temp; //Temp value
    

    //Output the results
    
    cout<<"Please input a number greater than or equal to 0"<<endl;
    cin>>num;
    for (temp=1;temp<=num;temp++){
        sum+=temp;
    }
    cout<<"The sum of all the integers from 1 to "<<num<<" = "<<sum<<endl;



      

    //Exit stage right!

    return 0;
}

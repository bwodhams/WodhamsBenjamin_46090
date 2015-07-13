/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 12, 2015, 11:42 PM
 * Purpose: isPrime Function
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool isPrime(int);
//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    int number; //Number inputted


    //Output the results
    cout<<"Please enter a number : "<<endl;
    cin>>number;
    if(isPrime(number)) //Call function here to determine if number is prime or not
        cout<<number<<" is a prime number"<<endl;
    else
        cout<<number<<" is not a prime number"<<endl;






    //Exit stage right!

    return 0;
}


/************************************************************************
 ************************************************************************
 **************************  isPrime Function  **************************
 **Purpose : To determine if number is a prime number   *****************
 **Input : count,temporary integer, number       ************************
 **Output : bool - > True if prime False if not prime  ******************
 ************************************************************************
 ************************************************************************
 */





bool isPrime(int num){
    int count=0;
    for(int temp=2;temp<=num/2;temp++){ //Calculate and determine if number is prime or not
        if(num%temp==0)
            count++;
    }
    if(count>0)
        return false;
    else
        return true;
}

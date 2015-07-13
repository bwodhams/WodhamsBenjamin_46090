/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 12, 2015, 11:42 PM
 * Purpose: Prime Number List
 */

#include <iostream>
#include <fstream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool isPrime(int);
//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    int number=0; //Number inputted
    int temp; //Temporary variable
    


    //Output the results
        ofstream outFile;
        outFile.open("PrimeList.txt"); //Create output file
        for(temp=1;temp<=100;temp++){
            isPrime(temp);
        while(isPrime(temp)==true){
            outFile<<temp<<endl<<endl; //Output prime numbers to file
            break;
            }
        }
    
        outFile.close();
        cout << "Prime numbers written to PrimeList.txt.\n";
        outFile.close();



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

/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 12, 2015, 5:47 PM
 * Purpose: Square Display
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    int num; //Number that is inputted
    int temp; //Temp variable
    int temp2; //Second temp variable


    //Output the results
    cout<<"Please enter a positive number that is less than or equal to 15"<<endl;
    cin>>num;
    if(num>15){
        cout<<"You didn't input a number less than 15!"<<endl;
    }else{
        for(temp=1;temp<=num;temp++){
            for(temp2=1;temp2<=num;temp2++)
                cout<<"x";
            cout<<endl;
        }
    }






    //Exit stage right!

    return 0;
}


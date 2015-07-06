/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 6, 2015, 12:54 AM
 * Purpose: Roman Numeral Converter
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    int num; // Number inputted
    
    
    //Start Execution
    cout<<"Enter a number within the range of 1 and 10:"<<endl;
    cin>>num;
    
    
    //If statement to determine roman numeral
    if (num<1 || num>10){
        cout<<"That number is not within the range"<<endl;
        cout<<"Please input a number within the range"<<endl;
        cin>>num;
    }

    switch (num){
        case 1: cout<<"I"<<endl;
                break;
        case 2: cout<<"II"<<endl;
                break;
        case 3: cout<<"III"<<endl;
                break;
        case 4: cout<<"IV"<<endl;
                break;
        case 5: cout<<"V"<<endl;
                break;
        case 6: cout<<"VI"<<endl;
                break;
        case 7: cout<<"VII"<<endl;
                break;
        case 8: cout<<"VIII"<<endl;
                break;
        case 9: cout<<"IX"<<endl;
                break;
        case 10: cout<<"X"<<endl;
                break;           
        
    }
    //Output the results






    //Exit stage right!

    return 0;
}


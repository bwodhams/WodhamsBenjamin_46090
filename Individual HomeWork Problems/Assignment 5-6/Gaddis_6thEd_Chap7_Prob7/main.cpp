/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 24, 2015, 11:48 AM
 * Purpose: Lowercase to Uppercase Converter
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    char string[20];
    //Input string
    cout<<"Enter the string: ";
    cin.getline(string,20);
    
    for(int i=0; string[i]!='\0'; i++){
        if(string[i]>=97)
            string[i]=toupper(string[i]);
    }

    //Output the results
    //Display uppercase string
    cout<<"The string is : "<<string<<endl;


    //Exit stage right!

    return 0;
}




/*******************************************************************************************************
 *******************************************************************************************************
 *******************************            Title
 ** Purpose:
 ** Input:
 ** Output:
 *******************************************************************************************************
 */

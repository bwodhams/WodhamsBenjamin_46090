/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 24, 2015, 11:56 AM
 * Purpose: Proper words
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void pWords(char []);
//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    char string[20];
    //Input string
    cout<<"Enter the string : ";
    cin.getline(string,20);
    
    //Call function
    pWords(string);
    
    
    //Output the results
    //Show string
    cout<<"The string is : "<<string<<endl;

    //Exit stage right!

    return 0;
}




/*******************************************************************************************************
 *******************************************************************************************************
 *******************************            pWords
 ** Purpose: Convert first letter in each word to capital letter if not already capital
 ** Input: string
 ** Output: modified string
 *******************************************************************************************************
 */
void pWords(char str[]){
    //Convert first character to uppercase
    str[0]=toupper(str[0]);
    for(int i=1;str[i]!='\0';i++){
        if (str[i]==' '){
            str[i+1]=toupper(str[i+1]);
        }
    }
}
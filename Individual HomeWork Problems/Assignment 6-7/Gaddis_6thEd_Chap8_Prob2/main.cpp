/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 24, 2015, 2:07 PM
 * Purpose: Lottery Winners
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool srchWin(int [], int, int);

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    int SIZE=10;
    int winNums[10]={13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int playNum; //Player's number
    
    //Get input from user
    cout<<"Please enter your number: ";
    cin>>playNum;
    
    //Call function
    bool result=srchWin(winNums,SIZE,playNum);
    
    
    
    //Output the results
    //See if result is true or false
    if(result)
        cout<<"One of the winning numbers is yours!"<<endl;
    else
        cout<<"Your number is not in the winning numbers list."<<endl;

    //Exit stage right!

    return 0;
}




/*******************************************************************************************************
 *******************************************************************************************************
 *******************************            srchWin
 ** Purpose:Search to see if person is a winner
 ** Input: winning numbers, size, and player's numbers
 ** Output: if person won or not
 *******************************************************************************************************
 */

bool srchWin(int winNums[],int SIZE, int playNum){
    //Initialize bool
    bool found=false;
    int index=0;
    //Loop
    while(index<SIZE&!found){
        if(winNums[index]==playNum){
            found=true;
            index++;
        }else{
        break;
    }
    }
    return found;
}
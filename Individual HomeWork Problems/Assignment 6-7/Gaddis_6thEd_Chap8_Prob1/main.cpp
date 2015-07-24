/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 24, 2015, 1:48 PM
 * Purpose: Charge account validation
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void linSrch (int[], int);
//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    int numCan=18; //Number of account charge numbers
    const int SIZE=18; //Array size
    int array[18]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    
    
    
    //Output the results
    //Call array
    linSrch(array, numCan);

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
void linSrch(int array[], int numCan){
    int crgNum;
    bool found=false;
    cout<<"Enter account charge number: "<<endl;
    cin>>crgNum;
    for(int i=0; i<numCan; i++){
        if(array[i]==crgNum){
            found=true;
            break;
        }
    }if(found){
        cout<<"Number is valid"<<endl;
    }else{
        cout<<"Number is not valid"<<endl;
    }
}
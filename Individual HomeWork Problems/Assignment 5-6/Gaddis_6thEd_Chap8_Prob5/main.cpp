/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 24, 2015, 3:27 PM
 * Purpose: 
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//User Libraries

//Global Constants
int months=12;
//Function Prototypes
void h2L(int [], string[]);
//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables  
    int values[months];
    
    string pMonths[months]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    //Get rainfall for each month
    for(int i=0; i<months; i++){
        do{
            cout<<"Enter the total rainfall for "<<pMonths[i]<<" : ";
            cin>>values[i];
            if(values[i]<0){
                cout<<"Enter positive rain fall please"<<endl;
            }
        }while(values[i]<0);
    }
    cout<<"Before sorting "<<endl;
    
    
    //Output the results
    //Print rainfall for each month
    for(int i=0; i<months; i++){
       cout<<setw(10)<<pMonths[i]<<setw(10)<<values[i]<<endl; 
    }
    
    //Call function
    h2L(values, pMonths);
    cout<<"After sorted in order of rainfall "<<endl;
    cout<<"From highest to lowest"<<endl;
    for(int i=0; i<months; i++){
        cout<<setw(10)<<pMonths[i]<<setw(10)<<values[i]<<endl;
        
    }

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
void h2L(int values[], string pMonths[]){
    bool swap;
    int temp;
    do{
        //Bubble Sort
        swap=false;
        for(int count=0; count<months; count++){
            if(values[count]<values[count+1]){
                //swap integer values
                temp=values[count];
                values[count]=values[count+1];
                values[count+1]=temp;
                //swap corresponding string values
                string tempS=pMonths[count];
                pMonths[count]=pMonths[count+1];
                pMonths[count+1]=tempS;
                swap=true;
            }
        }
    }while(swap);
}
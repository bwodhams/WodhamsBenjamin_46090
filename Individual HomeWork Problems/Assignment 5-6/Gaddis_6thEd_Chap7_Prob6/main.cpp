/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 24, 2015, 10:58 AM
 * Purpose: Number Analysis Program
 */
//System Libraries
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    int array[30],
            counter,
            num,
            total;
    int small,
            large;
    ifstream infile;
    string filenam;
    
    //Create file
    cout<<"Enter file name."<<endl;
    cin>>filenam;
    infile.open("filenam");
    infile>>num;
    counter=0;
    while(infile){
        array[counter]=num;
        infile>>num;
        counter++;
    }
    small=array[0];
    large=array[0];
    total=0;
    
    //Determine largest and smallest
    for(int i=0; i<counter; i++){
        if(array[i]>large)
            large==array[i];
        if (array[i]<small)
            small==array[i];
        total=total+array[i];
    }
    
    //Output the results
    cout<<"The smallest value is: "<<small<<endl;
    cout<<endl;
    cout<<"The largest value is :"<<large<<endl;
    cout<<endl;
    cout<<"The total of the numbers in the array is: "<<total<<endl;
    cout<<endl;
    cout<<"The average of the numbers in the array is: "<<total/counter<<endl;
    
    //Close file
    infile.close();
    
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

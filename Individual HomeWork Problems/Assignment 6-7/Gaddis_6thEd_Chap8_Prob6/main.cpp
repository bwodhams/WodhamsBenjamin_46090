/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 24, 2015, 3:59 PM
 * Purpose: 
 */
//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void selSort(string[], int);
//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    
    const int nNames=20;
    
    
    
    string names[nNames]={"Collins,Bill","Smith,Bart","Allen,Jim","Griffin,Jim",
                          "Stamey,Marty","Rose,Geri","Taylor,Terri","Johnson,Jill",
                          "Allison,Jeff","Looney Joe","Wolfe,Bill","James,Jean",
                          "Weaver,Jim","Pore,Bob","Rutheford,Gret","Javens,Renee", "Harrison,Rose",
                          "Setzer,Cathy","Pike,Gordon","Holland,Beth"};
    
    cout<<"Given string elements are: "<<endl;
    
    for(int i=0; i<nNames; i++){
        cout<<setw(15)<<names[i]<<endl;
    }
    
    //Call function
    selSort(names, nNames);
    
    cout<<"\nAfter selSort Applied: "<<endl;
    
    //Output the results
    for(int i=0; i<nNames; i++){
        cout<<setw(15)<<names[i]<<endl;
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
void selSort(string names[], int SIZE){
    //Declare Variables
    int sScan; //start scan
    int minInd; //Minimum index
    string minVal; //Min value
    
    for(sScan=0; sScan<(SIZE-1);sScan++){
        minVal=sScan;
        minVal=names[sScan];
        for(int i=sScan+1; i<SIZE; i++){
            if(names[i].compare(minVal)<0){
            minVal=names[i];
            minInd=i;
            }
        }
        names[minInd]=names[sScan];
        names[sScan]=minVal;
    }
    
}  
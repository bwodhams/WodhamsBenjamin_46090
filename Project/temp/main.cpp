/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 18, 2015, 4:50 PM
 * Purpose: BlackJack V_1
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!



int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));

    int p[52]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,
    42,43,44,45,46,47,48,49,50,51,52}; //Create the 52 cards in the deck
     for(int i=52; i>0; --i){
        
        int j=rand()%i;
        int temp=p[i];
        p[i]=p[j];
        p[j]=temp;
    }
    for(int k=0; k<52; ++k){
        cout<<p[k]<<endl;
      
    }

}
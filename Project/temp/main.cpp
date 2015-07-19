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
void genCard(int [], int);


int main(int argc, char** argv) {
    //Set random seed
     
    

    //Declare Variables
    //int card[52];
    //int x; 
    //char ready; //Ask user if they are ready to play
    
    int n=52;
    int num[n];
    
    
    //Introduce user to the game
    cout<<"Welcome to the game of BlackJack!"<<endl;
    cout<<"In this game, you are playing against the computer. The objective is to get to 21 \nor as close to it as possible. If you get 21, you automatically win. \nIf you go past 21, you lose, and if you don't reach 21, who ever \nhas the higher number wins."<<endl;
    cout<<"The value of each card is listed below"<<endl;
    cout<<"    ////////////////////////////////////////\n"
          "    ////          Ace = 1 or 11         ////\n"
          "    ////            2 = 2               ////\n"
          "    ////            3 = 3               ////\n"
          "    ////            4 = 4               ////\n"
          "    ////            5 = 5               ////\n"
          "    ////            6 = 6               ////\n"
          "    ////            7 = 7               ////\n"
          "    ////            8 = 8               ////\n"
          "    ////            9 = 9               ////\n"
          "    ////           10 = 10              ////\n"
          "    ////         Jack = 10              ////\n"
          "    ////        Queen = 10              ////\n"
          "    ////         King = 10              ////\n"
          "    ////////////////////////////////////////\n"<<endl;
    cout<<"Good luck, and may the odds be ever in your favor!"<<endl;
    
//    for(int i=0; i<52; i++){
//        card[i]=rand()%52+1;
//        cout<<card[i]<<endl;
//    }
    
    cout<<endl<<endl<<endl;
    //cout<<card[i]<<endl;
    //getCard(drawCrd)
    //cout<<x<<endl;
    
    //x=rand()%52+1;
    
    //cout<<x<<endl;
    //Ask user if they are ready to play
    
    
    

    




    //Output the results
    genCard(num, n);
    //cout<<num[n]<<endl;






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
void genCard(int num[], int n){
    int p[52]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,
    42,43,44,45,46,47,48,49,50,51,52}; //Create the 52 cards in the deck
    
    int outCard[52] = {};
    srand(static_cast<unsigned int>(time(0)));
    //Shuffle the deck
    for(int i=52; i>0; --i){
        
        int j=rand()%i;
        int temp=p[i];
        p[i]=p[j];
        p[j]=temp;
    }
    for(int k=0; k<n; ++k){
        outCard[k]=p[k];
        //cout<<outCard[k]<<endl;
      
    }
    for(int l=0; l<n; ++l){
        cout<<outCard[l]<<endl;
    }
    //cout<<num[k]<<endl;
}


   
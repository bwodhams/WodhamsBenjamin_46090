/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 19, 2015, 6:54 PM
 * Purpose: BlackJack V_2
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
        //Value of cards in English
    string fceCard[52]=
        {"Ace of Clubs",
         "2 of Clubs",
         "3 of Clubs",
         "4 of Clubs",
         "5 of Clubs",
         "6 of Clubs",
         "7 of Clubs",
         "8 of Clubs",
         "9 of Clubs",
         "10 of Clubs",
         "Jack of Clubs",
         "Queen of Clubs",
         "King of Clubs",
         "Ace of Diamonds",
         "2 of Diamonds",
         "3 of Diamonds",
         "4 of Diamonds",
         "5 of Diamonds",
         "6 of Diamonds",
         "7 of Diamonds",
         "8 of Diamonds",
         "9 of Diamonds",
         "10 of Diamonds",
         "Jack of Diamonds",
         "Queen of Diamonds",
         "King of Diamonds",       
         "Ace of Hearts",
         "2 of Hearts",
         "3 of Hearts",
         "4 of Hearts",
         "5 of Hearts",
         "6 of Hearts",
         "7 of Hearts",
         "8 of Hearts",
         "9 of Hearts",
         "10 of Hearts",
         "Jack of Hearts",
         "Queen of Hearts",
         "King of Hearts",
         "Ace of Spades",
         "2 of Spades",
         "3 of Spades",
         "4 of Spades",
         "5 of Spades",
         "6 of Spades",
         "7 of Spades",
         "8 of Spades",
         "9 of Spades",
         "10 of Spades",
         "Jack of Spades",
         "Queen of Spades",
         "King of Spades"
        };
    int crdValu[52]={1,2,3,4,5,6,7,8,9,10,10,10,10,1,2,3,4,5,6,7,8,9,10,10,10,10,
                     1,2,3,4,5,6,7,8,9,10,10,10,10,1,2,3,4,5,6,7,8,9,10,10,10,10
                    }; 
    int aceCard[4]={0,13,26,39};
    int n=52;
    int outCard[n]={};
    int dltCard=13;
    int aceDlt[4]={-1,-1,-1,-1};
    int aceInp=-1;
    int count=0;
    int aceNum=-1;
    char ready;
    bool gmOver=false;
    int crdCnt=0;
    char hitStay;
    int dealSum;
    int playSum;
    
    
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
    cout<<"Are you ready to play a game? Y/N"<<endl;
    cin>>ready;
    cout<<endl;
    
    if(ready=='Y' || ready=='y'){
        cout<<"Good luck, and may the odds be ever in your favor!"<<endl;
    }else{
        cout<<"Sorry you don't want to play. Maybe another time!"<<endl;
        return 0;
    }
    cout<<endl<<endl;
    
    //Initialize Function genCard in main
    genCard(outCard, n);
    
    //Give initial cards to Player and Dealer
    
    cout<<"           Player           "<<"                                        Dealer        "<<endl;
    cout<<setw(20)<<fceCard[outCard[1]]<<setw(15)<<"("<<crdValu[outCard[1]]<<") points"<<"              "<<setw(3)<<fceCard[outCard[2]]<<setw(2)<<"    ("<<crdValu[outCard[2]]<<") points"<<endl;
    cout<<setw(20)<<fceCard[outCard[3]]<<setw(15)<<"("<<crdValu[outCard[3]]<<") points"<<"              "<<setw(3)<<"Hidden"<<endl;
    
    
    //Initialize Player Sum
    playSum=(crdValu[outCard[1]]+crdValu[outCard[3]]);
    
    //Initialize Dealer Sum
    dealSum=(crdValu[outCard[2]]+crdValu[outCard[4]]);
    
    cout<<"Would you like to Hit or Stay?  H/S"<<endl;
    for(int i=5; i<=52; i++){
        cin>>hitStay;
        cout<<endl;
        if(hitStay=='H' || hitStay== 'h'){
            cout<<"You requested another card, here is your card."<<endl;
            cout<<setw(20)<<fceCard[outCard[i]]<<setw(15)<<"("<<crdValu[outCard[i]]<<") points"<<endl;
            cout<<endl;
            cout<<"Would you like to Hit or Stay?  H/S"<<endl;
            playSum+=crdValu[outCard[i]];
        }else if(hitStay =='S' || hitStay=='s'){
            cout<<"Here is the sum of your cards"<<endl;
            cout<<playSum<<" points"<<endl;
        }
    }
    for(int i=0; i<4; i++){
        if(dltCard==aceCard[i]){
            if(aceDlt[0]==-1){
               aceDlt[0]=dltCard;
            }else if(aceDlt[1]==-1){
                     aceDlt[1]=dltCard;
            }else if(aceDlt[2]==-1){
                     aceDlt[2]=dltCard;
            }else if(aceDlt[3]==-1){
                     aceDlt[3]=dltCard;
            } 
            
        }
    }
    count=0;
    aceNum=-1;
    while(aceInp==0 && count<4){
        for(int i=3; i>=0; i--)
        {   count++;
            if(aceDlt[i]!= -1)
            {cout<<"What value would you like to use for your "<<fceCard[aceDlt[i]]<<", (1 or 11)"<<endl;
            count=4;
            aceNum=aceDlt[i];
            cin>>aceInp;
            
            }
        }
    }
              
        while(aceInp!=11 && aceInp!=1 && aceInp!=-1){
            cout<<"Please input either 1 or 11"<<endl;
            cin>>aceInp;
        }
        
        if(aceInp==11){
            crdValu[aceNum]=11;
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
void genCard(int outCard[], int n){
    int p[52]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,
    42,43,44,45,46,47,48,49,50,51,52}; //Create the 52 cards in the deck
    
    outCard[52] = {};
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
}


   
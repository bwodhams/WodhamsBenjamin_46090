/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 20, 2015, 8:50 PM
 * Purpose: BlackJack V_2
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


//To do list : 
        //Make two new arrays, one for players cards, and one for the dealer's cards.
        //Make two ace checkers for each array
        //
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
    int aceDlt[4]={-1,-1,-1,-1};
    int aceInp=0;
    int aceInpD=1;
    int count=0;
    int count1=4;
    int aceNum=-1;
    char ready;
    bool gmOver=false;
    int crdCnt=0;
    char hitStay;
    int dealSum;
    int playSum;
    int pCCount=0;
    int dCCount=0;
    int playCrd[n]={};
    int dealCrd[n]={};
    int dltCard=-1;
    
    
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
    
    //Pupulate Player Card
   
      
    //Give initial cards to Player and Dealer
    pCCount=0;
    dCCount=0;
    
    playCrd[pCCount]=outCard[0];
    dealCrd[dCCount]=outCard[1];
    pCCount++;
    playCrd[pCCount]=outCard[2];
    dCCount++;
    dealCrd[dCCount]=outCard[3];
    cout<<"           Player           "<<endl;
    cout<<setw(20)<<fceCard[playCrd[0]]<<setw(15)<<"("<<crdValu[playCrd[0]]<<") points"<<endl;
    
    cout<<setw(20)<<fceCard[playCrd[1]]<<setw(15)<<"("<<crdValu[playCrd[1]]<<") points"<<endl;
    
    cout<<endl<<endl;
    
    cout<<"           Dealer        "<<endl;
    cout<<setw(20)<<fceCard[dealCrd[0]]<<setw(15)<<"    ("<<crdValu[dealCrd[0]]<<") points"<<endl;
    
    cout<<setw(20)<<"Hidden"<<endl;
    cout<<endl<<endl;
    
    
    //Initialize Player Sum
    playSum=(crdValu[playCrd[0]]+crdValu[playCrd[1]]);
    
    //Initialize Dealer Sum
    dealSum=(crdValu[dealCrd[0]]+crdValu[dealCrd[1]]);
    
    cout<<"Would you like to Hit or Stay?  H/S"<<endl;
    for(int i=4; i<=52; i++){
        cin>>hitStay;
        cout<<endl;
        
        if(hitStay=='H' || hitStay== 'h'){
            pCCount++;
            playCrd[pCCount]=outCard[i];
            cout<<"You requested another card, here is your card."<<endl;
            cout<<setw(20)<<fceCard[outCard[i]]<<setw(15)<<"("<<crdValu[outCard[i]]<<") points"<<endl;
            cout<<endl;
            cout<<"Would you like to Hit or Stay?  H/S"<<endl;
            playSum+=crdValu[outCard[i]];
            count1++;
            
        }else if(hitStay =='S' || hitStay=='s'){
            cout<<"You have requested to stay."<<endl;
            break;
            
        }
    }
//        for(i=0; i<=52; i++){
//            if(crdValu[playCrd[i]]==0){
//                cout<<"You got an Ace of Spades!"<<endl;
//            }
//            if(crdValu[playCrd[i]]==13){
//                cout<<"You got an Ace of Hearts!"<<endl;
//            }
//            if(crdValu[playCrd[i]]==26){
//                cout<<"You got an Ace of Diamonds!"<<endl;
//            }
//            if(crdValu[playCrd[i]]==39){
//                cout<<"You got an Ace of Clubs!"<<endl;
//            }
//            }
               
        
        
        
        
        
        
 //Loop through player's cards.
for(int iPcard=0; iPcard<=pCCount; iPcard++){
    dltCard=playCrd[iPcard];
        
    
 //Loop through Ace Cards
    
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
        
}
    cout<<endl;
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
         while(aceInp!=11 && aceInp!=1 && aceInp!=0){
            cout<<"Please input either 1 or 11"<<endl;
            cin>>aceInp;
        }
        
    }
        
        if(aceInp==11){
            crdValu[aceNum]=11;
            playSum+=10;
        }

    
        
    int z=count1;
    
        
    if(dealSum<=16){
        for(z; z<=52;z++){
            cout<<"Dealer has drawn another card."<<endl;
            cout<<setw(20)<<fceCard[outCard[z]]<<setw(15)<<" ("<<crdValu[outCard[z]]<<") points"<<endl;
            cout<<endl;
            dealSum+=crdValu[outCard[z]];
             if(dealSum>=17){
                break;
            }
        }
        }if(dealSum>=17){
        cout<<"Dealer will stay."<<endl;
     }
    cout<<setw(70)<<"The dealer's hidden card was : "<<fceCard[outCard[3]]<<endl;
    cout<<endl<<endl;
    cout<<"Your cards total : "<<playSum<<" points."<<setw(40)<<"The dealer's cards total : "<<dealSum<<" points."<<endl;
    cout<<endl;
    
    if(((playSum>dealSum) || dealSum>21) && playSum<=21){
        if(playSum==21){
            cout<<"Nicely done, you got blackjack!!  You win!"<<endl;
        }else
        cout<<"Congrats, you have won the game!"<<endl;
    }else if((playSum<dealSum) && dealSum<=21){
        if(dealSum==21){
            cout<<"Nice try, but the dealer has won and got blackjack. Better luck next time."<<endl;
        }else
        cout<<"Nice try, but the dealer has won. Better luck next time."<<endl;
        
    }else if((playSum==dealSum) && (playSum<=21) &&(dealSum<=21)){
        if(playSum==21 && dealSum==21){
            cout<<"You both got blackjack and tied!  You win!"<<endl;
        }else
        cout<<"You both tied! You win!";
    }else if((playSum>21) && (dealSum>21)){
        cout<<"You have both busted! Dealer wins!"<<endl;
    }else if((playSum>21) && (dealSum<=21)){
        cout<<"You have busted! Dealer wins!"<<endl;
    }else if((playSum<=21) && (dealSum>21)){
        cout<<"You have won, the dealer busted!"<<endl;
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
      
    }
}


   
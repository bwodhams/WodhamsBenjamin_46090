/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 29, 2015, 10:19 AM
 * Purpose: BlackJack V_6
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
void genCard(int [], int);


int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));

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
    //Value of each card
    int crdValu[52]={1,2,3,4,5,6,7,8,9,10,10,10,10,1,2,3,4,5,6,7,8,9,10,10,10,10,
                     1,2,3,4,5,6,7,8,9,10,10,10,10,1,2,3,4,5,6,7,8,9,10,10,10,10
                    }; 
    //Indicate where each  ace is in the deck
    int aceCard[4]={0,13,26,39};
    int n=52;
    //OutCard array that fills up with the output of genCard function
    int outCard[n];
    //Initialize value for aceInput for dealer which will activate if dealer draws an ace
    int aceInpD=1;
    int count=0;
    int count1=4;
    //Char to determine if player is ready to play
    char ready;
    //Count cards
    int crdCnt=0;
    //Char to determine if player wants to hit or stay
    char hitStay;
    //Calculate dealer's sum of all cards
    int dealSum;
    //Calculate Player's sum of all cards
    int playSum;
    int pCCount=0; //Player's cards count
    int dCCount=0; //Dealer's cards count
    int playCrd[n]; //Player's cards array
    int dealCrd[n]; //Dealer's cards array
    int dltCard=-1; //Dealt card
    int money=1000; //Starting balance
    int bet; //Bet amount
    int games; //Amount of games user wants to play
    char playAgn; //User input based on whether or not they want to play again
    char clrScr; //User input based on whether or not they want to clear the screen
    char winLoss='A'; //If user wins, winLoss=1   for paid games
    char winLosf='A'; //If user wins, winLosf=1   for free games
    int winCou=0; //Count for number of wins for bets greater than 0
    int winCouf=0; //Count for number of wins for bets = to 0
    int losCou=0; //Count for number of losses for bets greater than 0
    int losCouf=0; //Count for number of losses for bets = to 0
    int tieCou=0; //Count for number of ties for bets greater than 0
    int tieCouf=0; //Count for number of ties for bets = to 0

    
    //Open instructions file to introduce user to the game
    ifstream inFile;
    inFile.open("instructions.txt");
    string instruc;
    int fcount=0; //File counter
    
    //Output instructions file line by line
    while(getline(inFile,instruc)){
        cout<<instruc<<endl;
    }
    
    //After instructions are given, ask player if they are ready to play!
    cout<<endl<<endl;
    cout<<"Are you ready to play a game? Y/N"<<endl;
    cin>>ready;
    cout<<endl;
    
    //Continuation depends on player's input
    if(ready=='Y' || ready=='y'){
        cout<<"Good luck, and may the odds be ever in your favor!"<<endl;
    }else{
        cout<<"Sorry you don't want to play. Maybe another time!"<<endl;
        return 0;
    }
    cout<<endl<<endl;
    

 //Create do loop to repeat for as long as player wants to play more games AND has more than $0 balance remaining    
do{     

            //Initialize values for ace dealt. Use this to determine which ace is chosen
            int aceDlt[4]={-1,-1,-1,-1};
            //Initialize value for aceInput which will activate if player draws an Ace
            int aceInp=0;
            int aceNum=-1;
            cout<<"Your balance is: $"<<money<<endl;
            cout<<"How much money would you like to bet?"<<endl<<endl;
            cin>>bet;
            cout<<endl;
            if(bet>money){
               cout<<"You can't bet more money than you have!"<<endl<<endl;
            }else if(bet<0){
               cout<<"You can't bet a negative amount of money!"<<endl<<endl;
            }else if(bet==0){
               cout<<"Luckily for you, free games are allowed!"<<endl<<endl;
            }

            //Check if bet is more than the amount of money the player has, or less than $0
            while(bet>money || bet<0){
               cout<<"Your balance is: $"<<money<<endl;
               cout<<"How much money would you like to bet?"<<endl;
               cin>>bet;
               cout<<endl;
               if(bet>money){
               cout<<"You can't bet more money than you have!"<<endl<<endl;
               }else if(bet<0){
               cout<<"You can't bet a negative amount of money!"<<endl<<endl;
               }else if(bet==0){
               cout<<"Luckily for you, free games are allowed!"<<endl;
               }
            }

            //Re=initialize money based on how much user decided to bet
            //money=money-bet;
            cout<<"Press enter to continue!"<<endl;
            cout<<endl<<endl;
            cin.get();
            cin.ignore();
        //Initialize Function genCard in main
        genCard(outCard, n);



        //Give initial cards to Player and Dealer
        pCCount=0;
        dCCount=0;

        playCrd[pCCount]=outCard[0];
        dealCrd[dCCount]=outCard[1];
        pCCount++;
        playCrd[pCCount]=outCard[2];
        dCCount++;
        dealCrd[dCCount]=outCard[3];
        
        //Output the cards to show player
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


        //Ask player if they want to hit or stay.
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
                playSum+=crdValu[outCard[i]];
                //If player busts, or hits blackjack, don't allow them to hit or stay
                if(playSum>21 || playSum==21){
                    break;
                }
                cout<<"Would you like to Hit or Stay?  H/S"<<endl;
                count1++;



            }else if(hitStay =='S' || hitStay=='s'){
                cout<<"You have requested to stay."<<endl;
                break;

            }
        }

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

        //If user has an Ace, ask what value they would like to make their ace
        while(aceInp==0 && count<4){
            for(int i=3; i>=0; i--)
            {   count++;
            if(aceDlt[i]!= -1 && playSum==21){
                cout<<"You already have BlackJack, so the value of your "<<fceCard[aceDlt[i]]<<" will be 1."<<endl;
            }
                if(aceDlt[i]!= -1 && playSum!=21)
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
            //If user wants value of their ace to be 11, make it 11. If not, don't change anything.
            if(aceInp==11){
                crdValu[aceNum]=11;
                playSum+=10;
            }


        //Initialize variable z so that dealer doesn't draw same cards as player
        int z=count1;

        //Calculate dealer's sum to determine if it will hit or stay    
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
        }if(dealSum>=17 && dealSum<=21){
                cout<<"Dealer will stay."<<endl;
        }if(dealSum>21){
                cout<<"Dealer busted!"<<endl;
        }
        //Output dealer's hidden card as well as player and dealer total sum
        cout<<setw(70)<<"The dealer's hidden card was : "<<fceCard[outCard[3]]<<endl;
        cout<<endl<<endl;
        cout<<"Your cards total : "<<playSum<<" points."<<setw(40)<<"The dealer's cards total : "<<dealSum<<" points."<<endl;
        cout<<endl;

        //Setup output for win/loss if bet is $0  (If player played a free game)
        if(bet==0){ 
            if(((playSum>dealSum) || dealSum>21) && playSum<=21){
                if(playSum==21){
                    cout<<"Nicely done, you got blackjack!!  Since you were playing a free game, you win nothing!"<<endl;
                    money=money+bet;
                    winLosf='W';
                }else{
                cout<<"Congrats, you have won the game! Since you were playing a free game, you win nothing!"<<endl;
                money=money+bet;
                winLosf='W';
                }
            }else if((playSum<dealSum) && dealSum<=21){
                if(dealSum==21){
                    cout<<"Nice try, but the dealer has won and got blackjack. Since you were playing a free game, you lose nothing!"<<endl;
                    money=money-bet;
                    winLosf='L';
                }else{
                cout<<"Nice try, but the dealer has won. Since you were playing a free game, you lose nothing!"<<endl;
                money=money-bet;
                winLosf='L';
                }

            }else if((playSum==dealSum) && (playSum<=21) &&(dealSum<=21)){
                if(playSum==21 && dealSum==21){
                    cout<<"You both got blackjack and tied!  Since you were playing a free game, you win nothing!"<<endl;
                    money=money;
                    winLosf='T';
                }else{
                cout<<"You both tied! Since you were playing a free game, you win nothing!"<<endl;
                money=money;
                winLosf='T';
                }
            }else if((playSum>21) && (dealSum>21)){
                cout<<"You have both busted! Dealer wins! Since you were playing a free game, you lose nothing!"<<endl;
                money=money-bet;
                winLosf='L';
            }else if((playSum>21) && (dealSum<=21)){
                cout<<"You have busted! Dealer wins! Since you were playing a free game, you lose nothing!"<<endl;
                money=money-bet;
                winLosf='L';
            }else if((playSum<=21) && (dealSum>21)){
                cout<<"The dealer has busted! Since you were playing a free game, you win nothing!"<<endl;
                money=money+bet;
                winLosf='W';
            }
        }

        //Setup output for win/loss if bet is > $0  (If player played a free game)
        if(bet>0){
            if(((playSum>dealSum) || dealSum>21) && playSum<=21){
                if(playSum==21){
                    cout<<"Nicely done, you got blackjack!!  You win $"<<bet*2<<" !!"<<endl;
                    money=money+bet;
                    winLoss='W';
                }else{
                cout<<"Congrats, you have won the game! You win $"<<bet*2<<" !!"<<endl;
                money=money+bet;
                winLoss='W';
                }
            }else if((playSum<dealSum) && dealSum<=21){
                if(dealSum==21){
                    cout<<"Nice try, but the dealer has won and got blackjack. Better luck next time. Unfortunately, you lost $"<<bet<<endl;
                    money=money-bet;
                    winLoss='L';
                }else{
                cout<<"Nice try, but the dealer has won. Unfortunately, you lost $"<<bet<<" Better luck next time."<<endl;
                money=money-bet;
                winLoss='L';
                }

            }else if((playSum==dealSum) && (playSum<=21) &&(dealSum<=21)){
                if(playSum==21 && dealSum==21){
                    cout<<"You both got blackjack and tied!  You win back your original bet of $"<<bet<<" !!"<<endl;
                    money=money;
                    winLoss='T';
                }else{
                cout<<"You both tied! You win back your original bet of $"<<bet<<" !!"<<endl;
                money=money;
                winLoss='T';
                }
            }else if((playSum>21) && (dealSum>21)){
                cout<<"You have both busted! Dealer wins! Unfortunately, you lost $"<<bet<<" Better luck next time."<<endl;
                money=money-bet;
                winLoss='L';
            }else if((playSum>21) && (dealSum<=21)){
                cout<<"You have busted! Dealer wins! Unfortunately, you lost $"<<bet<<" Better luck next time."<<endl;
                money=money-bet;
                winLoss='L';
            }else if((playSum<=21) && (dealSum>21)){
                cout<<"The dealer has busted! You win $"<<bet*2<<" !!"<<endl;
                money=money+bet;
                winLoss='W';
            }
        }

        //Re-initialize playAgn
        playAgn='A';
        cout<<endl<<endl;
        if(money>0){
                 cout<<"You have a remaining balance of $"<<money<<" Would you like to play again? (Y/N)"<<endl<<endl;
                 cin>>playAgn;
                 cout<<endl;
            if(playAgn!='Y' && playAgn!='y' && playAgn!='N' && playAgn!='n'){
                do{
                    cout<<"Please enter 'Y' or 'y' if you want to continue, or enter 'N' or 'n' if you do not want to continue."<<endl;
                    cout<<endl;
                    cin>>playAgn;
                    cout<<endl;
                }while(playAgn!='Y' && playAgn!='y' && playAgn!='N' && playAgn!='n');
            }
        }else{
            cout<<"You don't have any money left. You may not play anymore!"<<endl;
        }
        cout<<endl<<endl;
        if(playAgn=='Y' || playAgn=='y'){
            //Re-initialize clrScr
            clrScr='A';
            cout<<"Would you like to clear the screen? (Y/N) **NOTE** If you are using \nNetBeans IDE 8.0 or newer, you can't clear screen, so just enter 'N' or 'n'."<<endl;
            cout<<endl;
            cin>>clrScr;
            cout<<endl<<endl;
            if(clrScr=='Y' || clrScr=='y'){
               system("clear"); 
            }
                if(clrScr!='Y' && clrScr!='y' && clrScr!='N' && clrScr!='n'){
                    do{
                        cout<<"Please enter 'Y' or 'y' if you want to clear the screen, or enter 'N' or 'n' if you do not want to clear the screen."<<endl;
                        cout<<endl;
                        cin>>clrScr;
                        cout<<endl;
                        if(clrScr=='Y' || clrScr=='y'){
                           system("clear");  
                        }
                    }while(clrScr!='Y' && clrScr!='y' && clrScr!='N' && clrScr!='n');
            }
        }
        if(winLoss=='W'){
            winCou++;
        }
        if(winLoss=='L'){
            losCou++;
        }
        if(winLoss=='T'){
            tieCou++;
        }
        if(winLosf=='W'){
            winCouf++;
        }
        if(winLosf=='L'){
            losCouf++;
        }
        if(winLosf=='T'){
            tieCouf++;
        }
            
}while((playAgn=='Y' || playAgn=='y') && money>0);    
cout<<endl<<endl;

//Print out final results
cout<<"Here are your final results! You played a total of "<<winCou+losCou+tieCou+winCouf+losCouf+tieCouf<<" game(s) \n\nYou won "<<winCou<<" game(s), lost "<<losCou<<" game(s), and tied "<<tieCou<<" game(s). \n\nYou won "<<winCouf<<" free game(s), lost "<<losCouf<<" free game(s), and tied "<<tieCouf<<" game(s)."<<endl;
cout<<endl;
if(money>1000){
    cout<<"As a result, you profited $"<<money-1000<<" and have decided to stop playing with a balance of $"<<money<<endl;
}
if(money<1000){
    cout<<"As a result, you have lost $"<<1000-money<<" and have decided to stop playing with a balance of $"<<money<<"  Better luck next time."<<endl;
}

cout<<endl<<endl;
cout<<"You may also find your results stored in the file called : results.txt."<<endl<<endl;


      ofstream outFile;
      outFile.open("results.txt");
        outFile<<"Here are your final results! You played a total of "<<winCou+losCou+tieCou+winCouf+losCouf+tieCouf<<" game(s) \n\nYou won "<<winCou<<" game(s), lost "<<losCou<<" game(s), and tied "<<tieCou<<" game(s). \n\nYou won "<<winCouf<<" free game(s), lost "<<losCouf<<" free game(s), and tied "<<tieCouf<<" game(s)."<<endl;
        outFile<<endl;
        if(money>1000){
            outFile<<"As a result, you profited $"<<money-1000<<" and have decided to stop playing with a balance of $"<<money<<endl;
        }
        if(money<1000){
            outFile<<"As a result, you have lost $"<<1000-money<<" and have decided to stop playing with a balance of $"<<money<<"  Better luck next time."<<endl;
        }
     outFile.close();  
      


cout<<endl<<endl;
cout<<"Thank you for playing!"<<endl;
   
    //Exit stage right!

    return 0;
}




/*******************************************************************************************************
 *******************************************************************************************************
 *******************************            genCard
 ** Purpose:Generate random list of the cards
 ** Input:all 52 cards
 ** Output: outCard
 *******************************************************************************************************
 */
void genCard(int outCard[], int n){
    int p[52]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,
    42,43,44,45,46,47,48,49,50,51}; //Create the 52 cards in the deck
    
    outCard[52];
    //Set random seed
    
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


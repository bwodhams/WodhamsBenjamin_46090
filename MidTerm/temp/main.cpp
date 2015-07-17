/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 17, 2015, 3:06 PM
 * Purpose: 
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
//void expand(int);

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables


// int num;
//    cout<<"Enter a number : ";
//    cin>>num;
//    expand(num);
    
    int num, ones, tens, hund;
    cout<<"Enter Number"<<endl;
    cin>>num;
    hund=((num/100)%100)%10;
    tens=(num/10)%10;
    ones=num%10;
    
    
    
    switch (hund){
             case 1:
                  cout<<"One Hundred ";
                  break;
             case 2:
                  cout<<"Two Hundred ";
                  break;
             case 3:
                  cout<<"Three Hundred ";
                  break;
             case 4:
                  cout<<"Four Hundred ";
                  break;
             case 5:
                  cout<<"Five Hundred ";
                  break;
             case 6:
                  cout<<"Six Hundred ";
                  break;
             case 7:
                  cout<<"Seven Hundred ";
                  break;
             case 8:
                  cout<<"Eight Hundred ";
                  break;
             case 9:
                  cout<<"Nine Hundred ";
                  break;
             }
    
    
    if(tens==1){
        switch(ones){
            case 0:
                cout<<"Ten ";
                break;
            case 1:
                cout<<"Eleven ";
                break;
            case 2:
                cout<<"Twelve ";
                break;
            case 3:
                cout<<"Thirteen ";
                break;
            case 4:
                cout<<"Fourteen ";
                break;
            case 5:
                cout<<"Fifteen ";
                break;
            case 6:
                cout<<"Sixteen ";
                break;
            case 7:
                cout<<"Seventeen ";
                break;
            case 8:
                cout<<"Eighteen ";
                break;
            case 9:
                cout<<"Nineteen ";
                break;
        }
    }
    else{
        switch(tens){
            case 0:
                cout<<"";
                break;
            case 1:
                cout<<"Ten ";
                break;
            case 2:
                cout<<"Twenty ";
                break;
            case 3:
                cout<<"Thirty ";
                break;
            case 4: 
                cout<<"Forty ";
                break;
            case 5:
                cout<<"Fifty ";
                break;
            case 6:
                cout<<"Sixty ";
                break;
            case 7:
                cout<<"Seventy ";
                break;
            case 8:
                cout<<"Eighty ";
                break;
            case 9:
                cout<<"Ninety ";
                break;
                
                
        }
        if((tens>1)&&(ones>0)){
            switch(ones){
                case 1:
                    cout<<"One ";
                    break;
                case 2:
                    cout<<"Two ";
                    break;
                case 3:
                    cout<<"Three ";
                    break;
                case 4:
                    cout<<"Four ";
                    break;
                case 5:
                    cout<<"Five ";
                    break;
                case 6:
                    cout<<"Six ";
                    break;
                case 7:
                    cout<<"Seven ";
                    break;
                case 8:
                    cout<<"Eight ";
                    break;
                case 9:
                    cout<<"Nine ";
                    break;
            }
        }
    }




    //Output the results






    //Exit stage right!

    return 0;
}


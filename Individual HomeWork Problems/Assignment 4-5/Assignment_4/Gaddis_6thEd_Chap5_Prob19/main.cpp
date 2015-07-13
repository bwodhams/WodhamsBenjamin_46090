/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 12, 2015, 6:46 PM
 * Purpose: Budget Analysis
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float budget; //Budget in Dollars
    float expens; //Expenses in dollars
    float total=0; //Total money
    int cont; //Continue Variable
    float under; //Under by $
    float over; //Over by $


    //Output the results
    cout<<"Please enter your budget in dollars!"<<endl;
    cin>>budget;
    
    
    do{
        cout<<"Please enter one expense in dollars!";
        cout<<endl;
        cin>>expens;
        cout<<endl;
        cout<<"Do you have more expenses? If so press 1, if not, press 0"<<endl;
        cout<<endl;
        cin>>cont;
        cout<<endl;
        total=total+expens;
    }while(expens!=0 && cont!=0);
    cout<<total<<endl;
    if(total<=budget){
        under=budget-total;
        cout<<"Expenses are under the budget by : $"<<under<<endl;
    }else{
        over=total-budget;
        cout<<"Expenses are over the budget by : $"<<over<<endl;
    }
    
    //Exit stage right!

    return 0;
}


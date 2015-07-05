/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 5, 2015, 1:20 PM
 * Purpose: Automobile Costs
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float loanPmt; // Monthly loan payment (in dollars)
    float insur; // Monthly insurance cost (in dollars)
    float gas; // Amount paid per month for gas (in dollars)
    float oil; // Amount paid per month for oil (in dollars)
    float tires; // Amount paid per month for tires (in dollars)
    float main; // Amount paid per month for maintenance (in dollars)
    float mTotal; // Monthly total (in dollars)
    float yTotal; // Yearly total (in dollars)
    
    

    //Output the results
    cout<<"Please enter the amount you pay monthly for your loan (in dollars)."<<endl;
    cin>>loanPmt;
    cout<<endl<<endl;
    cout<<"Please enter the amount you pay monthly for your insurance (in dollars)."<<endl;
    cin>>insur;
    cout<<endl<<endl;
    cout<<"Please enter the amount you pay monthly for gas (in dollars)."<<endl;
    cin>>gas;
    cout<<endl<<endl;
    cout<<"Please enter the amount you pay monthly for oil (in dollars)."<<endl;
    cin>>oil;
    cout<<endl<<endl;
    cout<<"Please enter the amount you pay monthly for tires (in dollars)."<<endl;
    cin>>tires;
    cout<<endl<<endl;
    cout<<"Please enter the amount you pay monthly for maintenance (in dollars)."<<endl;
    cin>>main;
    cout<<endl<<endl;
    
    mTotal=loanPmt+insur+gas+oil+tires+main;
    cout<<"The total amount of money you spend monthly is: $"
            <<mTotal<<endl;
    cout<<endl<<endl;
    yTotal=mTotal*12;
    cout<<"The total amount of money you spend yearly is:  $"
            <<yTotal<<endl;
    
    
      


    //Exit stage right!

    return 0;
}


/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 5, 2015, 1:40 PM
 * Purpose: Test Average
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float test1; // First test score
    float test2; // Second test score
    float test3; // Third test score
    float test4; // Fourth test score
    float test5; // Fifth test score
    float tstAvg; // Average test score

    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Please input the score you got on your first test."<<endl;
    cin>>test1;
    cout<<endl<<endl;
    cout<<"Please input the score you got on your second test."<<endl;
    cin>>test2;
    cout<<endl<<endl;
    cout<<"Please input the score you got on your third test."<<endl;
    cin>>test3;
    cout<<endl<<endl;
    cout<<"Please input the score you got on your fourth test."<<endl;
    cin>>test4;
    cout<<endl<<endl;
    cout<<"Please input the score you got on your fifth test."<<endl;
    cin>>test5;
    cout<<endl<<endl;
    
    tstAvg=(test1+test2+test3+test4+test5)/5;
    cout<<"Your average test score is : "<<tstAvg<<" % "<<endl;
    
    
    //Exit stage right!

    return 0;
}


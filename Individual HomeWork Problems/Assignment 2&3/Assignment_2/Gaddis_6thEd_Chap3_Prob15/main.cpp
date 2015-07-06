/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 5, 2015, 12:15 PM
 * Purpose: Math Tutor Problem
 */

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    unsigned short op1,op2,answer;
    char temp;
    
        //Determine op1/op2
        op1=rand()%900+100;//[100-999]
        op2=rand()%900+100;//[100-999]
        //Display the problem
        cout<<setw(6)<<op1<<endl;
                cout<<" + "<<op2<<endl;
                answer=op1+op2;
       
        
        cout<<"-------               (Press enter to see answer)"<<endl;
        //Output the value for the sum
        std::cin.ignore();
            cout<<"  "<<answer<<endl;

    
    
    return 0;
}


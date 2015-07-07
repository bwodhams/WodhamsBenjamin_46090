/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 *
 * Created on July 2, 2015, 11:22 AM
 * Purpose : Fibonacci Sequence
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global constants

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and initialize members of the sequence
    unsigned short fi=1,fip1=1,fip2;
    unsigned char terms=10;
    
    //Print the initial conditions
    cout<<"The number of terms in the Fibonacci sequence "<<
            "to display is "<<terms<<endl;
    cout<<"The "<<1<<" in the sequence = "<<fi<<endl;
    cout<<"The "<<2<<" in the sequence = "<<fip1<<endl;
    
    //Loop and show terms as you generate
    for(unsigned char term=3;term<=terms;term++){
        //Calculate the next term in the sequence
        fip2=fi+fip1;
        //Output the current term
        cout<<"The "<<static_cast<int>(term)<<" in the sequence = "<<fip2<<endl;
        ///Now shift
        fi=fip1;
        fip1=fip2;
    }

    return 0;
}


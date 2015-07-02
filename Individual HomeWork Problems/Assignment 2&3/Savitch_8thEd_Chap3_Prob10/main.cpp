/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 *
 * Created on July 2, 2015, 11:22 AM
 * Purpose : Generate Crud based on the Fibonacci sequence
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
    float crudWt,nDays;
    
    //Print the initial conditions
    cout<<"Input the initial crud weight in lbs"<<endl;
    cin>>crudWt;
    cout<<"Input the number of days allowed to grow"<<endl;
    cin>>nDays;
    
    //Scale the nDays to the Fibonacci sequence
    terms=nDays/5+1; //Scale by 5 days and start at a term=1
    
    //Given the 3 conditions
    if (terms==1){
        cout<<"The crud wt after "<<nDays<<" days = "<<crudWt<<"(lbs)"<<endl;
        
    }else if (terms==2){
        cout<<"The crud wt after "<<nDays<<" days = "<<crudWt<<"(lbs)"<<endl;
    }else{
        //Loop and show terms as you generate
        for(unsigned char term=3;term<=terms;term++){
            //Calculate the next term in the sequence
            fip2=fi+fip1;
            //Output the current term
            //cout<<"The "<<static_cast<int>(term)<<" in the sequence = "<<fip2<<endl;
            ///Now shift
            fi=fip1;
            fip1=fip2;
    }
        cout<<"The crud wt after "<<nDays<<" days = "<<fip2*crudWt<<"(lbs)"<<endl;
}
    return 0;
}


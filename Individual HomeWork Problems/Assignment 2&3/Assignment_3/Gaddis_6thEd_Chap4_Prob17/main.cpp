/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 *
 * Created on July 2, 2015, 12:20 PM
 * Purpose : Approximate e^x with an infinite sequence
 */
//System Libraries
#include <iostream>


using namespace std;

//User Libraries

//Global constants

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare our variables
    float wLength; // In meters
    
    cout<<"What is the wavelength? (in meters)"<<endl;
    cin>>wLength;
    if((wLength>=1e-2) && (wLength>=0)){
        cout<<"This is a Radio Wave"<<endl;
    }else if ((wLength<=1e-2) && (wLength>=1e-3)){
        cout<<"This is a Micro Wave"<<endl;
    }else if ((wLength<=1e-3) && (wLength>=7e-7)){
        cout<<"This is a Infrared Wave"<<endl;
    }else if ((wLength<=7e-7) && (wLength>=4e-7)){
        cout<<"This is a Visible Light"<<endl;
    }else if ((wLength<=4e-7) && (wLength>=1e-8)){
        cout<<"This is Ultraviolet light"<<endl;
    }else if ((wLength<=1e-8) && (wLength>=1e-11)){
        cout<<"This is an X-Ray"<<endl;
    }else if ((wLength<=1e-11) && (wLength>=1e-100)){
        cout<<"This is a Gamma Ray"<<endl;
    }    
    return 0;
}


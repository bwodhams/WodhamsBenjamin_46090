/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 13, 2015, 12:57 AM
 * Purpose: Markup
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float calRtl(float,float);

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    float wcost,retail,mPerc; //Wholesale cost, retail, markup percentage


    //Output the results
    cout<<"Enter whole sale cost:"<<endl;
    cin>>wcost;
    
    cout<<"Enter marked percentage:"<<endl;
    cin>>mPerc;
    
    //Call function calRtl
    retail=calRtl(wcost,mPerc);
    
    cout<<"Retail cost of the item is: $"<<retail<<endl;

    //Exit stage right!

    return 0;
}




/***************************************************************************
 ***************************************************************************
 *******************************  calRtl   *********************************
 ***************************************************************************
 **Purpose : Calculate retail price      ***********************************
 **Input : Cost and marked up Percentage   *********************************
 **Output : Retail cost of item           **********************************
 ***************************************************************************
 ***************************************************************************/





float calRtl(float cost,float mPerc){
    float retail;
    retail=cost+((cost*mPerc)/100);
    return retail;
}

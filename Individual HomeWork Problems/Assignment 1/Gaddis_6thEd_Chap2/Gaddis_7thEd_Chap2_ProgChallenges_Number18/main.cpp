/* 
 * File:   main.cpp
 * Author: Ben
 * Created on June 23, 2015, 4:20 PM
 * Purpose : Solve Problem 18 in Gaddis 7th Edition Chapter 2
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int svyCus=12467; //Number of Surveyed Customers
    float ePDrnk=0.14; //Energy Drinks Percentage
    float cPDrnk=0.64; //Citrus Flavored Drinks Percentage
    float eDrnk, pCF; //eDrnk = Energy Drinks  pCF = Prefer Citrus Flavor
    //Calculations
    eDrnk=svyCus*ePDrnk; //Calculates who purchases one or more energy drinks per week
    pCF=svyCus*cPDrnk; //Calculates who prefers citrus flavored energy drinks.
    cout<<"The total number of surveyed customers is:" <<svyCus<<endl; //Show number of surveyed customers
    cout<<"The number of customers who purchase one or more energy drinks is: "<<eDrnk<<endl; //Shows number of customers purchase one or more energy drinks
    cout<<"The number of customers who prefer citrus flavored energy drinks is: "<<pCF<<endl; // Shows the number of customers who prefer citrus flavored energy drinks.
    
    return 0;
}


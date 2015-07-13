/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 13, 2015, 12:40 AM
 * Purpose: Population
 */

#include <iostream>
using namespace std;

//User libraries

//Global Constants

//Function prototypes
int newPop(float, float, float); //Float population, float annual birthrate, float annual death rate

//Execution begins here!


int main() {
    //Declare Veriables
    int popStrt = 0; //Starting population
    float annBR = 0; //Annual birth rate
    float annDR = 0; //Annual Death Rate
    int years = 0; //Number of years to display

    do  {
        cout << "Enter starting population size: ";
        cin >> popStrt;
        cout << "Enter annual birth rate: ";
        cin >> annBR;
        cout << "Enter annual death rate: ";
        cin >> annDR;
        cout << "Enter years to display: ";
        cin >> years;
    } while (!(popStrt >= 2) || !(years >= 1));

    int popula;
    
    //Output

    for (int i = 1; i <= years; i++) {
        cout << "Year " << i << ": " << popStrt << " ";
        popula = newPop(popStrt, annBR, annDR);
        cout << popula << endl;
        popStrt = popula;
    }
    return 0;
}



/********************************************************************************************
 ********************************************************************************************
 ******************************  newPop  ****************************************************
 **Purpose : Calculate New Population     ***************************************************
 **Input : pop, anBR, anDR       ************************************************************
 **Output: New population         ***********************************************************
 ********************************************************************************************
 ********************************************************************************************/




int newPop(float pop, float anBR, float anDR) { //Float population, float annual birthrate, float annual death rate

    int newPop = pop * (1 + anBR) * (1 - anDR);
    return newPop; //New Population
}
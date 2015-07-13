/* 
 * File:   main.cpp
 * Author: Benjamin Wodhams
 * Created on July 12, 2015, 9:01 PM
 * Purpose: Pattern Displays
 */

#include <iostream>
using namespace std;

int main()
{
   int cols = 12; // Pattern A: # of columns
   int rows = 10; // Pattern A: # of rows

   int height = 4; // Pattern B: height (# of rows) for triangle

   cout << "Pattern A:" << endl;

    // Use double for-loop where the outer for-loop
    // moves down each row of the triangle and the
    // inner for-loop prints the *s for current row.
    for(int row = 0; row < rows; row++)
    {
        // Each line has the same number of columns.
        for(int col = 0; col < cols; col++)
            (col == row + 1)?(cout << " "):(cout << "*");

        cout << endl;
    }

    cout << endl << "Pattern B:" << endl;
    
    // current row.
    for(int row = 0; row < height; row++)
    {
        for(int i = 0; i < 2 * row + 1; i++)
            cout << "*";

        // Finished printing *(s) for current line, insert line-break.
        cout << endl;
    }
    return 0;
}

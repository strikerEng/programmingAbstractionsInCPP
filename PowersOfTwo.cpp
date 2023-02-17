/*
File: PowersOfTwo.cpp

This program generates a list of the power of two up to an exponent limit entered by the user.
*/

/* angle brackets indicate that the header file is a system library that is part of standard C++ */
#include <iostream>
using namespace std;

/* Function prototypes */

int raiseToPower(int n, int k);

/* Main program */
int main(){
    // int variable
    int limit;

    /* Send these strings to the output stream, the terminal window */
    /* endl inserts a new line and flushes out the output buffer */
    cout << "This program lists powers of two." << endl; // console output stream and end-of-line sequence
    cout << "Enter exponent limit: ";

    /* get user input and store that in the limit int variable */
    cin >> limit; // request for console input stream

    for(int i = 0; i <= limit; i++){
        cout << "2 to the " << i << " = " << raiseToPower(2, i) << endl;
    }

    /* the status of the program. 0 means success, any other value indicates a failure*/
    return 0;
}

/* 
Function: raiseToPower
Usage: int p = raiseToPower(n,k);
---------------------------------
Returns the integer n raised to the kth power.
*/

/* Function definition */
int raiseToPower(int n, int k) {
    int result = 1;

    for(int i = 0; i < k; i++){
        result *= n;
    }
    return result;
}
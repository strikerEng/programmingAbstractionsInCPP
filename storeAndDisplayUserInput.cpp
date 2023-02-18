#include <iostream>

int main(){
    /* variable declaration */
    double x, d;
    int i;
    char c;

    /* string s; is not a valid variable declaration unless I define a string type, 
       but user-defined types usually start with an upper cased letter.
    */

    /* get user input */
    std::cin >> x;

    /* display user input */
    std::cout << "x: " << x << std::endl;

    /* display value of variables*/
    std::cout << "d: " << d << " i: " << i << " c: " << c << std::endl;

    return 0;
}
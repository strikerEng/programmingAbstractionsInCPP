#include <iostream>
#include <cmath>

const int SUM_LIMIT = 100;

/* Summing numbers from 1 to 100 */

int main(){
    int sum = 1;

    // The first number after 1 is two
    for (int i = 2 ; i <= SUM_LIMIT; i++){
        sum += i;
    }
    
    std::cout << "Sum of numbers between 1 & 100 : " << sum << std::endl;

    return 0;
}
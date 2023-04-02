#include <iostream>

int main(){
    int max = 4;
    int res = 0;
    int oddIntegerFound = 0;


    // make sure max is a positive integer
    if ( max < 0 ) {
        return 1;
    }

    // i is less than the max
    for(int i = 1; oddIntegerFound < max ; i++){

        // i is odd
        if ( i % 2 == 1 ){
            oddIntegerFound ++;
            res += i;
        }
        
    }

    std::cout << "Sum of the first " << max << " odd integers " << res << std::endl;
    
}
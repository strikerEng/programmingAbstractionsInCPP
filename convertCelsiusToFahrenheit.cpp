#include <iostream>

/* function prototype */
int celsiusToFahrenheit(int temp);

int main(){
    int temp;
    
    std::cin >> temp; /* store user input in temp variable */

    std::cout << celsiusToFahrenheit(temp) << std::endl; /* display the return value of the function */
}

/* celsiusToFahrenheit - converts celsius to fahrenheit */
int celsiusToFahrenheit(int temp){
    return (9.0 / 5.0) * temp + 32.0;
}
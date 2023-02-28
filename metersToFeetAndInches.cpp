#include <iostream>
#include <cmath>

/* function prototype */
int convertMetersToEnglishStandards(int meters);

int main(){
    int meters = 5; /* five meters */

    convertMetersToEnglishStandards(meters);

    return 0;
}

int convertMetersToEnglishStandards(int meters){
    double inch = 0.0254; /* an inch is 0.0254 meters */
    double foot = inch * 12; /* one foot is 12 inches */

    int feet = floor(meters / foot); /* get the int number of feet in the given meters */
    
    long double inches = ((meters / foot) - feet) * 12 ; /* get the number of inches from feet */

    std::cout << "Inch: " << inch << " Foot: " << foot << std::endl;
    std::cout << meters << " meters: " << "is " << feet << " feet and " << inches << " inches." << std::endl;

    return 0;
}
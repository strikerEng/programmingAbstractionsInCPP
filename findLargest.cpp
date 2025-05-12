#include <cmath>
#include <climits>
#include <string>
#include <iostream>

int main()
{
    int sentinel = 0;
    int input;
    int largestNum = INT_MIN;

    while (input != sentinel)
    {
        /* get user input */
        std::cin >> input;

        input = int(input);

        /* break from loop early if input is 0 */
        if (input == 0)
        {
            break;
        }

        /* handle negative numbers */

        if (input > largestNum)
        {
            largestNum = input;
        }
    }

    std::cout << "The largest value is " << largestNum << std::endl;
}
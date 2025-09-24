#include <cmath>
#include <climits>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout << "This program finds the largest in a list." << endl;
    cout << "Enter 0 to signal the end of the list." << endl;

    int sentinel = 0;
    int input;

    int largestValue = INT_MIN;
    int secondLargestValue = INT_MIN;

    int numbersEntered = 0;

    while (input != sentinel)
    {
        cout << "? ";
        cin >> input;

        input = int(input);

        if (input == sentinel)
        {
            break;
        }

        numbersEntered++;

        if (numbersEntered <= 1)
        {
            if (input > largestValue)
            {
                largestValue = input;
            }
        }
        else
        {
            if (input > largestValue)
            {
                int tmp = largestValue;
                largestValue = input;
                secondLargestValue = tmp;
            }
        }
    }

    cout << "The largest value is " << largestValue << endl;
    cout << "The second largest value is " << secondLargestValue << endl;
}
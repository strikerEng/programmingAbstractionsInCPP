#include <iostream>

int main()
{
    int res = 0;

    // count the number of odd integers found
    int maxOddIntegersToFind;

    std::cin >> maxOddIntegersToFind; /* store user input*/
    const int max = maxOddIntegersToFind;

    // make sure max is a positive integer
    if (maxOddIntegersToFind <= 0)
    {
        return 1;
    }

    for (int i = 1; maxOddIntegersToFind > 0; i++)
    {

        // i is odd
        if (i % 2 == 1)
        {
            maxOddIntegersToFind--;
            res += i;
        }
    }
    std::cout << "Sum of the first " << max << " odd integers " << res << std::endl;
}
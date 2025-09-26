#include <iostream>
#include <string>
using namespace std;

/// @brief Reverses an integer
/// @param n - the integer to reverse
/// @return (int) the reversed integer
int reverseInteger(int n)
{
    string result = "";

    while (n > 0)
    {
        result += to_string(n % 10);
        n /= 10;
    }

    return stoi(result);
}

int main()
{
    int input;

    cin >> input;

    int reversedInt = reverseInteger(input);

    cout << reversedInt << endl;
}
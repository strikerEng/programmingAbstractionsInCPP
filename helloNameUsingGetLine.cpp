#include <iostream>
#include <string>

using namespace std;

int main()
{
    // define a variable of string type
    string name;

    cout << "Enter your full name: ";

    // store value from console input stream into the name variable
    getline(cin, name);

    // Display input back to user

    cout << "Hello, " << name << "!" << endl;
    return 0;
}
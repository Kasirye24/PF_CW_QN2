#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

bool determinePositiveNumber(int number)
{
    return number > 0;
}

void printNumberDivisors(int number)
{
    for (int i = number; i >= 1; i--)
    {
        if (number % i == 0)
        {
            cout << i << endl;
        }
    }
    cout << endl;
}

void checkIfItsYorN(string input, int &number)
{
    if (input == "Y" || input == "y")
    {
        cout << "Please enter a positive integer: ";
        cin >> number;
        while (!determinePositiveNumber(number))
        {
            cout << number << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> number;
        }
        printNumberDivisors(number);
    }
    else if (input == "N" || input == "n")
    {
        cout << "Exiting the program." << endl;
        exit(0);
    }
    else
    {
        cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
    }
}

int main()
{
    int number;
    string yesOrNo;

    cout << "Welcome to the positive number system." << endl;
    cout << "Please enter a positive integer: ";
    cin >> number;

    while (!determinePositiveNumber(number))
    {
        cout << number << " is not a positive integer." << endl;
        cout << "Please enter a positive integer: ";
        cin >> number;
    }

    printNumberDivisors(number);

    while (true)
    {
        cout << "Would you like to see the divisors of another integer (Y/N)?: ";
        cin >> yesOrNo;
        checkIfItsYorN(yesOrNo, number);
    }

    return 0;
}


#include <iostream>
using namespace std;

// Example: Find Factorial of a given number

int main()
{
    int num;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: " << endl;
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial of negative number doesn't exist." << endl;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial;
    }

    return 0;
}
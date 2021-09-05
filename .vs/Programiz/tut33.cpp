#include <iostream>
using namespace std;

// Example: Calculate Factorial Using Recursion

int factorial(int n);

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    factorial(n);
    cout << "Factorial of " << n << " are = " << factorial(n) << endl;
    return 0;
}

int factorial(int n)
{
    if (n < 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
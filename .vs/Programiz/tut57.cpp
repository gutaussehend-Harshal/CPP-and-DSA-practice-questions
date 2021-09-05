#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int previousSum = sum(n - 1);
    return n + previousSum;
}

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    int previousPower = power(n, p - 1);
    return n * previousPower;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int previousFactorial = factorial(n - 1);
    return n * previousFactorial;
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, p;
    cin >> n >> p;

    cout << sum(n) << endl;
    cout << power(n, p) << endl;
    cout << factorial(n) << endl;
    cout << fib(n) << endl;
    return 0;
}
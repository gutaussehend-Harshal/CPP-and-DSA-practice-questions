#include <bits/stdc++.h>
using namespace std;

// Fibonacci series with recursion -->

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    system("CLS");
    cout << "Enter how many series of fibonacci series: " << endl;
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        cout << fib(i) << " ";
    }

    return 0;
}
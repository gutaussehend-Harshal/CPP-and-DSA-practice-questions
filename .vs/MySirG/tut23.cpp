#include <bits/stdc++.h>
using namespace std;

// Print first N terms of Fibonacci series -->

int main()
{
    int n, c;
    system("CLS");
    cout << "Enter a number: ";
    cin >> n;

    int a = -1, b = 1;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}
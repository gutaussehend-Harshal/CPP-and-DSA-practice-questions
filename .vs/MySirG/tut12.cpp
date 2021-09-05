#include <bits/stdc++.h>
using namespace std;

// Calculate product of first N natural numbers -->

int main()
{
    int n, factorial = 1;
    system("CLS");
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    cout << "Product of first N natural numbers: " << factorial << endl;
    return 0;
}
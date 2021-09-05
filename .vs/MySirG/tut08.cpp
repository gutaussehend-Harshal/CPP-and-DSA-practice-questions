#include <bits/stdc++.h>
using namespace std;

// printing first 10 natural numbers in reverse order -->

int main()
{
    int i = 1;
    while (i <= 10)
    {
        cout << 11 - i << " ";
        i++;
    }
    cout << endl;

    for (int i = 10; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << 11 - i << " ";
    }
    cout << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)  // Print first N natural even number.
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    for (int i = 1; i <= n; i++)  // Print first N natural odd number.
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
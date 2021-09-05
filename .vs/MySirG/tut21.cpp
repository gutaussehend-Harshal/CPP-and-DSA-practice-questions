#include <bits/stdc++.h>
using namespace std;

// All prime factrors of a number -->

int main()
{
    int x, i;
    system("CLS");
    cout << "Enter a number: ";
    cin >> x;

    for (i = 2; i <= x; i++)
    {
        while (x % i == 0)
        {
            cout << i << " ";
            x /= i;
        }
    }

    return 0;
}
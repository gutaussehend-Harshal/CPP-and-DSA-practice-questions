#include <bits/stdc++.h>
using namespace std;

// Check co-prime numbers -->

int main()
{
    int a, b, i, min;
    system("CLS");
    cout << "Enter two numbers: ";
    cin >> a >> b;

    min = a < b ? a : b;
    for (i = 2; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            break;
        }
    }

    if (i == min + 1)
    {
        cout << a << " & " << b << " are co-prime";
    }
    else
    {
        cout << a << " & " << b << " are not co-prime";
    }

    return 0;
}
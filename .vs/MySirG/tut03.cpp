#include <bits/stdc++.h>
using namespace std;

// Check number whether it is even or odd without using % operator -->

int main()
{
    system("CLS");
    int x;
    cin >> x;
    if (x & 1) // By using binary number.
    {
        cout << "The number is odd";
    }
    else
    {
        cout << "The number is even";
    }

    // if (x % 2 != 0)
    // {
    //     cout << "The number is odd";
    // }
    // else
    // {
    //     cout << "The number is even";
    // }

    return 0;
}
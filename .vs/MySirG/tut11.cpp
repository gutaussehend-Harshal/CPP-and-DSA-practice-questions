#include <bits/stdc++.h>
using namespace std;

// Reverse a number -->

int main()
{
    int n;
    cin >> n;

    int remainder, reversed_number = 0;
    while (n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    cout << reversed_number << endl;
    return 0;
}
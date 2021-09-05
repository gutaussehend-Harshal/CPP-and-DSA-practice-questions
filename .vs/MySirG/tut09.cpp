#include <bits/stdc++.h>
using namespace std;

// First 10 odd natural numbers -->

int main()
{
    system("CLS");
    cout << "print first 10 natural odd numbers: " << endl;
    int x = 1;

    int i = 1;
    while (i <= 10)
    {
        cout << x << " ";
        x = x + 2;
        i++;
    }
    cout << endl;

    cout << "print first 10 natural odd numbers: " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << 2 * i - 1 << " ";
    }
    cout << endl;

    int j = 1;
    cout << "print first 10 natural even numbers: " << endl;
    while (j <= 10)
    {
        cout << 2 * j << " ";
        j++;
    }

    return 0;
}
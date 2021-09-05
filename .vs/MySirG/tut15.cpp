#include <bits/stdc++.h>
using namespace std;

// Print all numbers under 1000 -->

int main()
{
    int n, r, x, s;
    system("CLS");

    cout << "Armstrong numbers are: " << endl;
    for (int n = 1; n <= 1000; n++)
    {
        x = n;
        s = 0;
        while (x != 0)
        {
            r = x % 10;
            s = s + r * r * r;
            x /= 10;
        }
        if (s == n)
        {
            cout << n << " ";
        }
    }
    return 0;
}

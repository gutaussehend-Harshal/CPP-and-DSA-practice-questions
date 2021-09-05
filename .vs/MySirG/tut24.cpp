#include <bits/stdc++.h>
using namespace std;

// Find greater among three numbers -->

int main()
{
    int k, a, b, c;
    system("CLS");
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            k = a;
        }
        else
        {
            k = c;
        }
    }
    else
    {
        if (b > c)
        {
            k = b;
        }
        else
        {
            k = c;
        }
    }

    cout << "Greater number is: " << k << endl;
    return 0;
}
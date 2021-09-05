#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, u, x, i;
    system("CLS");
    cout << "Enter two numbers: ";
    cin >> l >> u;

    for (x = l + 1; x <= u - 1; x++)
    {
        for (i = 2; i <= x; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }
        if (i == x)
        {
            cout << x << " ";
        }
    }

    return 0;
}
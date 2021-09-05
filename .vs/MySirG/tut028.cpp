#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    system("CLS");
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            cout << i << " is odd" << endl;
        }
        else
        {
            cout << i << " is even" << endl;
        }
    }

    return 0;
}
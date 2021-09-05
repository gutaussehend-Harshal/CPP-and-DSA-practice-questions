#include <bits/stdc++.h>
using namespace std;

// Calculate x power y -->

int main()
{
    int x, y, p = 1, power;
    system("CLS");
    cout << "Enter a number & it's power: ";
    cin >> x >> y;

    for (int i = 1; i <= y; i++)
    {
        p = p * x;
    }
    cout << p << endl;

    power = pow(x, y);
    cout << power << endl;
    return 0;
}
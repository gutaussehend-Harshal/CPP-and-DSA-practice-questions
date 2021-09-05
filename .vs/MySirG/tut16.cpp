#include <bits/stdc++.h>
using namespace std;

// Calculate sum of digits in number -->

int main()
{
    int n, r, s = 0;
    system("CLS");
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10;
        s = s + r;
        n /= 10;
    }
    cout << "The sum is: " << s << endl;

    return 0;
}
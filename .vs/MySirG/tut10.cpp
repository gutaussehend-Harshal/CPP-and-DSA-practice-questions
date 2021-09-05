#include <bits/stdc++.h>
using namespace std;

// Count digits in a number -->

int main()
{
    // int n;
    // cin >> n;

    // int count = 0;
    // while (n != 0)
    // {
    //     if (n % 10 == 0)
    //     {
    //         count++;
    //     }
    //     n /= 10;
    // }
    // cout << count << endl;

    int n;
    cin >> n;

    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    cout << "Number of digits in number: " << count << endl;

    return 0;
}
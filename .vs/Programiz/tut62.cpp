#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // string s1 = "cafiwfhkajvk";
    // sort(s1.begin(), s1.end());
    // cout << s1 << endl;
    int n, count = 0;
    cin >> n;

    while (n != 0)
    {
        if (n % 10 == 0)
        {
            count++;
        }

        n = n / 10;
    }

    cout << count << endl;
    return 0;
}
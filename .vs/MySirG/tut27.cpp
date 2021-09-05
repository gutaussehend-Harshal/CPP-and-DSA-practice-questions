#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min, i;
    system("CLS");
    cout << "Enter a number: ";
    cin >> n;

    int a = 2;
    while (n)
    {
        for (int b = 2; b <= a; b++)
        {
            min = a < b ? a : b;
            for (int i = 2; i <= min; i++)
            {
                if (a % i == 0 && b % i == 0)
                {
                    break;
                }
            }

            if (i == min + 1)
            {
                cout << a << " " << b;
            }
            n--;
            if (n == 0)
            {
                exit(0);
            }
        }
        a++;
    }

    return 0;
}
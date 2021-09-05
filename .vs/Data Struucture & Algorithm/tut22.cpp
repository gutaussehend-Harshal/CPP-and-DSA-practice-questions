#include <iostream>
using namespace std;

int main()
{
    int a[] = {9,9,9};
    int b[] = {1, 9, 9};

    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int);

    int max_Size = max(m,n);

    int ans[max_Size];
    int s = 0;
    int carry = 0;
    int diff = abs(m - n);

    for (int i = max_Size - 1; i >= 0; i--)
    {
        if (i >= diff)
        {
            s = a[i] + b[i - diff] + carry;
            carry = 0;
            ans[i] = (s % 10);
            carry = s / 10;
        }
        else
        {
            ans[i] = a[i] + carry;
            carry = 0;
        }
    }

    // int ans2[m + 1];

    // for (int i = 0; i < m + 1; i++)
    // {
    //     if (carry > 0)
    //     {
    //         ans2[i] = ans[i];
    //     }
    // }

    cout << "[ ";

    for (int i = 0; i < max_Size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}
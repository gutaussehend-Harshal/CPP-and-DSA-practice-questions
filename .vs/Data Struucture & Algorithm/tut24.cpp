#include <iostream>
using namespace std;
//addition of array

void displayArr(int arr[], int s)
{
    cout << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << '\t';
    }
}

void addNum(int a[], int s)
{
    cout << endl;
    for (int i = 0; i < s; i++)
    {
        cout << "Enter " << i << " number element : ";

        cin >> a[i];
    }
    cout << endl;
}

int main()
{
    int s1, s2;
    int sum = 0;
    int carry = 0;

    cout << "Enter 1st array size: " << endl;
    cin >> s1;
    int a[s1];

    addNum(a, s1);

    cout << "Enter 2nd array size : " << endl;
    cin >> s2;
    int b[s2];

    addNum(b, s2);

    int diff = abs(s1 - s2);
    int m = max(s1, s2);
    int ans2[m + 1];
    // cout << "diff" << diff << endl;
    // cout << "m : " << m << endl;

    int ans[m];
    bool maxCarry = false;

    for (int i = m - 1; i >= 0; i--)
    {
        if (i >= diff)
        {
            sum = a[i] + b[i - diff] + carry;
            carry = 0;
            ans[i] = sum % 10;
            carry = sum / 10;
        }
        else
        {
            sum = a[i] + carry;
            carry = 0;
            ans[i] = sum % 10;
            carry = sum / 10;
        }

        if (i == 0 && carry != 0)
        {
            maxCarry = true;
            ans2[m + 1];
            for (int j = m + 1; j >= 0; j--)
            {
                if (j == 0)
                {
                    ans2[j] = carry;
                    carry = 0;
                }
                else
                {
                    ans2[j] = ans[j - 1];
                }
            }
        }
    }

    cout << endl;

    displayArr(a, s1);
    displayArr(b, s2);

    if (maxCarry)
    {
        displayArr(ans2, m + 1);
    }
    else
    {
        displayArr(ans, m);
    }

    return 0;
}
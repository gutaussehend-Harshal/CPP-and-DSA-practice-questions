#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    // int m = n;
    int remainder;
    int reverse = 0;
    while (n != 0)
    {
        remainder = n % 10;
        // cout << "Remainder = " << remainder << endl;
        reverse = (reverse * 10) + remainder;
        // cout << "Reverse = " << reverse << endl;
        n /= 10;
        // cout << "n = " << n << endl;
    }
    return reverse;
}

void palindrome(int n)
{
    int m = n;
    if (reverse(n) == m)
    {
        cout << "Number is palindrome" << endl;
    }
    else
    {
        cout << "Number is not palindrome" << endl;
    }
}

int main()
{
    system("CLS");
    int n = 1221;

    palindrome(n);

    return 0;
}
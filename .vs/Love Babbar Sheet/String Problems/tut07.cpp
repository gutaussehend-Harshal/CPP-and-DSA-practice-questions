#include <bits/stdc++.h>
using namespace std;

// Compare two strings -->

int main()
{
    system("CLS");
    string a = "hannah";
    string b = "hannaa";
    string res = "";

    if (a.length() != b.length())
    {
        cout << "Strings are not same" << endl;
        return 0;
    }

    // for (int i = 0; i < a.length(); i++)
    // {
    //     res += a[i];
    // }
    // cout << res << endl;

    // if (res == b)
    // {
    //     cout << "Strings are same" << endl;
    // }
    // else
    // {
    //     cout << "Strings are not same" << endl;
    // }

    for (int i = 0; (i < a.length() && i < b.length()) && (a[i] == b[i]); i++)
        ;
    if (a == b)
    {
        cout << "Strings are same" << endl;
    }
    else
    {
        cout << "Strings are not same" << endl;
    }

    return 0;
}
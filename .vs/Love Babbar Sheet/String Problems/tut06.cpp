#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    string s = "hanna";
    string res = "";

    for (int i = s.size() - 1; i >= 0; i--)
    {
        res += s[i];
    }

    cout << res << endl;

    if (res == s)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    // int l = s.size();
    // int i;
    // for (i = 0; i < l / 2 && s[i] == s[l - i]; i++)
    //     ;

    // if (i == l / 2)
    // {
    //     cout << "Palindrome" << endl;
    // }
    // else
    // {
    //     cout << "Not Palindrome" << endl;
    // }

    return 0;
}
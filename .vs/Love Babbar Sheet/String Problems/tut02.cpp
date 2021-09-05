#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[80];
    string reverse = "";
    system("CLS");
    cout << "Enter a string: ";
    cin >> str;

    int l = strlen(str);
    cout << "Length of the string is: " << l << endl;
    // for (int i = 0; i < l; i++)
    // {
    //     reverse += str[i];
    // }

    for (int i = l - 1; i >= 0; i--)
    {
        reverse += str[i];
    }
    cout << reverse << endl;

    // for (int i = 0; i < l / 2; i++)
    // {
    //     reverse = swap(str[i], str[l - 1 - i]);
    // }

    if (reverse == str)
    {
        cout << "string is palindrome" << endl;
    }
    else
    {

        cout << "string is not palindrome" << endl;
    }

    return 0;
}
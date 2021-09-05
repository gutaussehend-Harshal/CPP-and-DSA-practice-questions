#include <bits/stdc++.h>
using namespace std;

// Remove duplicates from string -->

int main()
{
    string s, result = "";
    system("CLS");
    cout << "Enter a string: ";
    getline(cin, s);

    int string[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (string[s[i]] == 0)
        {
            string[s[i]] = 1;
            result += s[i];
        }
    }
    cout << result << endl;

    return 0;
}
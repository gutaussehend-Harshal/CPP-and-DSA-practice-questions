#include <bits/stdc++.h>
using namespace std;

// Convert a string into it's uppercase -->

int main()
{
    char s[100];
    system("CLS");
    cout << "Enter a string: ";
    gets(s);

    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }

    cout << s << endl;

    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

    cout << s << endl;
    cout << strupr(s) << endl;
    cout << strlwr(s);
    return 0;
}
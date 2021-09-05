#include <bits/stdc++.h>
using namespace std;

// Write a program to convert a string in lowercase -->

int main()
{
    system("CLS");
    string s1 = "MY NAME IS HARSHAL";
    string s2 = "my name is harshal";
    char s3[80] = "HANNAH GRACE";
    char s4[80] = "hannah grace";

    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] += 32;
        }
        else
        {
            s1[i];
        }
    }

    cout << "Lowercase string: " << s1 << endl;
    cout << "Lowercase string: " << strlwr(s3) << endl << endl;

    for (int i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] >= 'a' && s2[i] <= 'z')
        {
            s2[i] -= 32;
        }
        else
        {
            s2[i];
        }
    }
    cout << "Uppercase string: " << s2 << endl;
    cout << "Uppercase string: " << strupr(s4) << endl;

    return 0;
}
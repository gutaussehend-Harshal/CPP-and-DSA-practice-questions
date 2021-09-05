// Write a program to find a substring within a string. If found display its starting position -->
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     system("CLS");
//     char str1[80], str2[80];

//     cout << "Enter first string: ";
//     cin.getline(str1, 80);

//     cout << "Enter second string: ";
//     cin.getline(str2, 80);

//     int l;
//     for (l = 0; str2[l]; l++)
//         ;
//     cout << "Length: " << l << endl;

//     int i, j;

//     for (i = 0, j = 0; str1[i] && str2[j]; i++)
//     {
//         cout << str1[i] << " " << str2[j] << endl;
//         if (str1[i] == str2[j])
//         {
//             j++;
//         }
//         else
//         {
//             j = 0;
//         }
//     }

//     cout << i << " " << j << endl;

//     if (j == l)
//         cout << "Substring found at position " << i - j + 1;
//     else
//         cout << "Substring not found";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    string s1;
    cout << "Enter first string: ";
    getline(cin, s1);
    string s2;
    cout << "Enter second string: ";
    getline(cin, s2);

    int i, j;
    for (i = 0, j = 0; i < s1.length() && j < s2.length(); i++)
    {
        // cout << s1[i] << " " << s2[j] << endl;
        if (s1[i] == s2[j])
        {
            // cout << "The value of j: " << j << endl;
            // cout << s1[i] << " " << s2[j] << endl;
            j++;
        }
        else
        {
            // cout << "The value of j again: " << j << endl;
            j = 0;
        }
    }

    // cout << i << " " << j << endl;
    // cout << s1.length() << " " << s2.length() << endl;

    if (s2.length() == j)
    {
        cout << "Substring found at position " << i - j + 1 << endl;
    }
    else
    {
        cout << "Substring not found" << endl;
    }

    return 0;
}
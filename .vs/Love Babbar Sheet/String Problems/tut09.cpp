#include <bits/stdc++.h>
using namespace std;

// String palindrome can be formed or not -->

int main()
{
    system("CLS");
    string s = "appleael";
    int alpha[26] = {0};
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        alpha[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alpha[i] << " ";
    }
    cout << endl;

    int k = 0;

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] % 2 == 0)
        {
            continue;
        }
        else
        {
            k++;
        }
    }


    if (l % 2 == 0 && k == 0)
    {
        cout << "length : " << l << endl;
        cout << "l%2 = " << l % 2 << endl;
        cout << "k = " << k << endl;
        cout << "Yes - can be formed" << endl;
    }
    else if (l % 2 == 1 && k == 1)
    {
        cout << "length : " << l << endl;
        cout << "l%2 = " << l % 2 << endl;
        cout << "k = " << k << endl;
        cout << "Yes - can be formed" << endl;
    }
    else
    {
        cout << "length : " << l << endl;
        cout << "l%2 = " << l % 2 << endl;
        cout << "k = " << k << endl;
        cout << "No - cannot be formed" << endl;
    }

    return 0;
}
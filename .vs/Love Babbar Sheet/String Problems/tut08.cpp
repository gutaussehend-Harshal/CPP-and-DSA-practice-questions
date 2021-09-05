#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    string s1 = "Hannah";
    string s2 = "Grace";
    char s3[80];

    // cout << s1 + s2 << endl;
    // cout << s1.append(s2) << endl;
    int count = 0;
    for (int i = 0; s1[i]; i++)
    {
        if (s1[i] == ' ')
        {
            count++;
        }
    }

    cout << "Number of words in the string are: " << count + 1 << endl;

    s1.copy(s3, s1.length(), 0);
    cout << s3 << endl;

    if (s1.compare(s2) == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }

    int l = s1.length();
    for (int i = 0; i < (l / 2); i++)
    {
        swap(s1[i], s1[l - i - 1]);
    }
    cout << s1 << endl;

    return 0;
}
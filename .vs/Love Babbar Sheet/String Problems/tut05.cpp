// Count no of balloons in given string -->
#include <bits/stdc++.h>
using namespace std;

int maxNumberOfBalloons(string s)
{
    int b = 0, a = 0, l = 0, o = 0, n = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
        {
            b++;
        }
        else if (s[i] == 'a')
        {
            a++;
        }
        else if (s[i] == 'l')
        {
            l++;
        }
        else if (s[i] == 'o')
        {
            o++;
        }
        else if (s[i] == 'n')
        {
            n++;
        }
    }

    l /= 2;
    o /= 2;

    return min({b, a, l, o, n});
}

int main()
{
    system("CLS");    // loonbalxballpoon
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    // gets(s);

    cout << "Maximum no of instances can be formed: " << maxNumberOfBalloons(s) << endl;

    return 0;
}
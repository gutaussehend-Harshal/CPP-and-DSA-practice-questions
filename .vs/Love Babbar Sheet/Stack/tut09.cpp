#include <bits/stdc++.h>
using namespace std;

bool messageCanBeSent(string s)
{
    int n = s.length();
    stack<char> st;
    bool ans = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            st.push(s[i]);
        }
        else if (s[i] == '.')
        {
            if (!st.empty() && st.top() == '-')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    if (!st.empty())
    {
        return false;
    }
    else
    {
        return ans;
    }
}

int main()
{
    system("CLS");
    string s = "-.-.-.-.";

    if (messageCanBeSent(s))
    {
        cout << "Message can be sent to Mayank" << endl;
    }
    else
    {
        cout << "Message can not be sent to Mayank" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Balance parenthesis -->

bool isValid(string s)
{
    int n = s.size();
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
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
        return true;
    }
}

int main()
{
    system("CLS");
    string s = "{[()]}";

    if (isValid(s))
    {
        cout << "Valid String" << endl;
    }
    else
    {
        cout << "Invalid String" << endl;
    }

    return 0;
}
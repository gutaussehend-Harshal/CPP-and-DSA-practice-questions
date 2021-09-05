#include <bits/stdc++.h>
using namespace std;

// Remove all adjacent duplicates in string -->

void removeAllAdjacentDuplicates(string s)
{
    stack<char> st;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (st.empty() || s[i] != st.top())
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
        }
    }

    if (st.empty())
    {
        cout << "Empty string" << endl;
    }
    else
    {
        string result = "";
        while (!st.empty())
        {
            result = st.top() + result;
            st.pop();
        }
        cout << result << " ";
    }
}

int main()
{
    string s = "abbaca";
    removeAllAdjacentDuplicates(s);
    return 0;
}
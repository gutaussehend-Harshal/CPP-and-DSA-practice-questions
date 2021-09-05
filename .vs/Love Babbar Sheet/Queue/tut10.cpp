#include <bits/stdc++.h>
using namespace std;

// Reverse string using stack -->

void reverseString(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }

    for (int i = 0; i < s.size(); i++)
    {
        s[i] = st.top();
        st.pop();
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
}

int main()
{
    system("CLS");
    string s = "Harshal";

    reverseString(s);
    return 0;
}

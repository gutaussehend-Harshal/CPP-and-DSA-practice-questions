#include <bits/stdc++.h>
using namespace std;

// Reverse sentence using stack -->

void reverseSentence(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string result = "";
        while (s[i] != ' ' && i < s.length())
        {
            result += s[i];
            i++;
        }
        st.push(result);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    system("CLS");
    string s = "Hey how are you doing?";
    reverseSentence(s);
    return 0;
}
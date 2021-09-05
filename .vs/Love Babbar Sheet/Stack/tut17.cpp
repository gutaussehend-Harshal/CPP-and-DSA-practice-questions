#include <iostream>
#include <stack>
using namespace std;

void msgChker(string s)
{
    stack<char> st;
    st.push(s[0]);

    for (int i = 1; i < s.length(); i++)
    {
        if (!st.empty() && (s[i] == '.' && st.top() == '-'))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    if (st.empty())
    {
        cout << "can send msg" << endl;
    }
    else
    {
        cout << "msg cannot be send" << endl;
    }
}

int main()
{
    string s;
    getline(cin, s);
    msgChker(s);

    return 0;
}
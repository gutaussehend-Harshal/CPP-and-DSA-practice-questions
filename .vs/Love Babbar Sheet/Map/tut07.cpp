#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for (auto value : s)
    {
        cout << value << endl;
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *(it) << endl;
    }
}

int main()
{
    system("CLS");
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    auto it = s.find("abcd");
    if (it != s.end())
    {
        s.erase(it);
        cout << *(it) << endl;
    }
    cout << endl;

    print(s);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     set<string> s;
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         string str;
//         cin >> str;
//         s.insert(str);
//     }

//     for (auto i = s.begin(); i != s.end(); i++)
//     {
//         cout << *i << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// void print(map<int, string> &m)
// {
//     // map<int, string>::iterator it;
//     // for (auto it = m.begin(); it != m.end(); it++)
//     // {
//     //     cout << it->first << " " << it->second << endl;
//     // }
//     cout << m.size() << endl;
//     for (auto &value : m)
//     {
//         cout << value.first << " " << value.second << endl;
//     }
// }

// int main()
// {
//     map<int, string> m;
//     m[1] = "abc";
//     m[5] = "cdc";
//     m[3] = "acd";
//     m.insert({4, "afg"});
//     m[6] = "a";
//     m[5] = "cde";

//     auto it = m.find(7);
//     if (it != m.end())
//     {
//         m.erase(it);
//     }
//     // m.clear();
//     if (it == m.end())
//     {
//         cout << "No value" << endl;
//     }
//     else
//     {
//         cout << it->first << " " << it->second << endl;
//     }

//     print(m);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// Print unique strings in lexographical order with their frequency

int main()
{
    system("CLS");
    map<string, int> m;
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}
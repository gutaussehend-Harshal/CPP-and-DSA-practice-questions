#include <bits/stdc++.h>
using namespace std;

// Unordered map -->

int main()
{
    system("CLS");
    unordered_map<string, int> m;
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    int q;
    cout << "Enter queries: ";
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;
        cout << m[s] << endl;
    }

    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}
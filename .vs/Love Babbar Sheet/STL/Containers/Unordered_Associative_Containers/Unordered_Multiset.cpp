// unordered_multiset and its uses -->
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    unordered_multiset<int> ums({1, 3, 1, 7, 2, 3, 4, 1, 6});
    int val = 1;

    unordered_multiset<int>::iterator it;
    for (auto it = ums.begin(); it != ums.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    if (ums.find(val) != ums.end())
    {
        ums.erase(ums.find(val));
    }

    unordered_multiset<int>::iterator it1;
    for (auto it1 = ums.begin(); it1 != ums.end(); it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Find the Union and Intersection of the two sorted arrays -->

void printUnion(int a[], int m, int b[], int n)
{
    map<int, int> mp;

    for (int i = 0; i < m; i++)
    {
        mp.insert({a[i], i});
    }

    for (int i = 0; i < n; i++)
    {
        mp.insert({b[i], i});
    }

    // mp.erase(1);
    // mp.erase(3);
    // mp.erase(7);
    // mp.erase(8);
    // mp.erase(9);

    // mp.erase(2);
    // mp.erase(4);
    // mp.erase(5);
    // mp.erase(6);

    for (auto value : mp)
    {
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;

    // for (auto i = mp.begin(); i != mp.end(); i++)
    // {
    //     cout << i->first << " " << i->second << endl;
    // }

}

int main()
{
    int a[7] = {1, 2, 5, 6, 2, 3, 7};
    int b[9] = {2, 4, 5, 6, 8, 9, 4, 6, 5};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    system("CLS");
    printUnion(a, m, b, n);
    return 0;
}
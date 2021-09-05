#include <bits/stdc++.h>
using namespace std;

// Search an element -->

int main()
{
    int n, m, x;
    cout << "Enter row size & column size: " << endl;
    cin >> n >> m;
    cout << "Enter the element" << endl;
    cin >> x;
    int arr[n][m];
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << endl;
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "Element is found." << endl;
    }
    else
    {
        cout << "Element is not found." << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Print matrix in zig-zag pattern -->

int main()
{
    int m, n, i = 0;
    cin >> m >> n;
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
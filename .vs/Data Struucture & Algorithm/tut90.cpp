#include <bits/stdc++.h>
using namespace std;

// Print matrix disagonally -->

int main()
{
    int n, m,i,j;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for (int k = 0; k <= n - 1; k++)
    {
        i = k;
        j = 0;
        while (i >= 0)
        {
            cout << arr[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
    }

    for (int k = 1; k <= m - 1; k++)
    {
        i = n - 1;
        j = k;
        while (j <= m - 1)
        {
            cout << arr[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
    }

    return 0;
}
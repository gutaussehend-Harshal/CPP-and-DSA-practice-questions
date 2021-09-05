#include <bits/stdc++.h>
using namespace std;

// Print matrix in spiral form -->

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    int i, k = 0, l = 0, last_row = m - 1, last_col = n - 1;
    while (k <= last_row && l <= last_col)
    {
        for (int i = l; i <= last_col; i++)
        {
            cout << arr[k][i] << " ";
        }
        k++;

        for (int i = k; i <= last_row; i++)
        {
            cout << arr[i][last_col] << " ";
        }
        last_col--;

        // if (k <= last_row)
        // {
            for (int i = last_col; i >= l; i--)
            {
                cout << arr[last_row][i] << " ";
            }
            last_row--;
        // }

        // if (l <= last_col)
        // {
            for (int i = last_row; i >= k; i--)
            {
                cout << arr[i][l] << " ";
            }
            l++;
        // }
    }

    return 0;
}
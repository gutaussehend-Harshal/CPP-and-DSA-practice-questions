#include <bits/stdc++.h>
using namespace std;

// Rotate matrix by 90 -->

int main()
{
    int n, m;
    cout << "Enter size: " << endl;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
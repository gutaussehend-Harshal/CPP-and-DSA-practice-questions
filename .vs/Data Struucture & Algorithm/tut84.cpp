#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int A[n][m], B[n][m];
    int addition[n][m], substraction[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            addition[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            substraction[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "The addition of elements is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << addition[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "The substraction of elements is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << substraction[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
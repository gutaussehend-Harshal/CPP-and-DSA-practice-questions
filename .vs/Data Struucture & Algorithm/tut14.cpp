#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Max size: " << endl;
    cin >> m;
    cout << "Min size: " << endl;
    cin >> n;

    int a[m];
    int b[n];

    cout << "Enter max size array element: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    cout << "Enter min size array element: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    // m = sizeof(a) / sizeof(a[0]);
    // n = sizeof(b) / sizeof(b[0]);
    // cout << m << " " << n << endl;

    int diff = m - n;
    cout << diff << endl;

    int ans[m];
    for (int i = m - 1; i >= 0; i--)
    {
        if (i >= diff)
        {
            ans[i] = a[i] + b[i - diff]; 
        }
        else
        {
            ans[i] = a[i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
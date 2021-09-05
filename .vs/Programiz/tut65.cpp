#include <iostream>
using namespace std;

// Merging of two arrays -->

void merge(int a[], int m, int b[], int n)
{
    int e = m + n - 1;
    int e1 = m - 1;
    int e2 = n - 1;

    while (e2 >= 0)
    {
        if (e1 >= 0)
        {
            if (a[e1] > b[e2])
            {
                a[e--] = a[e1--];
            }
            else
            {
                a[e--] = b[e2--];
            }
        }
        else
        {
            a[e--] = b[e2--];
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m + n];
    int b[n];

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    merge(a, m, b, n);

    for (int i = 0; i < m + n; i++)
    {
        cout << a[i] << '\t';
    }
}
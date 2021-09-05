#include <bits/stdc++.h>
using namespace std;

// Merge 2 sorted arrays without using Extra space -->
void merge(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0, k = m - 1;
    while (i <= k && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            // swap(arr2[j++], arr1[k--]);
            swap(arr2[j], arr1[k]);
            j++, k--;
        }
    }

    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
}

int main()
{
    int m, n;
    system("CLS");
    cout << "Enter size of first & second array: ";
    cin >> m >> n;
    int arr1[m];
    int arr2[n];

    for (int i = 0; i < m; i++)   // 1 5 9 10 15 20 
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)  // 2 3 8 13
    {
        cin >> arr2[i];
    }

    merge(arr1, arr2, m, n);

    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
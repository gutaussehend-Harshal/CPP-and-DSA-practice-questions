#include <bits/stdc++.h>
using namespace std;

// Replace by Next greater element -->

int main()
{
    // int arr[7] = {1, 3, 0, 0, 1, 2, 4};
    int arr[8] = {3, 4, 20, 6, 15, 2, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_from_right = arr[n - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        if (max_from_right > arr[i])
        {
            arr[i] = max_from_right;
        }
        else
        {
            max_from_right = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
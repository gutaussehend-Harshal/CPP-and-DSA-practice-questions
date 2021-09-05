#include <bits/stdc++.h>
using namespace std;

// Rainwater trapping problem -->

int rainWater(int arr[], int size)
{
    int n = size;
    int left[n];
    int right[n];

    left[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }

    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i > 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (min(left[i], right[i]) - arr[i]);
    }

    // cout << ans << endl;
    return ans;
}

int main()
{
    int size;
    system("CLS");
    cout << "Enter a size: "; // 3 1 2 4 0 1 3 2
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << rainWater(arr, size);

    return 0;
}
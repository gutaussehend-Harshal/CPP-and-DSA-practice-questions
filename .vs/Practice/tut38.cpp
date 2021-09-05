#include <bits/stdc++.h>
using namespace std;

// Searching an element in an array -->

int linearSearch(int *arr, int n, int element) // Time complexity = n
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
            break;
        }
    }
    return -1;
}

int binarySearch(int *arr, int n, int element) // Time complexity = log n
{
    int low, mid, high;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, element;
    system("CLS");
    cout << "Enter a size & element: "; // 5 9 17 23 25 45 59 63 71 89          n = 10
    cin >> n >> element;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int searchIndex1 = linearSearch(arr, n, element);
    int searchIndex2 = binarySearch(arr, n, element);

    cout << "The element " << element << " found at index " << searchIndex1 << " by linear search." << endl;
    cout << "The element " << element << " found at index " << searchIndex2 << " by binary search." << endl;

    return 0;
}
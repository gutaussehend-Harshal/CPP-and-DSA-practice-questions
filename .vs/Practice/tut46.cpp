#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int element)
{
    for (auto i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
            break;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int element)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
            break;
        }
        else if (arr[mid] < element)
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

int BinarySearch(int arr[], int element, int low, int high)
{
    int mid;
    if (low > high)
    {
        return -1;
    }

    mid = (low + high) / 2;
    
    if (arr[mid] == element)
    {
        return mid;
    }
    else if (arr[mid] < element)
    {
        return BinarySearch(arr, element, mid + 1, high);
    }
    else
    {
        return BinarySearch(arr, element, low, mid - 1);
    }
}

int main()
{
    system("CLS");
    int arr[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 23;

    int low = 0;
    int high = n - 1;

    cout << linearSearch(arr, n, element) << endl;
    cout << binarySearch(arr, n, element) << endl;
    cout << BinarySearch(arr, element, low, high) << endl;

    return 0;
}
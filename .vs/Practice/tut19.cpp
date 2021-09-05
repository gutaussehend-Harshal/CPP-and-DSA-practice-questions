#include <iostream>
using namespace std;

// Ok file...

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;

    // Keep searching until low <= high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return 1;
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

    return 0;
}

int main()
{
    int arr[] = {2, 8, 10, 32, 66, 100, 104, 200, 400};
    int value = 2;

    bool found = binarySearch(arr, 9, 2);
    if (found == 1)
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }

    return 0;
}
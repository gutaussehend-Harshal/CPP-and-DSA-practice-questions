#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    high = size - 1;
    low = 0;

    while (low <= high)
    {

        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
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
    return 0;
}
int main()
{
    int element;
    int arr[] = {2, 8, 10, 32, 66, 100, 104, 200, 400};
    int value = 200;

    bool found = binarySearch(arr, 9, 400);
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
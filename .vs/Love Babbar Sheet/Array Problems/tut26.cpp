// Find the triplet that sum to a given value -->
#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int arr[], int size, int target)
{
    int low, high;

    sort(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        low = i + 1;
        high = size - 1;

        while (low < high)
        {
            if (arr[i] + arr[low] + arr[high] == target)
            {
                cout << arr[i] << " " << arr[low] << " " << arr[high] << endl;
                // break;
                return true;
            }
            else if (arr[i] + arr[low] + arr[high] < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    return false;
}

int main()
{
    system("CLS");
    int arr[] = {1, 4, 45, 6, 10, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 22;

    find3Numbers(arr, size, target);

    return 0;
}
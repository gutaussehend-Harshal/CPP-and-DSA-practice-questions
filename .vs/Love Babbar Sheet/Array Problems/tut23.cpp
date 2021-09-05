#include <bits/stdc++.h>
using namespace std;

// Two sum by nlogn

int main()
{
    int size, key, i, low, mid, high, sum;
    system("CLS");
    cout << "Enter size & key: ";
    cin >> size >> key;
    int arr[size];

    for (i = 0; i < size; i++) //
    {
        cin >> arr[i];
    }

    i = 0;
    while (i < size)
    {
        sum = key - arr[i];
        low = 0;
        high = size - 1;

        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] == sum)
            {
                break;
            }
            else if (arr[mid] < sum)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (arr[i] + arr[mid] == key)
        {
            cout << "We found the target index: " << i << " and " << mid << endl;
            cout << "The summation values are: " << arr[i] << " + " << arr[mid] << " =" << key << endl;
            break;
        }
        i++;
    }

    return 0;
}
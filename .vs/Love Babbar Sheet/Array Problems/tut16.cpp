#include <bits/stdc++.h>
using namespace std;

// Three sum problem -->

int main()
{
    int size, target, current, low, high;
    system("CLS");
    cout << "Enter size & target value: "; // 6  24
    cin >> size >> target;                 // 12 3 6 9 34 25

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bool found = false;
    sort(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        low = i + 1, high = size - 1;
        while (low < high)
        {
            current = arr[i] + arr[low] + arr[high];
            if (current == target)
            {
                found = true;
            }
            if (current < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    if (found)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }

    return 0;
}
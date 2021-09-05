#include <bits/stdc++.h>
using namespace std;

// Largest sum contiguous subarray -->

int maxSumSubArray(int arr[], int size)
{
    int maxSum = 0;
    int curSum = 0;

    for (int i = 0; i < size; i++)
    {
        curSum += arr[i];
        if (curSum > maxSum)
        {
            maxSum = curSum;
        }
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int size;
    system("CLS");
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)      // 5 4 6 -3 4 -1
    {
        cin >> arr[i];
    }

    cout << "Sum: " << maxSumSubArray(arr, size) << endl;

    return 0;
}
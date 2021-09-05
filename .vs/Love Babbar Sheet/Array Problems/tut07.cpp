#include <bits/stdc++.h>
using namespace std;

// Largest sum contiguous subarray --> (Kadane's Algo)

int main()
{
    system("CLS");
    int arr[] = {4, -2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    int start = 0, end = 0, s = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    cout << "Maximum sum subarray is: " << max_so_far << endl;
    cout << "Starting index position of sub array is: " << start << " & ending index is: " << end << endl;

    return 0;
}
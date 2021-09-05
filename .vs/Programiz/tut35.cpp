#include <iostream>
using namespace std;

// Kaden's algorithm -->

int maxSumArray(int a[], int size)
{
    int maxSum = 0;
    int currentSum = 0;
    for (int i = 0; i < size; i++)
    {
        currentSum = currentSum + a[i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    // int a[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // int a[8] = {-2, -3, 4, -1, -2, 1, 5, -3};

    int size;
    cout << "Enter a size: " << endl;
    cin >> size;
    int a[size];

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    maxSumArray(a, size);
    cout << "The largest contiguous sum is: " << maxSumArray(a, size) << endl;
    return 0;
}
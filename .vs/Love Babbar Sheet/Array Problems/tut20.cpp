#include <bits/stdc++.h>
using namespace std;

// Best time to buy and Sell stock -->

int maxProfit(int arr[], int size)
{
    int maxProfit = 0;
    int minSoFar = arr[0];

    for (int i = 0; i < size; i++)
    {
        minSoFar = min(minSoFar, arr[i]);
        int profit = arr[i] - minSoFar;
        maxProfit = max(maxProfit, profit);
    }
    return maxProfit;
}

int main()
{
    int size;
    system("CLS");
    cout << "Enter size: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)    // 3 1 4 8 7 2 5
    {
        cin >> arr[i];
    }
    cout << maxProfit(arr, size);

    return 0;
}
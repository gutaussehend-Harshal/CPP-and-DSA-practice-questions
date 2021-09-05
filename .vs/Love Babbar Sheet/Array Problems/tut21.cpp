#include <bits/stdc++.h>
using namespace std;

// Best time to buy and Sell multiple stock -->

int maxProfit(int arr[], int size)
{
    int profit = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += (arr[i] - arr[i - 1]);
        }
    }
    return profit;
}

int main()
{
    int size;
    system("CLS");
    cout << "Enter size: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) // 5 2 6 1 4 7 3 6
    {
        cin >> arr[i];
    }

    cout << maxProfit(arr, size);

    return 0;
}
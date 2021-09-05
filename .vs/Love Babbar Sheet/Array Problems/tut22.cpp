#include <bits/stdc++.h>
using namespace std;

// Equilibrium index of an array -->

void equilibriumIndex(int arr[], int size)
{
    int sum = 0, leftSum = 0, rightSum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    rightSum = sum;

    for (int i = 0; i < size; i++)
    {
        rightSum -= arr[i];
        if (leftSum == rightSum)
        {
            cout << "Equilibrium index found at: " << i << endl;
            break;
        }
        leftSum += arr[i];
    }
    cout << "No equilibrium index found" << endl;
}

int main()
{
    int size;
    system("CLS");
    cout << "Enter size: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) // 3 1 6 -5 4 3 2
    {
        cin >> arr[i];
    }

    equilibriumIndex(arr, size);

    return 0;
}
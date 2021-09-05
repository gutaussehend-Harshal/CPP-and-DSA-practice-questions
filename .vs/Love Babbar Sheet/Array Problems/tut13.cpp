#include <bits/stdc++.h>
using namespace std;

// Write a program to cyclically rotate an array by one -->

void rotate(int arr[], int size)
{
    int x = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
}

int main()
{
    int size;
    system("CLS");
    cout << "Enter a size: "; // 1 2 3 4 5 --> 5 1 2 3 4
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    rotate(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
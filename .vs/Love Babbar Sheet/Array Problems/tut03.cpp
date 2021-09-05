#include <bits/stdc++.h>
using namespace std;

// Find the "Kth" max and min element of an array --> 5 8 12 7 6 2 4 10 21 33

int main()
{
    int size;
    system("CLS");
    cout << "Enter a size: ";
    cin >> size;
    int arr[size];
    int k = 4;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Kth largest element in array is: ";
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }

        if (i == k - 1)
        {
            cout << arr[i] << endl;
            break;
        }
        else
        {
            cout << "You have entered wrong pos";
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Kth smallest element in array is: ";
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }

        if (i == k - 1)
        {
            cout << arr[i] << endl;
            break;
        }
        else
        {
            cout << "You have entered wrong pos";
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
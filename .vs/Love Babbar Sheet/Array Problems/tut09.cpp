#include <bits/stdc++.h>
using namespace std;

// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo -->

void sort(int arr[], int size)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    mid = 0;

    while (mid <= high)
    {
        // switch (arr[mid])
        // {
        // case 0:
        //     swap(arr[low], arr[mid]);
        //     low++, mid++;
        //     break;

        // case 1:
        //     mid++;
        //     break;

        // case 2:
        //     swap(arr[mid], arr[high]);
        //     high--;
        //     break;
        // }

        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++, mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else //if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    system("CLS");
    int size;
    cout << "Enter a size: ";
    cin >> size;
    int arr[size]; // 0 2 1 2 0
    // size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, size);
    display(arr, size);

    return 0;
}
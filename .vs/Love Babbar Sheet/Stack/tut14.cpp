#include <bits/stdc++.h>
using namespace std;

// Next greater element by brute force-->

void nextGreaterElement(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int next = -1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << " " << next << endl;
    }
}

int main()
{
    int size;
    system("CLS");
    cout << "Enter a size of array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    nextGreaterElement(arr, size);
    return 0;
}
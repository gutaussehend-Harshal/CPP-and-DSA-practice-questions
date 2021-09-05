#include <iostream>
using namespace std;

// Write a C++ program to find the largest and smallest element of an array.

int main()
{
    int size;
    cout << "Enter the size: " << endl;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Largest element is: " << max << endl;
    cout << "Smallest element is: " << min << endl;

    return 0;
}
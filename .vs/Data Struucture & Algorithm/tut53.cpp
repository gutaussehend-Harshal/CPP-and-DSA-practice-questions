#include <iostream>
using namespace std;

// Write a C++ program to reverse the element of an integer 1-D array.

int main()
{
    int size;
    cout << "Enter a size: " << endl;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int i, j, temp;
    for (i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Insert an element into an array --> 10 20 30 40 50

int main()
{
    int size;
    system("CLS");
    cout << "Enter a size: ";
    cin >> size;
    int arr[size];
    int pos = 3;
    int element = 100;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    size++;
    for (int i = size - 1; i > pos - 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;
    // arr[0] = 200;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

// Write a C++ program to swap first and last element of an integer 1-d array.

int main () {
    int size;
    cout << "Enter a size: " << endl;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int temp;
        temp = arr[0];
        arr[0] = arr[size - 1];
        arr[size - 1] = temp;
    
    cout << "Array after swaping: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
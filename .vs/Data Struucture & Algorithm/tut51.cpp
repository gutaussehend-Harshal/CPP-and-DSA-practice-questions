#include <iostream>
using namespace std;

// Write a C++ program to find the sum and average of one dimensional integer array.

int main () {
    int size, sum = 0;
    cout << "Enter a size: " << endl;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size ; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    cout << "The sum of array is: " << sum << endl;
    cout << "The avg of array is: " << (sum/size) << endl;
    
    return 0;
}
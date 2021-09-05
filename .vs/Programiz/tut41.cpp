#include <iostream>
using namespace std;

// Example: Calculate Average of Numbers Using Arrays

int main()
{
    int size, avg;
    int sum = 0;
    
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of an array numbers: " << sum << endl;

    avg = (sum / size);
    cout << "The avg of an array numbers: " << avg << endl;

    return 0;
}
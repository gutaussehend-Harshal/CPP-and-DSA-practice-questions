#include <iostream>
using namespace std;

// Example: Display Largest Element of an array

int main()
{
    int size, i;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    int arr[size];

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < size; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    cout << "Largest element: " << arr[0] << endl;
    

    return 0;
}
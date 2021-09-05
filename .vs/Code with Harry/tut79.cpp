#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size: " << endl;
    cin >> size;
    int arr[size];
    int i;

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max1 = arr[0];
    int max2 = arr[1];

    for (i = 0; i < size; i++)
    {
        if (max1 < arr[i])
        {
            max1 = arr[i]; 
        }

        if (max2 < max1 && max2 < arr[i]) 
        {
            max2 = arr[i];
        }
    }
    cout << max1 << endl;
    cout << max2 << endl;

    return 0;
}
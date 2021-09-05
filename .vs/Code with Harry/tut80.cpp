#include <iostream>
using namespace std;

int main()
{

    int i;
    int size;
    cout << "Size: ";
    cin >> size;
    int arr[size];

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for (i = 0; i < size; i++) 
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    
    cout << max;

    return 0;
}
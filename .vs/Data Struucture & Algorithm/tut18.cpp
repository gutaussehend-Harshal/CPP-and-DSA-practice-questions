#include <iostream>
using namespace std;

// Selection sort --->

int main () {
    int size;
    cout << "Enter the size: " << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    

    for (int i = 0; i < size - 1; i++)
    {
        int indexOfSmallest = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[indexOfSmallest])
            {
                indexOfSmallest = j;
            }
            
        }
        int temp = arr[i];
        arr[i] = arr[indexOfSmallest];
        arr[indexOfSmallest] = temp;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
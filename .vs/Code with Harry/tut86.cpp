#include <iostream>
using namespace std;

void display(int arr[], int size) { 

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "\t"; 
        } 
        cout << endl;
}

int main()
{
    int size;
    int max;
    cout << "Size: " << endl;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }   
    display(arr, size);

    cout << "max1 " << arr[0] << endl;
    cout << "max2 " << arr[1] << endl;
    cout << "max3 " << arr[2] << endl;
    cout << "max4 " << arr[3] << endl;
    cout << "max5 " << arr[4] << endl;
    
    return 0;
}
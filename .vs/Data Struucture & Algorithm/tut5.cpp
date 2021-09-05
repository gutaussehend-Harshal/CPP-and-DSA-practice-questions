#include <iostream>
using namespace std;

int main () {
    int size;
    cout << "Enter the size ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    cout << max << endl; 
    
    
    return 0;
}
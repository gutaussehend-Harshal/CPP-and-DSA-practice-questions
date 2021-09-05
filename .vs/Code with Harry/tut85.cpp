#include <iostream>
using namespace std;

int main () {
    int size;
    int arr[size] = {55,99,77,105,65};
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max > arr[i])
        {
            max = arr[i];
        }
        
    }
        cout << max << endl; 
    
    return 0;
}
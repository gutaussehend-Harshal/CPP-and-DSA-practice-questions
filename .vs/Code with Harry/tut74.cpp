#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main () {
    // Function objects (Functor): Function wrapped in a class so that it like 
    // an object.
    int arr[] = {1, 73, 4, 2, 54, 16}; 
    // sort(arr, arr+6); 
    sort(arr, arr+6, greater<int>());

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    

    return 0;
}
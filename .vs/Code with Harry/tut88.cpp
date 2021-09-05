#include <iostream>
using namespace std;

void swap(int* x, int* y, int*z) {
    int temp = *x;
    *x = *y;  
    *y = *z;
    *z = temp;
}

void swap1(int &x, int &y, int &z) {
    int temp = x; 
    x = y;
    y = z;  
    z = temp; 
}

int main () {
    int size;
    int arr[5] = {10,20,30,40,50};

    // swap(arr[0], arr[1]); 
    // cout << arr[0] << " " << arr[1] << endl; 

    swap1(arr[0], arr[1], arr[2]); 
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl; 

    return 0;
}
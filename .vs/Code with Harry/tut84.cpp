#include <iostream>
using namespace std;

int main () {
    int size;
    int arr[size] = {10,20,30,40,50}; 
    int sum = 0; 

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    

    return 0;
}
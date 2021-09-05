#include <iostream>
using namespace std;

int main () {
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    int ans[size];
    int start = 0;
    int end = size-1;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] < 0) {
            ans[start] = arr[i];
            start++;  
        } else {
            ans[end] = arr[i];
            end--;   
        }

    }

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] <<" ";
    }
    
    return 0;
}
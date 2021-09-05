#include <iostream>
using namespace std;

int main () {
    // int size;
    // cin >> size;
    int arr1[4] = {5,4,6,10};
    int arr2[4] = {8,9,10,20};

    int m = (sizeof(arr1)/sizeof(arr1[0]));
    int n = (sizeof(arr2)/sizeof(arr2[0]));

    cout << m << endl;
    cout << n << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr1[i];
    //     cin >> arr2[i];
    // }

    // for (int i = 0; i < 4; i++) 
    // {
    //     cout << arr1[i] << " ";
    //     cout << arr2[i] << " "; 
    // }
    // cout << endl;


    // int ans[4];
    // for (int i = 4 - 1; i >= 0; i--)
    // {
    //     ans[i] = arr1[i] + arr2 [i]; 
    //     cout << ans[i] << " "; 
    // }
    

    return 0;
}
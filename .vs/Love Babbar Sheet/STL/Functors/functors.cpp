// A C++ program uses transform() in STL to add
// 1 to all elements of arr[]
#include <bits/stdc++.h>
using namespace std;

int increment(int x) { return (x + 1); }

int main()
{
    system("CLS");
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Apply increment to all elements of
    // arr[] and store the modified elements
    // back in arr[]
    transform(arr, arr + n, arr, increment);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int res[m];

    for (int i = 0; i < m; i++)
    {
        res[i] = arr1[i] + arr2[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    
    

    // Single line code to add arr1[] and arr2[] and
    // store result in res[]
    transform(arr1, arr1 + m, arr2, res, plus<int>());

    for (int i = 0; i < m; i++)
        cout << res[i] << " ";

    return 0;
}

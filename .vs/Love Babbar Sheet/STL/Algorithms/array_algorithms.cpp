// Array algorithms in C++ STL (all_of, any_of, none_of, copy_n and iota)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    int arr[] = {1, 2, 3, 4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Checking if all elements are positive
    if (all_of(arr, arr + size, [](int x)
               { return x > 0; }))
    {
        cout << "All are positive elements" << endl;
    }
    else
    {
        cout << "All are not positive elements" << endl;
    }

    /*                 -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-                   */

    // Checking if any element is negative
    if (any_of(arr, arr + size, [](int x)
               { return x < 0; }))
    {
        cout << "There exists a negative element" << endl;
    }
    else
    {
        cout << "All are positive elements" << endl;
    }

    /*                 -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-                   */

    // Checking if no element is negative
    if (none_of(arr, arr + size, [](int x)
                { return x < 0; }))
    {
        cout << "No negative elements" << endl;
    }
    else
    {
        cout << "There are negative elements" << endl;
    }

    /*                 -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-                   */

    // Declaring second array
    int arr1[6];

    // Using copy_n() to copy contents
    copy_n(arr, 6, arr1);

    // Displaying the copied array
    cout << "The new array after copying is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    /*                 -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-                   */

    int arr2[6] = {0};

    // Using iota() to assign values
    iota(arr2, arr + 6, 30);

    cout << "The new array after assigning values is : ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
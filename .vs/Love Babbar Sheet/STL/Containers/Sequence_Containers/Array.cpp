#include <bits/stdc++.h>
#include <array>
using namespace std;

// What is Array Decay?
/* The loss of type and dimensions of an array is known as decay of an array.
This generally occurs when we pass the array into function by value or pointer. 
What it does is, it sends first address to the array which is a pointer, 
hence the size of array is not the original one, but the one occupied by the pointer in the memory.*/

int main()
{
    system("CLS");
    // Initializing the array elements
    array<int, 6> ar = {1, 2, 3, 4, 5, 6};

    // Printing array elements using at()
    cout << "The array elements are (using at()) : ";
    for (int i = 0; i < 6; i++)
        cout << ar.at(i) << " ";
    cout << endl;

    // Printing array elements using get()
    cout << "The array elements are (using get()) : ";
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << get<2>(ar) << " " << get<3>(ar) << " ";
    cout << get<4>(ar) << " " << get<5>(ar) << " " << get<6>(ar);
    cout << endl;

    // Printing array elements using operator[]
    cout << "The array elements are (using operator[]) : ";
    for (int i = 0; i < 6; i++)
        cout << ar[i] << " ";
    cout << endl;

    // Printing first element of array
    cout << "First element of array is : ";
    cout << ar.front() << endl;

    // Printing last element of array
    cout << "Last element of array is : ";
    cout << ar.back() << endl;

    // Printing number of array elements
    cout << "The number of array elements is : ";
    cout << ar.size() << endl;

    // Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : ";
    cout << ar.max_size() << endl;

    // Initializing 1st array
    array<int, 6> ar1 = {1, 2, 3, 4, 5, 6};

    // Initializing 2nd array
    array<int, 6> ar2 = {7, 8, 9, 10, 11, 12};

    // Printing 1st and 2nd array before swapping
    cout << "The first array elements before swapping are : ";
    for (int i = 0; i < 6; i++)
        cout << ar1[i] << " ";
    cout << endl;
    cout << "The second array elements before swapping are : ";
    for (int i = 0; i < 6; i++)
        cout << ar2[i] << " ";
    cout << endl;

    // Swapping ar1 values with ar
    ar1.swap(ar2);

    // Printing 1st and 2nd array after swapping
    cout << "The first array elements after swapping are : ";
    for (int i = 0; i < 6; i++)
        cout << ar1[i] << " ";
    cout << endl;
    cout << "The second array elements after swapping are : ";
    for (int i = 0; i < 6; i++)
        cout << ar2[i] << " ";
    cout << endl;

    // Declaring 1st array
    array<int, 6> arr1;

    // Declaring 2nd array
    array<int, 0> arr2;

    // Checking size of array if it is empty
    arr2.empty() ? cout << "Array empty" : cout << "Array not empty";
    cout << endl;

    // Filling array with 0
    arr1.fill(0);

    // Displaying array after filling
    cout << "Array after filling operation is : ";
    for (int i = 0; i < 6; i++)
        cout << arr1[i] << " ";
    return 0;
}
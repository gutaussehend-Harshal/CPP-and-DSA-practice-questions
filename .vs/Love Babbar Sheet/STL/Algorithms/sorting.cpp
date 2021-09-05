// STL has four components -->
// 1. Algorithms
// 2. Containers
// 3. Functions
// 4. Iterators

// Sorting -->
/* This function internally uses IntroSort.
In more details it is implemented using hybrid of QuickSort, HeapSort and InsertionSort. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("CLS");
    int a[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int size = sizeof(a) / sizeof(a[0]);

    cout << "The array before sorting: " << endl;
    for (auto i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    // Sort the array
    sort(a, a + size);

    cout << "\nThe array after sorting: " << endl;
    for (auto i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
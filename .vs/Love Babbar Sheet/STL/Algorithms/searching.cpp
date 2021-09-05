#include <bits/stdc++.h>
using namespace std;

// Binary search -->

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

    if (binary_search(a, a + size, 9))
    {
        cout << "\nElement found in the array" << endl;
    }
    else
    {
        cout << "\nElement not found in the array" << endl;
    }

    return 0;
}
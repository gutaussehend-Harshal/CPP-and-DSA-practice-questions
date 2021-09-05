#include <bits/stdc++.h>
using namespace std;
#define n 5

void printArray(int (&arr)[n])
{
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        v.push_back(arr[i]);
    }

    vector<int>::iterator ptr;
    for (ptr = v.begin(); ptr != v.end(); ptr++)
    {
        cout << *ptr << " ";
    }
    cout << endl;

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
}

int main()
{
    int arr[n] = {1, 2, 3, 4, 5};

    printArray(arr);
    return 0;
}

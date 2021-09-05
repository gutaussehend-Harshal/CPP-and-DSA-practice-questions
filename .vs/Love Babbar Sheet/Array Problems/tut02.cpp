#include <bits/stdc++.h>
using namespace std;

// Find the maximum and minimum element in an array -->

int main()
{
    int size;
    system("CLS");
    cout << "Enter a size" << endl;
    cin >> size;
    int arr[size];

    int i;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The maximum and minimum elements in array are: " << max << " & " << min << endl;
    return 0;
}
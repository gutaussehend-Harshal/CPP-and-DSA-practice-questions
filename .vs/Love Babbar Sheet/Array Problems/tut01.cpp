#include <bits/stdc++.h>
using namespace std;

// Reverse the array -->

// void swap(int &arr[size])
// {
//     for (int i = 0; i < size; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[size - 1 - i];
//         arr[size - 1 - i] = temp;
//     }
// }

int main()
{
    int size;
    system("CLS");
    cout << "Enter a size: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // for (int i = size - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - 1 - i]);
        // temp = arr[i];
        // arr[i] = arr[size - 1 - i];
        // arr[size - 1 - i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
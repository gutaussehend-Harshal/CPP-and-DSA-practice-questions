#include <bits/stdc++.h>
using namespace std;

// Given an array which consists of only 0, 1 and 2. Sort the array using any sorting algo -->

int main()
{
    system("CLS");
    int size;
    cout << "Enter a size: ";
    cin >> size;
    int arr[size]; // 0 2 1 2 0
    // size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int size;
//     system("CLS");
//     cout << "Enter a size: ";
//     cin >> size;
//     int arr[size];

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Kth largest element in array is: ";
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
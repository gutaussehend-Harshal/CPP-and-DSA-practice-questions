#include <bits/stdc++.h>
using namespace std;

// Delete an element from an array -->

int main()
{
    int size;
    system("CLS");
    cout << "Enter a size: "; // 10 40 30 80 60 20
    cin >> size;
    int arr[size];
    int index = 4;
    // int delete_element = 80;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // int count = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == delete_element)
    //     {
    //         for (int j = i; j < size - 1; j++)
    //         {
    //             arr[j] = arr[j + 1];
    //         }
    //         count++;
    //         break;
    //     }
    // }

    // if (count == 0)
    // {
    //     cout << "Element not found" << endl;
    // }
    // else
    // {
    //     cout << "Element deleted successfully" << endl;
    //     for (int i = 0; i < size - 1; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
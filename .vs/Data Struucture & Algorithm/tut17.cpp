#include <iostream>
using namespace std;

// bool searchValue(int a[], int value, int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         if (value == a[i])
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
// }

bool lsearch(int Arr[], int s, int VAL)
{
    for (int I = 0; I < s; I++)
    {
        if (Arr[I] == VAL)
            return true;
    }
    return false;
}

int main()
{
    int size, value;
    cout << "Enter the size: " << endl;
    cin >> size;

    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the value which is to be searched: " << endl;
    cin >> value;

    // cout << "The result is: "  << searchValue(a,value,size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << i << endl;
    //     if (a[i] == value)
    //     {
    //         cout << "1" << endl;
    //         return 1;
    //     }
    //     else
    //     {
    //         cout << "0" << endl;
    //         return 0;
    //     }
    // }

    for (int I = 0; I < size; I++)
    {
        if (a[I] == value)
            return true;
    }
    return false;

    return 0;
}
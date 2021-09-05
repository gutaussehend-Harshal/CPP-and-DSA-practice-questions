#include <iostream>
using namespace std;

int main()
{
    int size, temp, j, i;
    cout << "Enter the size: " << endl;
    cin >> size;

    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    // Insertion sort -->
    // for (i = 1; i < size; i++)
    // {
    //     temp = a[i];
    //     j = i - 1;

    //     while (j >= 0 && temp < a[j])
    //     {
    //         a[j + 1] = a[j];
    //         j--;
    //     }

    //     a[j + 1] = temp;
    // }

    // Selection sort -->
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             int temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }

    //     }

    // }

    // Bubble sort -->
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
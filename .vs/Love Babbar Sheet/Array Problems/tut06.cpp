#include <bits/stdc++.h>
using namespace std;

// Merging of two arrays -->

int main()
{
    system("CLS");
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10, 11, 12, 16};
    int s1 = sizeof(arr1) / sizeof(int);
    int s2 = sizeof(arr2) / sizeof(int);
    int k = s1 + s2;
    int arr3[k];

    int i = 0, j = 0, k = 0;
    while (i < s1 && j < s2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++, i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++, j++;
        }
    }

    while (i < s1)
    {
        arr3[k] = arr1[i];
        k++, i++;
    }

    while (j < s2)
    {
        arr3[k] = arr2[j];
        k++, j++;
    }

    for (int i = 0; i < k; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}
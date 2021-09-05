#include <bits/stdc++.h>
using namespace std;

// Find the Union and Intersection of the two sorted arrays -->
void printUnion(int arr1[], int arr2[], int m, int n);

int main()
{
    int m, n;
    system("CLS");
    cout << "Enter sizes of array: ";
    cin >> m >> n;
    int arr1[m], arr2[n];

    for (int i = 0; i < m; i++)  // 1 2 4 5 6 
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)  // 2 3 5 7 
    {
        cin >> arr2[i];
    }

    printUnion(arr1, arr2, m, n);

    return 0;
}

void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i++] << " ";
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j++] << " ";
        }
        else
        {
            cout << arr1[i++] << " ";
            // cout << arr2[j++] << " ";
            // i++;
            j++;
        }
    }

    while (i < m)
    {
        cout << arr1[i++] << " ";
    }

    while (j < n)
    {
        cout << arr2[j++] << " ";
    }
}
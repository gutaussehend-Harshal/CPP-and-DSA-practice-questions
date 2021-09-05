#include <bits/stdc++.h>
using namespace std;

// Selection Sort -->

void selectionSort(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int minIndex(int *arr, int i, int j)
{
    if (i == j)
    {
        return i;
    }
    int k = minIndex(arr, i + 1, j);
    if (arr[i] < arr[k])
    {
        return i;
    }
    else
    {
        return k;
    }
}

void selectionSortRecursive(int *arr, int n, int index = 0)
{
    if (index == n)
    {
        return;
    }
    int k = minIndex(arr, index, n - 1);
    if (k != index)
    {
        swap(arr[k], arr[index]);
    }
    selectionSortRecursive(arr, n, index + 1);
}

int main()
{
    int n;
    system("CLS");
    cout << "Enter a size: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSortRecursive(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
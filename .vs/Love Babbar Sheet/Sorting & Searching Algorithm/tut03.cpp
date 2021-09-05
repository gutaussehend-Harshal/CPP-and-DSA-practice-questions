#include <bits/stdc++.h>
using namespace std;

// Insertion Sort -->

void insertionSort(int *arr, int n)
{
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void insertionSortRecursive(int *arr, int n)
{
    if (n <= 1)
    {
        return;
    }
    insertionSortRecursive(arr, n - 1);
    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

int main()
{
    int n;
    system("CLS");
    cout << "Enter a size: "; // 5 4 10 1 6 2
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSortRecursive(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
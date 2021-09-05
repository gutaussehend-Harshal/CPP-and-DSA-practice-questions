#include <bits/stdc++.h>
using namespace std;

// QuickSort -->

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int *arr, int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(arr, low, high);
        quickSort(arr, low, j);
        quickSort(arr, j + 1, high);
    }
}

int main()
{
    int n;
    system("CLS");
    cout << "Enter a size: "; // 6 5 8 9 3 10 15 12 16
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;

    quickSort(arr, low, high);
    printArray(arr, n);
    return 0;
}
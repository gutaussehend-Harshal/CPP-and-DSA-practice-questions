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
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    } while (i < j);

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int *arr, int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(arr, low, high);
        quickSort(arr, low, j - 1);
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
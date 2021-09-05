#include <bits/stdc++.h>
using namespace std;
int B[100];

// MergeSort -->

void merge(int *A, int low, int mid, int high)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }

    while (i <= mid)
    {
        B[k++] = A[i++];
    }

    while (j <= high)
    {
        B[k++] = A[j++];
    }

    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int *A, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    int n;
    system("CLS");
    cout << "Enter a size: ";       // 12 11 13 5 6 7 
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int low = 0;
    int high = n - 1;

    mergeSort(A, low, high);

    printArray(A, n);

    return 0;
}
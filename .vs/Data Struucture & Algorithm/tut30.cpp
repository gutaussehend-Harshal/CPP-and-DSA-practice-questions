#include <iostream>
using namespace std;

// Inserion sort--->

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void insertionSort(int A[], int n)
{   
    int key, j;
    for (int i = 0; i <= n - 1; i++)
    {
        key = A[i];
        j = i - 1;

        while (j >=0 && A[j] > key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
    
}
int main()
{
    int A[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int n = sizeof(A) / sizeof(int);

    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);

    return 0;
}
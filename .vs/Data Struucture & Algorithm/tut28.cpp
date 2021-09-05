#include <iostream>
using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int A[], int n)
{   
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For no of pass
    {   
        cout << "Working on pass number " << i + 1 << endl;
        int isSorted = 1;
        for (int j = 0; j < n - i - 1; j++) // Comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
        
    }
}
int main()
{
    // int A[] = {12, 54, 65, 7, 23, 9};
    int A[] = {7, 9, 12, 23, 54, 65};
    int n = sizeof(A) / sizeof(int);

    printArray(A, n);
    bubbleSort(A, n);
    printArray(A, n);

    return 0;
}
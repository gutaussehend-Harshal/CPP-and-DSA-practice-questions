#include <iostream>
using namespace std;

/* Write a menu driven C++ program with following option
a. Accept elements of an array
b. Display elements of an array
c. Sort the array using insertion sort method
d. Sort the array using selection sort method
e. Sort the array using bubble sort method
Write C++ functions for all options. The functions should have two parameters name of the array and number of elements in the array. */

void inputArrayElement(int arr[], int size)
{
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int isSorted = 1;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

void insertionSort(int A[], int size)
{
    int key, j;
    for (int i = 0; i <= size - 1; i++)
    {
        key = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

void selectionSort(int arr[], int size)
{
    int indexofMin, temp;
    for (int i = 0; i < size - 1; i++)
    {
        indexofMin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[indexofMin])
            {
                indexofMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexofMin];
        arr[indexofMin] = temp;
    }
}

int main()
{

    int size;
    cout << "Enter size: " << endl;
    cin >> size;
    int arr[size];

    inputArrayElement(arr, size);
    bubbleSort(arr, size);
    insertionSort(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);

    return 0;
}
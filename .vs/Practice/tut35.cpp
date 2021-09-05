#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int size)
{
    int key, j, i;
    for (i = 1; i <= size - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int size)
{
    int indexOfMin;
    for (int i = 0; i < size - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < indexOfMin)
            {
                indexOfMin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

int main()
{
    int size;
    cout << "Enter size: " << endl;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    display(arr,size);
    bubbleSort(arr,size);
    insertionSort(arr,size);
    selectionSort(arr,size);
    display(arr,size);

    
    return 0;
}
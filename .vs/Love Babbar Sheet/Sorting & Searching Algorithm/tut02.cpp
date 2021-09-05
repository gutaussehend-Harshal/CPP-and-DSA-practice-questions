#include <bits/stdc++.h>
using namespace std;

// Bubble Sort -->

void bubbleSort(int *arr, int n)
{
    int temp;
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        cout << "Number of pass: " << i << endl;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

void bubbleSortUsingRecursion(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSortUsingRecursion(arr, n-1);
}

int main()
{
    int n;
    system("CLS");
    cout << "Enter a size: "; // 7 11 9 2 17 4  // 2 3 4 6 10 11 15 18
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSortUsingRecursion(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
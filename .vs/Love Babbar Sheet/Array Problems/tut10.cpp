#include <bits/stdc++.h>
using namespace std;

// Move all the negative elements to one side of the array -->

void insertElements(int arr[], int size);
void rearrange(int arr[], int size);
void display(int arr[], int size);

int main()
{
    int size;
    system("CLS");
    cout << "Enter a size: "; // Input: { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    cin >> size;
    int arr[size];

    insertElements(arr, size);
    rearrange(arr, size);
    display(arr, size);

    return 0;
}

void insertElements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}

void rearrange(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
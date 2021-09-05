#include <iostream>
using namespace std;

int main()
{
    int size, target;
    cout << "Enter the size: " << endl;
    cin >> size;
    cout << "Enter the target value: " << endl;
    cin >> target;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "[" << i << ", " << j << "]" << endl;
            }
        }
    }

    return 0;
}
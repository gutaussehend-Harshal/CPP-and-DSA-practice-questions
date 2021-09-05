#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; i < n; i++)
        {
            if (arr[i] + arr[j] == 9)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

    return 0;
}
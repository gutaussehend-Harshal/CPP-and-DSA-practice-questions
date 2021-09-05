#include <iostream>
using namespace std;
// Three sum --->

int main()
{
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    /* cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] << endl; */

                    int low = k;
                    int high = n - 2;
                    int c = 0 - arr[i] - arr[j];

                    while (low <= high)
                    {
                        int mid = (low + high) / 2;
                        if (arr[mid] == c)
                        {
                            cout << "pair : " << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                            break;
                        }
                        else if (arr[mid] < c)
                        {
                            low = mid + 1;
                        }
                        else
                        {
                            high = mid - 1;
                        }
                        cout << " k : " << k << endl;
                    }
                }
            }
        }
    }

    return 0;
}
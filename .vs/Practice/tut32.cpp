#include <iostream>
using namespace std;
// Two sum --->

int main()
{
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] + arr[j] == 0)
            {
                /* cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] << endl; */

                int low = 0;
                int high = n - 2;
                int c = 0 - arr[i] - arr[j];

                while (low <= high)
                {
                    int mid = (low + high) / 2;
                    if (arr[mid] == c)
                    {
                        cout << "pair : " << arr[i] << " " << arr[j] << " " << endl;
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
                }
            }
        }
    }

    return 0;
}
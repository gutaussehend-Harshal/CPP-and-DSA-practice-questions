#include <iostream>
using namespace std;
//three sum

int main()
{
    int a[6] = {-4,-3,0,3,4,5};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {

        for (int j = i + 1; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                if (a[i] + a[j] + a[k] == 0)
                {

                    int low = k;
                    int high = 4;
                    int c = 0 - a[i] - a[j];
                    while (low <= high)
                    {
                        int mid = (low + high) / 2;
                        if (a[mid] == c)
                        {
                            cout << "pair : " << a[i] << " " << a[j] << " " << a[k] << endl;
                            break;
                        }
                        else if (a[mid] < c)
                        {
                            low = mid + 1;
                        }
                        else
                        {
                            high = mid - 1;
                        }
                        cout<<" k : "<<k<<endl;
                    }
                }
            }
        }
    }

    return 0;
}
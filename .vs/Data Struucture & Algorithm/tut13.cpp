#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "size: " << endl;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                for (int i = 0; i < size; i++)
                {
                    cout << a[i] << " ";                
                }
                cout << endl;
            }
        }
    }

    // for (int i = 0; i < size; i++)
    // {

    //     cout << a[i] <<" ";
    // }
    cout << "Largest element: " << a[0] << endl;
    cout << "Smallest element: " << a[size - 1] << endl;

    return 0;
}
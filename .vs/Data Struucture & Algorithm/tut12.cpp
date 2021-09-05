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

    int l = size;
    for (int i = 0; i < size/2; i++)
    {
        int temp = a[i];
        a[i] = a[l - 1];
        a[l - 1] = temp;
        l--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}
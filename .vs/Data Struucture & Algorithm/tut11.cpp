#include <iostream>
using namespace std;

int main () {
    int size;
    cout << "size: " << endl;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int l = size;

        int temp = a[0];
        a[0] = a[l-1]; 
        a[l-1] = temp;
    

    
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}
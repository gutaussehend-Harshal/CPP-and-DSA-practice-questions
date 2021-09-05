#include <iostream>
using namespace std;

int main () {
    int size;
    int sum = 0;
    cout << "Size : " << endl;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;

    cout << sum/size << endl;
    

    
    return 0;
}
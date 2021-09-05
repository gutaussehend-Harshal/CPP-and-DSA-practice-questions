#include <bits/stdc++.h>
using namespace std;
// #define n 5

int main()
{
    int n;
    system("CLS");
    cout << "Enter a size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }    

    return 0;
}
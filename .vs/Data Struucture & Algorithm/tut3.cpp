#include <iostream>
using namespace std;

int main () {
    int count = 0;
    int m,n;             // (size m & n)
    cin >> m; 
    cin >> n;

    int arr1[m];
    int arr2[n];

    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
        
    }

    for (int i = 0; i < n; i++)
    {   
        cin >> arr2[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

//    for (int i = 0; i < m; i++)
//    {
//        count++;
//    }
//    cout << count << endl;

//    for (int i = 0; i < n; i++)
//    {
//        count++;
//    }
//    cout << count << endl;
    
    int ans[m];
    for (int i = 0; i < count; i++)
    {
        
    }
    
    return 0;
}
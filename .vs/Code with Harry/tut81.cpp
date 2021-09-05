#include <iostream>
using namespace std;

int main()
{

    int i;
    int size;
    cout << "Size: ";
    cin >> size;
    int arr[size];

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int max2 = 0;
    int m1;
    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            m1 = i;
        }
        
    }
    
    cout <<"first max: " << max << endl;  
    arr[m1] = 0;
     for (i = 0; i < size; i++)
    {
        if (max2 < arr[i])
        {
            max2 = arr[i];
        }
        
    } 
    cout << "Second max: " << max2;
    return 0;
}
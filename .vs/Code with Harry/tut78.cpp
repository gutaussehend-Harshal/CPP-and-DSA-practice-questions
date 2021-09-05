#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[] = {2, 5, 10, 88, 7}; 

    for (int i = 0; i < 5; i++)
    {
        if ((arr[i] % 2) == 0)
        {
            cout << "Number is even" << endl;
        }
        else
        {
            cout << "Number is odd" << endl;
        }
    }
    return 0; 
}
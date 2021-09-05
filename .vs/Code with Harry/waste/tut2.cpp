#include <iostream>
using namespace std;

int main()
{
    int total = 0;
    int number;
    cout << "Enter the number " << endl;
    cin >> number;

    for (int i = 0; i <= number; i++)
    {
        
        if (i % 2 == 0) 
        {
            // cout << i << endl;
            total += i;
        }
    }

    cout << "total: " << total << endl; 

    return 0;
}
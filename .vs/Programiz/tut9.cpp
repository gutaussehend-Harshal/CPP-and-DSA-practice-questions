#include <iostream>
using namespace std; 

// Calculate number is even or odd -->

int main()
{
    int num;
    cout << "Enter the integer: " << endl;
    cin >> num;
    int remainder = num % 2;

    if (remainder == 0)
    {
        cout << num << " is even number." << endl;
    }
    else
    {
        cout << num << " is odd number." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main () {
    int number;
    cout << "Enter the number who's table u wann write: " << endl;
    cin >> number;

    for (int i = 0; i <= 10; i++)
    {
        cout << number << " * " << i << " = " << number*i << endl; 
    }
    
    return 0;
}
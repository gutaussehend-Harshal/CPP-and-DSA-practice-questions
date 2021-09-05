#include <iostream>
using namespace std;

int main () {
    int total = 0;
    int number;
    cout << "Enter the number " << endl;
    cin >> number;

    for (int i = 0; i <= number; i++) 
    {
        total += i;

    }
    
    cout << "total: " << total << endl;

    return 0;
}
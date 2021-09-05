#include <iostream>
using namespace std;

int main () {
    
    int sum = 0, num;
    cout << "Enter a positive integer: " << endl;
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    
    cout << "The sum of natural numbers is: " << sum << endl;
    return 0;
}
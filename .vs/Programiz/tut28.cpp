#include <iostream>
using namespace std;

// Example: Display all Factors of a Number

int main () {
    
    int n;
    cout << "Enter a number: " << endl;
    cin >>n;

    cout << "The factors of " << n << " are: " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
        
    }
    
    return 0;
}
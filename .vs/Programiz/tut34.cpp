#include <iostream>
using namespace std;

int fib(int n) {
    if (n < 2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
    
}
int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    fib(n);
    cout << "Fibonacci of " << n << " is " << fib(n) << endl;
    
    return 0;
}
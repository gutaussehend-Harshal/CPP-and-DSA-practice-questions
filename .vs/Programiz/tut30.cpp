#include <iostream>
using namespace std;

void checkPrime(int n);

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    checkPrime(n);
    return 0;
}

void checkPrime(int n)
{
    bool isPrime = true;

    if (n == 1 || n == 0)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
}
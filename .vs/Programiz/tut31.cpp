#include <iostream>
using namespace std;

// Example: Prime Numbers Between two Intervals

void checkPrime(int low, int high);

int main()
{
    int low, high;
    cout << "Enter two numbers: " << endl;
    cin >> low >> high;
    cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

    checkPrime(low, high);
    return 0;
}

void checkPrime(int low, int high)
{
    bool isPrime = true;
    while (low < high)
    {
        isPrime = true;
        if (low == 0 || low == 1)
        {
            isPrime = false;
        }
        else
        {
            for (int i = 2; i <= low / 2; i++)
            {
                if (low % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            cout << low << " ";
        }
        low++;
    }
}
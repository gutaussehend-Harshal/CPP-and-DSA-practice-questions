#include <iostream>
using namespace std;

int calculateRemainder(int num1, int num2)
{
    int result = (num1 % num2);
    return result;
}

bool numberIsEven(int num1)
{
    if ((calculateRemainder(num1, 2)) == 0)
    {
        // cout << "The number is even" << endl;
        return true;
    }
    else
    {
        // cout << "The number is not even" << endl;
        return false;
    }
}

bool numberIsPrime(int num1)
{
    bool isPrime = true;

    if (num1 == 1 || num1 == 0)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= num1 / 2; i++)
        {
            if (num1 % i == 0)
                isPrime = false;
            break;
        }
    }
}

int main()
{ 

    int num1, num2;
    cout << "Enter an number: " << endl;
    cin >> num1 >> num2;
    cout << "The remainder is: " << calculateRemainder(num1, num2) << endl;
    cout << "For this 0 == false, 1 == true" << endl;
    cout << "The entered number is even: " << numberIsEven(num1) << endl;
    cout << "The entered number is prime: " << numberIsPrime(num1) << endl;

    return 0; 
} 
#include <iostream>
using namespace std;

// Example: Simple Calculator using switch statement

int main()
{
    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;

    default:
        cout << "Error! operator is not correct";
        break;
    }
    return 0;
}

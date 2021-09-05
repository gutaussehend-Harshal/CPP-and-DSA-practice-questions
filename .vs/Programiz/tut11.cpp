#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter the numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        cout << num1 << " is the largest number among three numbers" << endl;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << num2 << " is the largest number among three numbers" << endl;
    }
    else
    {
        cout << num3 << " is the largest number among three numbers" << endl;
    }

    return 0;
}
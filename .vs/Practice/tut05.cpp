#include <iostream>
using namespace std;

int main()
{
    float f;
    float result = (5 * (f - 32) / 9);

    cout << "Enter the temperature in Fahrenheit: " << endl;
    cin >> f;

    cout << "The temperature in degree is: " << result << endl;
    return 0;
}
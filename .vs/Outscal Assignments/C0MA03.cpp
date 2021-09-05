#include <iostream>
using namespace std;

int main () {
    int num1, num2;
    float num3, num4;  // Addition of two Float numbers (eg = 4.8 + 5.9) 
    cout << "Please enter the numbers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4; 
    int intSum = num1 + num2;
    float floatSum = num3 + num4;
    cout << "The sum of two integers is " << num1 << " & " << num2 << " is " << intSum << endl; 
    cout << "The sum of two float is " << num3 << " & " << num4 << " is " << floatSum << endl; 

    return 0; 
}
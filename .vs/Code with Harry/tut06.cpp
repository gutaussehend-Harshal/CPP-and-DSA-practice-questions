// There are two types of header files:
// 1. System header files: It comes with the compiler.
#include <iostream>
using namespace std;
// c++ standard library headers. --> This is a website for header files.

// 2. User defined header files: It is written by programmer.
// #include "this.h" // --> This will produce an error if this.h is no present in the current directory.

int main()
{
    int a = 4, b = 5;
    cout << "Operators in c++:" << endl;
    cout << "Following are the types of operators in c++" << endl;

    // Arithmetic operators -->
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a--  is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl << endl;
    // Assignment operators -->
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison operators -->
    cout << "The value of a == b is: " << (a == b) << endl;
    cout << "The value of a != b is: " << (a != b) << endl;
    cout << "The value of a > b is: " << (a > b) << endl;
    cout << "The value of a < b is: " << (a < b) << endl;
    cout << "The value of a >= b is: " << (a >= b) << endl;
    cout << "The value of a <= b is: " << (a <= b) << endl;
    cout << endl << endl;
    
    // Logical operators -->
    cout << "Following are the logical operators in c++ " << endl;
    cout << "The value of this logical operator ((a==b && a<b)) is: " << ((a == b && a < b)) << endl;
    cout << "The value of this logical operator ((a==b || a<b)) is: " << ((a == b || a < b)) << endl;
    cout << "The value of this logical operator (!(a==b)) is: " << (!(a == b)) << endl;

    return 0;
}
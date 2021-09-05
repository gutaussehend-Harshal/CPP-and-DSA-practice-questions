#include <iostream>
using namespace std;

int main()
{
    // int a = 34;
    // cout << "The value of a was: "<< a << endl;
    // a = 45;
    // cout << "The value of a is: "<< a << endl;

    // Constants in c++ -->

    // const int a = 3;
    // cout << "The value of a was: "<< a << endl;
    // a = 45; // You will get an error beacause a is a constant.
    // cout << "The value of a is: "<< a << endl;

    // int a = 3, b = 78, c = 1233;
    // cout << "The value of a without setw is: " << a << endl;
    // cout << "The value of b without setw is: " << b << endl;
    // cout << "The value of c without setw is: " << c << endl;

    // cout << "The value of a with setw is: " << setw(4) << a << endl; 
    // cout << "The value of b with setw is: " << setw(4) << b << endl; 
    // cout << "The value of c with setw is: " << setw(4) << c << endl;

    // Operator precedence:
    int a = 3, b = 4; 
    // int c =a*5+b;
    int c = ((((a*5)+b)-45)+87); 
    cout << c << endl;

    return 0;
}
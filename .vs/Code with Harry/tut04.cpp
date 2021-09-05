#include <iostream>
using namespace std;

int glo = 6;
void sum()
{
    cout << glo << endl;
    cout << "My name is Harshal" << endl;
}
int main()
{
    int glo = 9;
    glo = 78; // It follows precedence. (Local variable takes precedence over global variable.)
    // int a = 14;
    // int b = 15;
    // OR -->
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'u';
    bool is_true = true;
    sum();
    cout << "This is the tutorial 4. Here is the value of a is " << a << ". The value of b is " << b << endl;
    cout << "The value of pi is: " << pi << endl;
    cout << "The value of c is: " << c << endl;
    cout << "The value of global variable is: " << glo << " " << is_true << endl;
    return 0;
}
#include <iostream>
using namespace std;
int c = 45;

int main()
{
    int a, b, c;

    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is " << c << endl;
    cout << "The global c is " << ::c << endl;

    // ******** Float, Double & Long double literals *********//
    float d = 34.4F;
    long double e = 34.4L; // The result will be changed during function overloading.
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

    cout << "The value of d is: " << d << endl
         << "The value of e is " << e << endl;

    //*********** Reference variables ************//
    // Harshal --> Mayur --> Harshu == all are same.
    float x = 455;
    float &y = x;
    cout << x << endl;
    cout << y << endl;

    //*********** Typecasting *******//
    int m = 45;
    float n = 45.46;
    cout << "The value of m is: " << (float)m << endl;
    cout << "The value of m is: " << float(m) << endl;

    cout << "The value of n is: " << (int)n << endl;
    cout << "The value of n is: " << int(n) << endl;
    
    int o = int(n);
    cout << "The expression is " << m + n << endl;
    cout << "The expression is " << m + int(n) << endl;
    cout << "The expression is " << m + (int)n << endl;

    return 0;
}
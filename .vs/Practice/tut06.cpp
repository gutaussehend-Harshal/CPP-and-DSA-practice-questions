#include <iostream>
using namespace std;

int main()
{
    /* A = P (1 + rt)
    A	=	final amount
    P	=	initial principal balance
    r	=	annual interest rate
    t	=	time (in years)
    */

    float a, p, r, t;
    cout << "Enter all below values first: " << endl;
    cin >> p;
    cin >> r;
    cin >> t;

    a = p * (1 + r * t);
    cout << "The final amount is: " << a << endl;
    return 0;
}
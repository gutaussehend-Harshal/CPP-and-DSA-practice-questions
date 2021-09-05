#include <iostream>
using namespace std;

int main()
{
    float net = 5689.2556;
    cout.precision(2);
    cout.setf(ios::fixed | ios::showpoint);
    cout << net << endl;
}
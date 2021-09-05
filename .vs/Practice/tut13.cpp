#include <iostream>
using namespace std;

int main () {
    int a, b, c, greatest;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    greatest = (a > b && a > c) ? a : (b > c) ? b : c;

    cout << "The greatest number is: " << greatest << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;

    (a>0) ? cout << "Number is positive " : cout << "Number is negative " << endl;
    return 0;
}
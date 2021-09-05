#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;

    (a%2 == 0) ? cout << "Number is even " : cout << "Number is odd " << endl;
    return 0;
}
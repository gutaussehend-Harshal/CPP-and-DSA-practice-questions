#include <iostream>
using namespace std;

int main () {
    
    int a,b;
    cout << "Enter two values: " << endl;
    cin >> a >> b;
    
    int temp = a;
    a = b;
    b = temp;

    cout << a  << " " << b << endl;
    return 0;
}
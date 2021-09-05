#include <iostream>
using namespace std;

int main () {
    float r;
    const float pi = 3.14;
    
    cout << "Enter the value of r." << endl;
    cin >> r;
    float area = (pi*r*r);
    cout << "The area of circle is " << area << endl;

    return 0;
}
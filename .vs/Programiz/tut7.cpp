#include <iostream>
using namespace std;

// Example: Print ASCII Value in C++

int main () {
    
    char c;
    cout << "Enter a character: " << endl;
    cin >> c;
    cout << "The ASCII value of " << c << " is " << int(c) << endl;
    
    return 0;
}
#include <iostream>
using namespace std;

// Example: Length of String Object

int main() {
    string str;
    cout << "Enter the string: " << endl;
    getline(cin,str);

    // you can also use str.length()
    cout << "String Length = " << str.size() << endl;
    cout << "String Length = " << str.length() << endl;

    return 0;
}
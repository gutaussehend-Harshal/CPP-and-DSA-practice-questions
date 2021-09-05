#include <iostream>
using namespace std;

int main () {
    char ch;
    cout << "Enter character : " << endl;
    cin >> ch;
    ch++;
    cout << ch << endl;
    cout << static_cast<int>(ch) << endl;
    cout << static_cast<int>(ch) + 1 << endl;
    
    // cout << (int) ch + 1 << endl;
    
    return 0;
}
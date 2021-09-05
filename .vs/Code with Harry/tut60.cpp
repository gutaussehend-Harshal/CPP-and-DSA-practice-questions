#include <iostream>
#include <fstream>

using namespace std;

/* 
    The useful classes for working with files in c++ are:
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase
*/

// In order work with files in c++, you will have to open it.Primarily, there are two ways
// to oen the file:
//  1. Using the constructor
//  2. Using the member function open() of the class
 
int main () {
    string st = "Harshal bhai";
    string st2;
    // 1.Opening files using constructor & writing it.
    ofstream out("sample60.txt");  // Write operation
    out << st; 

    // 1.Opening files using constructor & reading it.
    // ifstream in("sample60b.txt");  // Read operation
    // in >> st2; 
    // getline(in, st2);
    // cout << st2; 


    return 0;
}
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main () {
    ofstream out;
    out.open("sample60.txt");
    out << "This is me" << endl;
    out << "Harshal" << endl; 
    out.close();

    ifstream in;
    string st1, st2, st; 
    in.open("sample60b.txt"); 
    // in >> st1 >> st2; 
    // getline(in, st); 
    // cout << st1 << " " << st2;

    while(in.eof() == 0) {
        getline(in, st);
        cout << st << endl;
    }
    in.close(); 

    return 0;
}
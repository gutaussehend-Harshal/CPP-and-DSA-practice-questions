#include <iostream>
#include <fstream> 
using namespace std;

int main () {
    // // Connecting our file with hout stream
    // ofstream hout("sample60.txt");

    // // Creating a name string & filling it with the string entered by the user
    // cout << "Enter your name " << endl;
    // string name;
    // cin >> name;

    // // Wring a string to the file
    // hout << "My name is " + name;  
    // hout.close(); 

    ifstream hin("sample60.txt");
    string content;
    //hin >> content; 
    getline(hin, content);
    cout << "The conntent of the file is: " << content << endl; 
    hin.close();
    
    return 0;
}
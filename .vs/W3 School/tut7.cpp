#include <iostream>
using namespace std;

int main () {
    string firstName = "Harshal";
    string lastName = "Patil";
    string fullName1 = firstName +" "+ lastName;
    cout << fullName1 << endl; 
   
    string fullName2 = firstName.append(lastName);   
    cout << fullName2 << endl;

    string x = "30";
    string y = "40"; 
    string sum = x + y;
    cout << "The result is: " << sum << endl;

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The lenghth of string alphabet is: " << alphabet.length() << endl; 
    cout << "The lenghth of string alphabet is: " << alphabet.size() << endl; 

    return 0; 
}
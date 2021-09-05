#include <iostream>
using namespace std;

int main () {
    string myString = "Harshal"; 
    cout << myString[0] << endl;
    cout << myString[1] << endl;
    cout << myString[2] << endl;
    cout << myString[3] << endl;
    cout << myString[4] << endl;
    cout << myString[5] << endl;
    cout << myString[6] << endl;

    string greeting = "Hello";
    greeting [0] = 'M';
    cout << greeting << endl; 

    // // string firstName;
    // string lastName;
    // cout << "Enter your first name: " << endl;
    // cin >> firstName;
    // cout << "Enter your last name: " << endl;
    // cin >> lastName;
    // cout << "Your full name is: " << firstName + " " +lastName << endl;

    // string fullName;
    //cout << "Enter your full name: "<< endl;
    //cin >> fullName;
    //cout << "Your full name is: " << fullName << endl; 

    string fullName;
    cout << "Enter your full name: "<< endl;
    getline (cin, fullName); 
    cout << "Your full name is: " << fullName << endl; 


    return 0;
}
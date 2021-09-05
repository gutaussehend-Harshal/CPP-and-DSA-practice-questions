#include <iostream>
#include <string>
using namespace std;

int main () {
    string username = "Harshal"; 
    int age;
    long long int phonenumber; 

    cout << "Hello \nWorld!!! \n"; 
    cout << "How are you today, " << username << "?\n";  
    cout << "I hope you are doing well, " << username << "!\n";  
    // cout << "Is your age " << age << " years correct?\n";   // Comment

    cout << username << " - can you enter your age & phonenumber?\n"; 
    cin >> age >> phonenumber; 
    cout << "Thank you " << username << " for letting us know you are " << age << " years old.\n";
    cout << "Thank you " << username << " for letting us know your phonenumber is " << phonenumber << "\n";

    return 0;
}
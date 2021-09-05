#include <iostream>
using namespace std;

void myFunction (string fName, int age){
    cout << fName << " reflnes is " << age <<" years old." << endl;
}
int main () {
    myFunction("Liam",3);
    myFunction("Jeny",14); 
    myFunction("Anja",30);
    return 0;
}
#include <iostream>
using namespace std;

// void myFunction(){
//     cout << "My name is Harshal" << endl; 

void myFunction(string fName){
    cout << fName <<"  refsnes" << endl;
}

int main () {
    myFunction("Liam"); 
    myFunction("Anja");
    myFunction("Jenny"); 
    return 0;
}
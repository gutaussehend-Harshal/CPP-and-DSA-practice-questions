#include <iostream>
using namespace std;

void myFunction(string country = "Norway", string Country = "Deutschland"){
    cout << country << endl;
    // cout << Country << endl;
}

int main () {
    myFunction("India"); 
    myFunction("Germany"); 
    myFunction(); 
    myFunction(); 
    myFunction("USA");   
    return 0;
}
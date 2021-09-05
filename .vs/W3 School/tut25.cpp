#include <iostream>
using namespace std;

// Inside Example -->

class myClass{                           // The class
   public:                              // Access specifier
    void myMethod (){                   // Method/Function defined inside the class.
        cout << "Hello World" << endl;
    }

};

int main () {
    myClass myObj;                       //Create an object of myClass.
    myObj.myMethod ();                   //Call the method.

    return 0;
}
#include <iostream>
using namespace std;

// Base class:
class myClass {
    public:
    void myFunction (){
        cout << "Some content in parent class." << endl; 
    }
};

// Another base class:
class myOtherClass {
    public:
    void myOtherFunction (){
        cout << "Some conetnt in another class." << endl;
    }
};

// Derived class:
class myChildClass : public myClass, public myOtherClass {

};

int main () {
    myChildClass myObj;
    myObj.myFunction(); 
    myObj.myOtherFunction();

    return 0;
}
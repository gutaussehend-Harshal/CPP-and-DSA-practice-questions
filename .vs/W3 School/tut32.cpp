#include <iostream>
using namespace std;
// Base class
class myClass
{
public:
    void myFunction()
    {
        cout << "Some content in parent class." << endl;
    }
};

// Derived class (Child)
class myChild : public myClass
{
};

//Derived class (My Grandchild)
class myGrandChild : public myChild
{
};

int main()
{
    myGrandChild myObj;
    myObj.myFunction();

    return 0;
}
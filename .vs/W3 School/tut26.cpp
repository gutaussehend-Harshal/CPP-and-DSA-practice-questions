#include <iostream>
using namespace std;

class myClass
{
    public:
    void myMethod();
};
// Method/Function defined outside the class.
void myClass::myMethod()
{
    cout << "Hello World";
}
int main()
{
    myClass myObj;
    myObj.myMethod();

    return 0;
}
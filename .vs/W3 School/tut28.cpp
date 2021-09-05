#include <iostream>
using namespace std;

class myClass
{
public:
    myClass()
    {                                  //Constructor
        cout << "Hello World" << endl; //To create a constructor, use the same name as the class, followed by parentheses ()
    }
};
int main()
{
    myClass myObj; // Create an object of MyClass (this will call the constructor).

    return 0;
}
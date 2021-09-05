#include <iostream>
using namespace std;

// object-oriented programming is about creating objects that contain both data and functions.

class myclass
{                                    // The class
public:                              //Acess specifier
    int myNum = 15;                  //Attribute (int variable)
    string myString = "Hello World"; //Attribute (string variable)
};

int main()
{

    myclass myObj; //Create an object of my class.
    // Access attributes and set values.

    myObj.myNum = 30;
    myObj.myString = "Harshal";

    // Print attribute values.

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    return 0;
}
#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class syntax
/* 
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    members / methods / etc...
}
Note - 
1. Default visibility mode is private.
2. Public visibily mode : Public members of base class becomes public members of derived class.
3. Private visibily mode : Public members of base class becomes private members of derived class.
4. Private members are never inherited
*/

// Creating a programmer class derived from employee base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;  
    }
    
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harshal(1), rahul(2);
    cout << harshal.salary << endl;
    cout << rahul.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}
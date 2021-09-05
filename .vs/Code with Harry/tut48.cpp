#include <iostream>
using namespace std;
/*
Case 1:
class B: public A{
    Order of execution of construction -->
    first A() then B()
};

Case 2:
class A: public B, public C {
    Order of execution of construction -->
    first B() then C() after that A()
};

Case 3:
class A: public B, virtual public C{
    Order of execution of construction -->
    first c() then B() after that A()
}

*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base class constructor called " << endl;
    }
    void printDataBase1()
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base class constructor called " << endl;
    }
    void printDataBase2()
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class Derived: public Base1, public Base2{  // If we change sequence of base classes here then it will call constructor accordingly.
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b) { // If we change sequence of base classes here then it remains same.(no changes)
            derived1 = c;
            derived2 = d;
            cout << "Derived class constructor called " << endl;
        }
        void printDataDerived() 
    {
        cout << "The value of derived1 is " << derived1 << endl; 
        cout << "The value of derived2 is " << derived2 << endl; 
    }

};
int main()
{
    Derived harshal(1, 2, 3, 4);
    harshal.printDataBase1();
    harshal.printDataBase2(); 
    harshal.printDataDerived();

    return 0;
}
#include <iostream>
using namespace std;

/*
Class templates with multiple parameters (one or more than one).
template <class T1, class T2...(comma seperated) > 
class nameOfClass{
    // body
}; 
*/

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b) {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl << this->data2 << endl;
    }
};

int main()
{
    myClass <char, float> obj('C', 1.8); 
    obj.display(); 
    return 0;
}
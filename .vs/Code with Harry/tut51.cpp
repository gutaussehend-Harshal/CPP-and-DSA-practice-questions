#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b){
        real = a;
        imaginary = b; 
    } 
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
   
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1; // Pointer se object ke public member ko kaise access karein.
    Complex *ptr = new Complex;
    // (*ptr).setData(1, 54);   is exactly same as
    ptr->setData(1, 54);
    // (*ptr).getData(); is as good as
    ptr->getData(); 

    // Array of objects:
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 4);
    ptr1->getData(); 


    return 0;
}
/* Dereferencing a pointer means getting the value that is stored in the memory
location pointed by pointer.   */
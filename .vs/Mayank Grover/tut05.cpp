#include <iostream>
using namespace std;

int main () {
    int *p;
    int *q = NULL;
    int x = 10;

    p = &x;
    q = p; 

    cout << "&x is: " << &x << endl;
    cout << "p is: " << p << endl;
    cout << "*p is: " << *p << endl; 
    cout << "&p is: " << &p << endl; 
    cout << "x is: " << x << endl; 

    *p = 20;
    cout << "*p is: " << *p << endl; 
    cout << "x is: " << x << endl;

    cout << "q is: " << q << endl;  
    cout << "*q is: " << *q << endl;  

    *p = 30;
     q = &x;
    cout << "*p is: " << *p << endl;  
    cout << "*q is: " << *q << endl;  
    cout << "x is: " << x << endl; 

    return 0; 
}
#include <iostream>
using namespace std;

int main () {
    // string food = "Pizza";
    // cout << food << endl;
    // cout << &food << endl; //memory address of food.  

    // A pointer however, is a variable that stores the memory address as its value.

    string food = "Pizza"; 
    string* ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl; 

    *ptr = "Hamburger";
    cout << *ptr << endl;
    cout << food << endl;  

    // string food = "Pizza";
    // string* ptr = &food;

    // cout << ptr << endl;
    // cout << *ptr << endl;

    return 0; 
}
#include <iostream>
using namespace std;

int main () {
    string food = "Pizza";
    string &meal = food;

    cout << food << endl;
    cout << meal << endl; 
    cout << &meal << endl; 
    cout << &food << endl; 

// And why is it useful to know the memory address?
// References and Pointers (which you will learn about in the next chapter) are important in C++, because they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.

// These two features are one of the things that make C++ stand out from other programming languages, like Python and Java.

    return 0; 
}
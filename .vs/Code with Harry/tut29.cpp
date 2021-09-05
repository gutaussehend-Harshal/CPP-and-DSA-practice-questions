// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int j = 0; j < 2; j++)
//     {
//         for (int i = 0; i < 6; i++)
//         {
//             cout << "*"; 
//         }
//         for (int i = 0; i < 13; i++)
//         {
//             cout << "=";
//         }
//         cout << endl;
//     }
//     for (int j = 0; j < 2; j++)
//     {
//         for (int i = 0; i < 19; i++)
//         {
//             cout << "=";
//         }
//         cout << endl;
//     }
// }

// // ******=============
// // ******=============
// // ===================
// // ===================

// #include <iostream>
// using namespace std;

// string sum(string a, string b){
//     return a + b;
// }

// int main () {
//     string a = "24";
//     string b = "35";
//     cout << "The sum is: " <<sum(a, b)<< endl; 

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main () {
    
//     int num, product;
//     cout << "Enter an integer who's table do you wann write. " << endl;
//     cin >> num; 
//     for (int i = 1; i < 11; i++) { 
//     cout << num << " * " << i << " = " << num*i << endl;  

//     }
//     return 0;
// }



// 5*1 = 5
// 5*2 = 10


#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    /* Constructor is a special member function with a same name as of class.
    It is used to initialised the objects of its class.
    It is automatically invoked/call/execute whenever an object is created.
    */
    Complex(); // Constructor declaration.

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex() // ----> This is a default constructor as it accepts no parameters.
{
    a = 10;
    b = 0;
    // cout << "Hello World " << endl
}
int main()
{
    Complex c1, c2, c3;
    c1.printNumber(); 
    c2.printNumber();
    c3.printNumber(); 
    return 0;
}

/* Characteristics of constructors.
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return value and dont have return types.
4. It can have default arguments.
5. We cannot refer their address.

*/ 
#include <iostream>
using namespace std;


// Function prototypes:
// type function - name (arguments); 
// int sum (int a, int b); --> Acceptable
// int sum (int a, b); --> Not acceptable
// int sum (int , int); --> Acceptable
int sum (int a, int b); 
void g ();  

int main () {
    int num1, num2;
    cout << "Enter first number : " << endl;
    cin >> num1; 
    cout << "Enter second number : " << endl;
    cin >> num2;
    // num1 & num2 are actual parameters.
    cout << "The sum is : " << sum (num1, num2) << endl;
    g();
    return 0;
}

int sum (int a, int b){ 
    // Formal parameters a & b will be taking values from actual parameters num1 & num2.
    int c = a + b;
    return c;
} 

void g(){
    cout << "Hello World !" << endl;
}
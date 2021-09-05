// #include <iostream>
// using namespace std;

// int sum(int a, int b);
// int mul(int a, int b); 
// int sub(int a, int b);

// int main()
// {
//     int num1, num2;
//     cout << "Enter the first integers : " << endl;
//     cin >> num1;
//     cout << "Enter the second integers : " << endl;
//     cin >> num2;
//     cout << "The sum of " << num1 << " & " << num2 << " is " << sum(num1, num2) << endl;
//     cout << "The multipication of " << num1 << " & " << num2 << " is " << mul(num1, num2) << endl;
//     cout << "The subtraction of " << num1 << " & " << num2 << " is " << sub(num1, num2) << endl;

//     return 0;
// }

// int sum(int a, int b)
// {
//     int result = a + b;
// }

// int mul(int a, int b)
// {
//     int result = a * b;
// }

// int sub(int a, int b)
// {
//     int result = a - b;
// }

int sum (int a, int b) {
    int c = a + b;
    return c;
}

// This won't swap the values of a & b.
void swap (int a, int b) {       // temp  a   b
    int temp = a;               //  4     4   5
    a = b;                      //  4     5   5
    b = temp;                   //  4     5   4
}

// Call by reference using pointers.
void swapPointer (int* a, int* b) {       // temp  a   b
    int temp = *a;               //  4     4   5
    *a = *b;                      //  4     5   5
    *b = temp;                   //  4     5   4
}

// Call by reference using c++ reference variables.
// int &    
void swapReferenceVar (int &a, int &b) {       // temp  a   b
    int temp = a;               //  4     4   5
    a = b;                      //  4     5   5
    b = temp;                   //  4     5   4
   // return a;   
}

#include <iostream>
using namespace std;

int main () {
    int x = 4, y = 5;
    // cout << "The sum of 4 & 5 is: " << sum(4,5) << endl;
    cout << "The value of x is: " << x << " & the value of y is: " << y << endl;
    // swap (x,y); // This won't swap the values of a & b.
    // swapPointer (&x, &y);  // This will swap a & b using pointeres reference.
    swapReferenceVar (x, y);  // This will swap a & b using reference variables. 
    // swapReferenceVar (x, y) = 766;  // This will swap a & b using reference variables. 
    cout << "The value of x is: " << x << " & the value of y is: " << y << endl;
    return 0; 
}
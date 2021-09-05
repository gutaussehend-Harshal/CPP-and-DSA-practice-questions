#include <iostream>
#include <cmath>
using namespace std;

/* 
Create 2 classes:
1. SimpleCalculator - Take input of 2 numbers using utility function
   & perform +,-,*,/ and display the results using another function.
2. ScientificCalculator - Take input of 2 numbers using utility function
   & perform any 4 scientific operation of your choice and 
   display the results using another function. 

    Create another class HybridCalculator & inherit it using these 2 classes:
    Q1. What type of inheritance are you using? --> Multiple inheritance.
    Q2. Which mode of inheritance are you using? --> public simpleCalculator, public scientificCalculator
    Q3.  Create an object of HybridCalculator & display results of simple & 
         scientific calculator.
    Q4. How is code reusibility implemented?  

*/

class simpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }

    void performOperationsSimple()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << a / b << endl;
    }
};

class scientificCalculator
{
    int a, b; 

public:
    void getDataScientific()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }

    void performOperationsScientific()
    {
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of exp(a) is: " << exp(a) << endl;
        cout << "The value of tan(a) is: " << tan(a) << endl;
    }
};

class HybridCalculator : public simpleCalculator, public scientificCalculator
{
};

int main()
{
    // simpleCalculator calc;
    // scientificCalculator calc;
    // calc.getData();
    // calc.performOperationsSimple();
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple(); 

    return 0;
}
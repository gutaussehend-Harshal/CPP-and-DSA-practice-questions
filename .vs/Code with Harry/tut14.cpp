#include <iostream>
using namespace std;

typedef struct employee // Here we used typedef thats why at the end of the class we have written ep. 
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

 union money     // Here you can use only one otherwise you will get garbage value.
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{   
    enum Meal {breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout << m1;
    
    cout << breakfast;
    cout << lunch;
    cout << dinner;
    // struct employee rahul;
    // struct employee harshal; use when there is no typedef.

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c'; 

    // ep harshal; 
    // harshal.eId = 1;
    // harshal.favChar = 'c';
    // harshal.salary = 2300000;

    // ep rahul;
    // rahul.eId = 2;
    // rahul.favChar = 'M';
    // rahul.salary = 2500000;

    // cout << harshal.salary << endl;
    // cout << harshal.favChar << endl;
    // cout << harshal.eId << endl;

    // cout << rahul.salary << endl;
    // cout << rahul.favChar << endl;
    // cout << rahul.eId << endl; 

    // cout << m1.car << endl;
    // cout << m1.rice << endl; 

    return 0;
}
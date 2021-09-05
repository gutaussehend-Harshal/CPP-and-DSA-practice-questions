#include <iostream>
using namespace std;

int main () {
    int myNum = 15;
    myNum = 10;

    cout << myNum << endl; 

    int x , y, sum;
    cout << "Please enter a first integer: " << endl;
    cin >> x;
    cout << "Please enter a second integer: " << endl;
    cin >> y;

    sum = x + y;
    cout << "The total sum is: "<< sum << endl; 
    
    return 0;
}
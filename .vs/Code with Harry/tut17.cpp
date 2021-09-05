#include <iostream>
using namespace std;

inline int product (int a, int b){ 
    // Not recommended to use below lines with inline functions.
   // static int c = 0;   // This executes only once.
   // c = c + 1;          // Next time this function is run, the value of c will be retained. 
    return a * b;     // return a * b + c;
} 

float moneyReceived (int currentMoney, float factor = 1.04) {
    return currentMoney * factor;

}
int main () { 
    int a, b;
    cout << "Enter the value of a & b : " << endl;
    cin >> a >> b;
    cout << "The product of a & b is : " << product (a,b) << endl;
    // cout << "The product of a & b is : " << product (a,b) << endl; 
    // cout << "The product of a & b is : " << product (a,b) << endl;
    // cout << "The product of a & b is : " << product (a,b) << endl;
    // cout << "The product of a & b is : " << product (a,b) << endl; 
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive: " << moneyReceived(money) << " Rs after 1 year." << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive: " << moneyReceived(money,1.10) << " Rs after 1 year." << endl;
    
    return 0; 
}
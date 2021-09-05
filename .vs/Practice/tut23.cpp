#include <iostream>
using namespace std;

int main () {
    float q, p;
    cout << "Enter the value of quantity & price resp. " << endl;
    cin >> q >> p;

    float total_Expense = q * p;
    cout << "Total expense is: " << total_Expense << endl;

    if (total_Expense > 5000)
    {   
        total_Expense = total_Expense - total_Expense * 0.1;
        cout << "Amount with Offering 10% discount: " << total_Expense << endl;
    } else {
        cout << "Amount without offering 10% discount: " << total_Expense << endl;
    }
    
    // (total_Expense > 5000) ? total_Expense = total_Expense - total_Expense * 0.1: cout << "Amount with Offering 10% discount: " << total_Expense; cout << "Amount without offering 10% discount: " << total_Expense;




    return 0;
}
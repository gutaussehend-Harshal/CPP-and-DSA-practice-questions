#include <iostream>
using namespace std;

int main()
{
    int amt, R500, R100, R50, R20, R10, R5, R1;
    cout << "Enter amount: " << endl;
    cin >> amt;

    R500 = amt / 500;
    amt = amt % 500;
    R100 = amt / 100;
    amt = amt % 100;
    R50 = amt / 50;
    amt = amt % 50;
    R20 = amt / 20;
    amt = amt % 20;
    R10 = amt / 10;
    amt = amt % 10;
    R5 = amt / 5;
    amt = amt % 5;
    R1 = amt / 1;
    amt = amt % 1;

    cout << "Rs.500 : " << R500 << endl
         << "Rs.100 : " << R100 << endl
         << "Rs.50 : " << R50 << endl
         << "Rs.20 : " << R20 << endl
         << "Rs.10 : " << R10 << endl
         << "Rs.5 : " << R5 << endl
         << "Rs.1 : " << R1 << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main () {
    int days, y, m, d;
    cout << "Enter no. of days " << endl;
    cin >> days;

    y= days/365;
    cout << y << endl;
    days = days%365;
    cout << days << endl;
    m = days/30;
    cout << m << endl;
    d = days%30;
    cout << d << endl;

    // cout<<"Years : "<<y<<"\nMonths : "<<m<<"\nDays : "<<d;
    return 0;
}
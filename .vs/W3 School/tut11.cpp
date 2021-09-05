#include <iostream>
using namespace std;

int main () {
    int day;
    cout << "Enter a number: " << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Today is a Monday.";
        break;
    
    case 2:
        cout << "Today is a Tuesday.";
        break;

    case 3:
        cout << "Today is a Wednesday.";
        break;

    case 4:
        cout << "Today is a Thursday.";
        break;    
    
    case 5:
        cout << "Today is a Friday."; 
        break;

    case 6:
        cout << "Today is a Saturday.";
        break;

    case 7:
        cout << "Today is a Sunday.";
        break;

    default:
        cout << "BSDK week mein 7 hi din hote hai.";
        break;
        
}
    return 0;
}
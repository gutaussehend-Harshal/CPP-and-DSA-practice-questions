#include <iostream>
using namespace std;

int main()
{
    // Selection control structure: if else-if else ladder. 
    int age;
    cout << "Please enter your age: " << endl; 
    cin >> age;
    // if ((age < 18) && (age > 0))
    // {
    //     cout << "You can not come to my party." << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You are a kid you will get kid pass to the party." << endl;
    // }
    // else if (age == 0) 
    // {

    //     cout << "You are not born yet." << endl;
    // }
    // else
    // {
    //     cout << "You can come to the party." << endl;
    // }

    // Selection control structure: Switch case statements.

    switch (age)
    {
    case 18:
         cout << "You are 18." << endl;
        break;
    
    case 22:
         cout << "You are 22." << endl;
        break;

    case 2:
         cout << "You are 2." << endl; 
        break;
    
    default:
        cout << "No special cases." << endl;
        break;
    }
    cout << "Done with switch case." << endl;

    return 0;

}
#include <iostream>
using namespace std;

int main()
{
    int Ram_age, Sulabh_age, Ajay_age;
    cout << "Enter the age of Ram, Sulabh, & Ajay: " << endl;
    cin >> Ram_age >> Sulabh_age >> Ajay_age;

    if (Ram_age < Sulabh_age && Ram_age < Ajay_age)
    {
        cout << "Ram is younger than Sulabh & Ajay." << endl;
    }
    else if (Sulabh_age < Ram_age && Sulabh_age < Ajay_age)
    {
        cout << "Sulabh is younger than Ram & Ajay." << endl;
    }
    else
    {
        cout << "Ajay is younger than Ram & Sulabh." << endl;
    }

    return 0;
}
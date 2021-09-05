#include <iostream>
using namespace std;

class car{
    public:
    string brand;
    string model;
    int year;

};

int main () {
    car carObj1;
    carObj1.brand = "Tesla";
    carObj1.model = "X";
    carObj1.year = 2010;
    
    car carObj2; 
    carObj2.brand = "Volvo";
    carObj2.model = "V60"; 
    carObj2.year = 2015;

    cout << carObj1.brand << " " <<carObj1.model << " " <<carObj1.year << endl;
    cout << carObj2.brand << " " <<carObj2.model << " " <<carObj2.year << endl; 

    return 0;
}
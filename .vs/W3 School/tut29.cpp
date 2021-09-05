#include <iostream>
using namespace std;

class car
{
public:
    string brand;
    string model;
    int year;
    car(string x, string y, int z)
    { // Construct with parameters.
        brand = x;
        model = y;
        year = z;
    }
};
int main()
{
    // Create Car objects and call the constructor with different values.
    car carObj1("Tesla", "X", 2010);
    car carObj2("Mahindra", "XUV300", 2019);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
    return 0;
}
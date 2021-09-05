#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "Using function with two arguments." << endl; 
    return a + b;
}

int add(int a, int b, int c)
{
    cout << "Using function with three arguments." << endl;
    return a + b + c;
}

// Calculate the volume of cylinder -->
int volume (double r, int h){
    return (3.14 * r * r * h);
}

// Calculate the volume of cube -->
int volume (int a){
        return a * a * a;
}

// Calculate the volume of rectangle -->
int volume (int l, int b, int h){
    return l * b * h;
}

int main()
{
    cout << "The sum of 3 & 6 is: " << add(3, 6) << endl;
    cout << "The sum of 3, 7 & 6 is: " << add(3, 7, 6) << endl;
    cout << "The volume of cylinder of radius 3, 7 & height 6 is: " << volume (3,7,6) << endl;
    cout << "The volume of cuboid of 3, 7 & 6 is: " << volume (3,6) << endl;
    cout << "The volume of cube of side 3 is: " << volume (3) << endl;

    return 0;
}
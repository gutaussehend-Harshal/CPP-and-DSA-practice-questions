#include <iostream>
using namespace std;

void volume(int side);
void volume(int radius, int height);
void volume(int length, int height, int breadth);

int main()
{

    volume(10);
    volume(10,20);
    volume(10,20,30);

    return 0;
}
void volume(int side)
{
    cout << "The volume of cube is: " << side*side*side << endl;
}

void volume(int radius, int height)
{
    cout << "The volume of cylinder is: " << 3.14*radius*radius*height << endl;
}

void volume(int length, int height, int breadth)
{
    cout << "The volume of cuboid is: " << length * height * breadth << endl;
}

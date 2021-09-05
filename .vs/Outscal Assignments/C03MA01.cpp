#include <iostream>
using namespace std;

int Add(int x, int y)
{
    int sum = x + y;
    return sum;
}

float Add(float x, float y)
{
    float sum = x + y;
    return sum;
}

double Add(double x, double y)
{
    double sum = x + y;
    return sum;
}

int main()
{

    cout << Add(10, 15) << endl; 
    cout << Add(976.25, 26.23) << endl;
    cout << Add(10.25, 15.25) << endl;

    return 0;
}
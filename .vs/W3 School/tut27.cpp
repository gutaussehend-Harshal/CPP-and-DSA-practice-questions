#include <iostream>
using namespace std;

class car
{
    public:
    int speed(int maxSpeed);
};

int car::speed(int maxSpeed)
{
    return maxSpeed;
}
int main()
{
    car myObj;
    cout << myObj.speed(200) << endl;
    cout << myObj.speed(300) << endl;

    return 0;
}
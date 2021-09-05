#include <iostream>
using namespace std;

// float funcAverege(int a, int b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// };

// float funcAverege2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// };

template <class T>
void swapp(T &a, T &b)
{
    T temp = a; 
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAverege(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
};

int main()
{
    float a;
    a = funcAverege(5, 2); 
    cout << "The avg of these numbers is " << a << endl;

    int x = 5, y = 7; 
    swapp(x, y); 
    cout<< x << endl << y << endl;

    return 0; 
}
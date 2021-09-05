#include <iostream>
using namespace std;

template <class T>
class Harshal
{
public:
    T data;
    Harshal(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harshal<T>::display()
{ 
    cout << data << endl;
}

void func(int a)
{
    cout << "I am a first func()" << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func()" << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatised func()" << a << endl;
}

int main() 
{
    // Harshal<float> h(5.7);
    // Harshal<char> h('H');
    // Harshal<int> h(23);
    // cout << h.data << endl;
    // h.display();

    // func(4);  // Exact match takes highest priority
    func1(4); 

    return 0;
}
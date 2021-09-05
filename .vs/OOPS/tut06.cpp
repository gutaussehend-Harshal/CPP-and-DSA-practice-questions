#include <bits/stdc++.h>
using namespace std;

// Virtual function, pure virtual function & abstact class -->

class Instrument
{
public:
    virtual void MakeSound() = 0;
    // virtual void MakeSound()
    // {
    //     cout << "Instrument playing..." << endl;
    // }
};

class Accordion : public Instrument
{
public:
    void MakeSound()
    {
        cout << "Accordion playing..." << endl;
    }
};

class Piano : public Instrument
{
public:
    void MakeSound()
    {
        cout << "Piano playing..." << endl;
    }
};

int main()
{
    system("CLS");
    Instrument *i1 = new Accordion();
    // i1->MakeSound();
    Instrument *i2 = new Piano();
    // i2->MakeSound();

    Instrument *instruments[2] = {i1, i2};
    for (int i = 0; i < 2; i++)
    {
        instruments[i]->MakeSound();
    }

    return 0;
}
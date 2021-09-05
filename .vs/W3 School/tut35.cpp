// Why And When To Use "Inheritance" and "Polymorphism"?
// It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

#include <iostream>
using namespace std;

// Base class:
class Animal
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound." << endl;
    }
};

// Derived class:
class Pig : public Animal
{
public:
    void pigSound()
    {
        cout << "The pig says: wee wee!" << endl;
    }
};

// Derived class:
class Dog : public Animal
{
public:
    void dogSound()
    {
        cout << "The dog says: bow bow!" << endl;
    }
};

// Derived class:
class Cat : public Animal
{
public:
    void catSound()
    {
        cout << "The cat says: meow meow!" << endl;
    }
};
int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    Cat myCat;

    myAnimal.animalSound();
    myPig.pigSound();
    myDog.dogSound();
    myCat.catSound();
    return 0;
}
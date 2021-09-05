#include <iostream>
using namespace std;

/*
Inheritances:
Student --> Test [Done]
student --> Sport [Done]
Test --> Result [Done]
Sport --> Result [Done]

 */
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }

    void print_number()
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2) 
    {
        maths = m1;
        physics = m2;
    }

    void print_marks()
    {
        cout << "You result is here: " << endl;
        cout << "Maths: " << maths << endl;
        cout << "Physics: " << physics << endl;
    }
};

class Sport : virtual public Student
{
protected:
    float score;

public:
    void set_score(int sc)
    {
        score = sc;
    }

    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sport
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();

        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result harshal;
    harshal.set_number(4200);
    harshal.set_marks(80, 90);
    harshal.set_score(9);
    harshal.display();

    return 0;
}
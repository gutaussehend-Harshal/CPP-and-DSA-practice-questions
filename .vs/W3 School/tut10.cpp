#include <iostream>
using namespace std;

int main()
{
    // int x = 10;
    // int y = 20;
    // if (x < y){

    // cout << " x is less than y." << endl;

    int x = 6;
    string result = (x < 18) ? "Good day." : "Good evening.";
    cout << result << endl;

    int age;
    cout << "Enter an age: " << endl;
    cin >> age;

    if (age < 18)
    {

        cout << "Acche din chal rahe hai." << endl;
    }
    else if (age >= 18 && age <= 60)
    {

        cout << "Acche din jaldi hi khatm hone wale hai." << endl;
    }
    else
    {

        cout << "Acche din ki chodo aap hi khatm wale hai." << endl;
    }

    return 0;
}
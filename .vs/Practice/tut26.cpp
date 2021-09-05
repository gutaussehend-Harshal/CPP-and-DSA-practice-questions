#include <iostream>
using namespace std;

int main()
{
    float angle1, angle2, angle3;
    cout << "Enter the angles of a triangle." << endl;
    cin >> angle1 >> angle2 >> angle3;

    int sum = angle1 + angle2 + angle3;

    // if (sum == 180)
    // {
    //     cout << "The sum of angles is: " << sum << " & triangle is valid." << endl;
    // }
    // else
    // {
    //     cout << "The sum of angles is: " << sum << " & triangle is not valid." << endl;
    // }

    (sum == 180) ? cout << "The sum of angles is: " << sum << " & triangle is valid." : cout << "The sum of angles is: " << sum << " & triangle is not valid.";

    return 0;
}
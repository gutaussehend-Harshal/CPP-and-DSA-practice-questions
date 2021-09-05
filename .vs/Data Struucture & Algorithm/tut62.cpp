// #include <iostream>
// using namespace std;

// int main()
// {
//     float wt, ht;
//     cout << "Enter wt & ht: " << endl;
//     cin >> wt >> ht;
//     float bmi = wt / (ht * ht);

//     if (bmi < 18)
//     {
//         cout << "Underwt" << endl;
//     }
//     else if (bmi > 18 && bmi < 25)
//     {
//         cout << "Normalwt" << endl;
//     }
//     else
//     {
//         cout << "Overwt" << endl;
//     }

//     cout << bmi << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << year << " is leap year." : cout << year << " is not leap year.";
    return 0;
}
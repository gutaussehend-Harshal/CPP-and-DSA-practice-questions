// #include <iostream>
// #include <cstring>
// using namespace std;

// int main () {

//     string str1, str2, result;
//     cout << "Enter first string: " << endl;
//     getline(cin,str1);

//     cout << "Enter first string: " << endl;
//     getline(cin,str2);

//     result = str1 + str2;
//     cout << "Resultant string = " << result << endl;


//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;

// Example 1: Concatenate String Objects

int main () {

    char str1[80], str2[80];
    cout << "Enter the string 1: "  << endl;
    cin.getline(str1, 80);

    cout << "Enter the string 2: "  << endl;
    cin.getline(str2, 80);

    // strcat(str1, str2);
    cout << "The resultant string: " <<  strcat(str1, str2) << endl;
    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}
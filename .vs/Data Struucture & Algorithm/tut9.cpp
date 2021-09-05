#include <iostream>
using namespace std;

int main () {

    char str1[80];
    char str2[80];
    cout << "Enter string 1: " << endl; 
    gets(str1);
    cout << "Enter string 2: " << endl; 
    gets(str2);

    cout << str1 << endl; 
    cout << str2 << endl;


    return 0;
}
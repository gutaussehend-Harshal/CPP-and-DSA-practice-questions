#include <iostream>
using namespace std;

int main()
{   
    char str[80];
    cin.getline(str, 80);

    int i;
    for ( i = 0; str[i] != '\0'; i++);
   
    cout << i;

    return 0;
}
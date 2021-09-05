#include <iostream>
using namespace std;

int main () {

    char str[80];
    cout << "Enter the string: ";
    cin.getline(str, 80);

    int size;
    for (size = 0; str[size] != '\0'; size++); 
    cout << size << endl;
    
    for (int i = size-1; i >= 0; i--)
    {
        cout << str[i] << " "; 
    }
    
    return 0;
}
#include <iostream>
using namespace std;

void printNumber(int *numberPtr)
{
    cout << *numberPtr << endl;
}

void printLetter(char *letterPtr)
{
    cout << *letterPtr << endl;
}

void print(void *ptr, char type)
{
    if (type == 'i')
    {
        cout << *((int *)ptr) << endl;
    }
    if (type == 'c')
    {
        cout << *((char *)ptr) << endl;
    }
}
int main()
{
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    printLetter(&letter);
    print(&number, 'i');
    print(&letter, 'c');

    system("pause > 0");
    return 0;
}
#include <iostream>
using namespace std;

// Write a program to find the length of string.

int main()
{
	char str[80];
	cout << "Enter a string: " << endl;
	cin.getline(str, 80);
	int i;

	for (i = 1; str[i] != '\0'; i++);
	cout << "The length of the string is: " << i << endl;

	return 0;
}
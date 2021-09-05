#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter any character : ";
	cin >> ch;
	cout << "ASCII equivalent is : " << static_cast<int>(ch) << endl;
	cout << "ASCII equivalent is : " << int(ch);

	return 0;
}
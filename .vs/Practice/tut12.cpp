#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"\nEnter two numbers : ";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter swapping numbers are : ";
	cout<<a<<" "<<b;
	
	
	return 0;
}

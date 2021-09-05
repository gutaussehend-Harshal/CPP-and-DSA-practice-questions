#include <iostream>
using namespace std;

int main()
{
	int a[4] = {2, 4, 11, 15};
	int target = 15;

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (a[j] == target - a[i])
			{	
				cout << "true";
				return true;
			}
			else
			{
				cout << "false";
				return false;
			}
		}
	}




	return 0;
}
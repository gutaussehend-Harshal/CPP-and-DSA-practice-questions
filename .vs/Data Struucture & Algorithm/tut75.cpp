#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, result = "";

	getline(cin, s);
	
	int ans[123] = {0};

	for (int i = 0; i < s.length(); i++)
	{
		if (ans[i] == 0)
		{
			//ans[s[i]] = 1;
			result += s[i];
		}
		
	}
	cout << result << endl;

	return 0;
}
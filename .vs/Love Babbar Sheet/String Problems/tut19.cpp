#include <bits/stdc++.h>
using namespace std;

// function to see memory handling
void func_to_handle_mem_leak()
{
	int* ptr = new int(5);
  // int *arr = new int(5);

	// Now delete pointer ptr using delete
	delete (ptr);
}

int main()
{

	func_to_handle_mem_leak();

	return 0;
}

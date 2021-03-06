// C++ program for insertion sort 
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl;
} 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
	int i,j,key; 
	for (i = 1; i < n; i++)
	{ 
        key = arr[i];
		j = i - 1; 

		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */ 
		while (j >= 0 && arr[j] > key)
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
        printArray(arr, n);
	} 
} 

// A utility function to print an array of size n 


/* Driver code */
int main() 
{ 
	int arr[] = {5,3,1,9,8,2,4,7}; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	insertionSort(arr, n); 
	printArray(arr, n); 

	return 0; 
} 

// This is code is contributed by rathbhupendra

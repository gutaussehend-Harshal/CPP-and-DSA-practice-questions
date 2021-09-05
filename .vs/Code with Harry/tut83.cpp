#include <bits/stdc++.h>
using namespace std;

int main () {

   int size = 6;
   int arr[size] = {5, 4, 12, 7, 15, 9};

    cout << "Print result" << endl;
   for (int i = 0; i < size; i++)
   {
       cout << arr[i] << " ";
   }
    cout << endl;
    cout << "\nreverse the all array elements" << endl;

   for (int i = size - 1; i >= 0; i--) 
   {
       cout << arr[i] << " ";
   }
   
    return 0;
}
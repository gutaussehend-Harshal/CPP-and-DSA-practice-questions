#include <iostream>
using namespace std;

int main () {
    string s;
    cout << "Enter string " << endl;
    getline(cin, s); 
//    for (int i = 0; i < size; i++) 
//    {
//        cin >> s[i]; 
//    }
    cout << endl;
    cout << "\nreverse the all array elements" << endl;

   for (int i = s.length() - 1; i >= 0; i--)  
   {
       cout << s[i]; 
   } 
   
    return 0;
}
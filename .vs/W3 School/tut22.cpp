#include <iostream>
using namespace std;

int plusFunc (int x, int y){ 
    return x+y; 
}

double plusFunc (double x, double y){ 
    return x+y;
}
int main () {
    
    
    cout << "Int: " << plusFunc(8,5) << endl; 
    cout << "Double: " << plusFunc (4.3,6.26) << endl; 

    return 0;
}
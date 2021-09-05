// #include <iostream>
// using namespace std;
// int myFunction (int x){
//     return 5+x;
// }
// int main () {
//     cout << myFunction(3) << endl;

//     return 0;
// }


#include <iostream>
using namespace std;
int myFunction(int x, int y){
    return x+y+2;

}

int main () {
    int z = myFunction(5,3);
    cout << "The sum is: " << z << endl;  
    return 0; 
}
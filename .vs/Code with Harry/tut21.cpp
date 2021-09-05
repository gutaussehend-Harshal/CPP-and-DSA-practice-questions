#include <iostream>
using namespace std;

class employee {
    private:
    int a, b, c;
    public:
    int d, e;

    void setData (int a1, int b1, int c1);  // Declaration
    void getData () {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl; 
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void employee :: setData (int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;

}
int main () {
    employee harsh;
    //harsh.a = 134; --> This will throw an error as a is private.
    harsh.d = 34;
    harsh.e = 89; 
    harsh.setData(1,2,4);
    harsh.getData();

    return 0;
}
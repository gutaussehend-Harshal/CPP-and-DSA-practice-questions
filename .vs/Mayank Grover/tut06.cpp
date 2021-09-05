#include <iostream>
using namespace std;

class Player{
    public:
        void print() {
            cout << "Player Hello" << endl;
        }
};

int main () {
    int *p = new int;
    *p = 10;

    // int *q = new int;
    int *q = new int(10);  // Memory leak
    q = new int(20);

    cout << "*p is: " << *p << endl;
    cout << "*q is: " << *q << endl; 

    delete q;

    Player player;
    player.print(); 

    // Player *pplayer = new Player();
    Player *pplayer = &player; 
    pplayer->print(); 

    return 0;
}
#include <iostream>
#include <memory>
using namespace std;

class Player
{
public:
    int data = 10;
    char c;

    Player()
    {
        cout << "3 - Creating player object \n";
    }

    Player(char x)
    {
        c = x; 
        cout << "4 - Creating player object: " << x << "\n";  
    }

    ~Player()
    {
        cout << "5 - Destroying player object: " << c << "\n"; 
    }
};

void test()
{

    // Player player1; // Memory allocated
    // Player *p;
    // p = &player1;

    Player *q = new Player('R'); // Meomory allocated 
    // delete q;    (******Important line*****)
 
    // Auto_ptr - deprecated ? 
    unique_ptr<Player> player3(new Player('S'));  // Smart
}

int main()
{
    cout << "1 - Start of main \n"; 
    test();
    cout << "2 - End of main \n";
    return 0;
}
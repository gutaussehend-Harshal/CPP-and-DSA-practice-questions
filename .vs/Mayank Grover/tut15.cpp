#include <iostream>
#include <string>
using namespace std;

class Player
{
public:
    int data;
};

template <typename T>
class GenericPlayer
{
public:
    T data;
};

class OtherPlayer
{
};

void sum(int a, int b)
{
    cout << "The sum is: " << a + b << "\n";
}

template <typename T>
void genericSum(T a, T b)
{
    cout << "The sum is: " << a + b << "\n";
}

void sum(Player p1, Player p2)
{
    cout << "Sum is: " << p1.data + p2.data << "\n";
}

int main()
{
    // sum(4, 5);  // int
    // sum(10.2, 13.3); // float
    // sum('c', 'a'); // Char

    // genericSum<float>(10.2, 13.3);
    
    stack <int> stackint;
    stack <Player> stackplayer;
    stack <GenericPlayer<int>> genericintstack;


    GenericPlayer<int> player1;
    player1.data = 10;
    cout << "Generic player data: " << player1.data << "\n";
    
    GenericPlayer<char> player2; 
    player2.data = 'A';
    cout << "Generic player data: " << player2.data << "\n";

    // Player player2;
    // player2.data;
    // genericSum(player1, player2); 

    return 0;
}
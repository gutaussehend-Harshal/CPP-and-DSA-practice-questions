#include <iostream>
using namespace std;

class Player
{
private:
    int health;
    int score;
    int power;
    int weapon;
    int jump; 

public:
    Player() {
        cout << "Creating object of player class using default \n";
        health = 100;
    }

    Player(int hp) { 
        cout << "Creating object of player class using custom \n"; 
        health = hp; 
        // score = sc; 
        // power = pow;
        // weapon = wp;
        // jump = jm;
    }

    // 1
    // void takeDamage(int damage)
    // {
    //     // if (isAlive())
    //     // {
    //     //     health = health - damage;
    //     //     cout << "player's health is " << health << "\n";
    //     // }
    //     // else
    //     // {
    //     //     cout << "Player's dead!\n";
    //     // }
    //     cout << "Player taking damage: " << damage << "\n";
    // }
    // 2
    // void takeDamage(int damage, int seconds)
    // {

    // }

    // player takes damge over seconds
    // 3
    // int takeDamage(int damage, int seconds)
    // {
    //     return 1000;
    // }

    int getHealth()
    {
        return health;
    }

    void setHealth(int hp) 
    {
        health = hp;
    }

protected:
    bool isAlive()
    {
        if (health > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// class TankPlayer : public Player
// {
//     // public:
//     //     void updateScore()
//     //     {
//     //         if (isAlive())
//     //         {
//     //         }
//     //     }
// public:
//     void takeDamage(int damage)
//     {
//         cout << "tankPlayer taking damage: " << damage << "\n";
//     }
// };

// class HighDamagePlayer : public Player
// {
// };

int main()
{
    Player player;  // default constructor
    cout << player.getHealth() << "\n";

    // Player player2; //50
    // player2.setHealth(50);
    int x;
    cin >> x; 
    Player player2(x);    // Custom constructor
    cout << player2.getHealth() << "\n"; 

    Player player3; //150
    player3.setHealth(150); 
    cout << player3.getHealth() << "\n"; 

    //player.takeDamage(60);

    // player.takeDamage(43);
    // cout << "Current health: " << player.getHealth() << "\n";
    // player.takeDamage(60, 1);

    // TankPlayer tankplayer;
    // tankplayer.takeDamage(40);

    // HighDamagePlayer highDamagePlayer;
    // highDamagePlayer.takeDamage(50);

    return 0;
}
#include <iostream>
using namespace std;

class Player
{
private:
    int health = 100;
    int score;

public:
    // 1
    void takeDamage(int damage)
    {
        // if (isAlive())
        // {
        //     health = health - damage;
        //     cout << "player's health is " << health << "\n";
        // }
        // else
        // {
        //     cout << "Player's dead!\n";
        // }
        cout << "Player taking damage: " << damage << "\n";
    }
    // 2
    // void takeDamage(int damage, int seconds)
    // {

    // }

    // player takes damge over seconds
    // 3
    int takeDamage(int damage, int seconds)
    {
        return 1000;
    }

    int getHealth()
    {
        return health;
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

class TankPlayer : public Player
{
    // public:
    //     void updateScore()
    //     {
    //         if (isAlive())
    //         {
    //         }
    //     }
public:
    void takeDamage(int damage)
    {
        cout << "tankPlayer taking damage: " << damage << "\n";
    }
};

class HighDamagePlayer : public Player
{
};

int main()
{
    Player player;
    player.takeDamage(60);

    // player.takeDamage(43);
    // cout << "Current health: " << player.getHealth() << "\n";
    // player.takeDamage(60, 1);

    TankPlayer tankplayer;
    tankplayer.takeDamage(40);

    HighDamagePlayer highDamagePlayer;
    highDamagePlayer.takeDamage(50);
    
    return 0;
}
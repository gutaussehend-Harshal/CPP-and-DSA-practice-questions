#include <iostream>
using namespace std;

class Player
{
private:
    int health = 100;
    int score;

public:
    void takeDamage(int damage)
    {
        if (isAlive())
        {
            health = health - damage;
            cout << "player's health is " << health << "\n";
        }
        else
        {
            cout << "Player's dead!\n";
        }
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
public:
    void updateScore()
    {
        if (isAlive())
        {
        }
    }
};

class HighDamagePlayer : public Player
{
};

int main()
{
    Player player;

    // player.health = 100;
    // player.score = 5;

    // cout << player.health << "\n" << player.score << "\n";

    player.takeDamage(43);
    cout << "Current health: " << player.getHealth() << "\n";
    player.takeDamage(60);
    player.takeDamage(60);

    // cout << player.health << "\n" << player.score << "\n";
    TankPlayer tankplayer;
    tankplayer.takeDamage(40);

    return 0;
}
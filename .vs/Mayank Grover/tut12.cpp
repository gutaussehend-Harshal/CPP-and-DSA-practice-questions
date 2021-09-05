#include <iostream>
using namespace std;

class PlayerInterface{
    public:
    virtual void fire() = 0;
    virtual void jump() = 0;
    virtual void takeDamage(int damage) = 0;

    PlayerInterface(int hp) {
        
    }

    PlayerInterface() { 

    }

};

class Player
{
private:
    int health;
    
    void add() {
        cout << "Player add \n";
    }

public:
    Player()
    {
        cout << "Creating object of player class using default \n";
        health = 100;
    }

    Player(int hp)
    {
        cout << "Creating object of player class using custom \n";
        health = hp;
    }

    Player(const Player *p)
    {
        cout << "Creating object of player class using copy \n";
        health = (*p).health;
    }

    ~Player()
    {
        cout << "Destructor is called \n";
    }

    // Virtual
    virtual void fire()
    {
        cout << "Player fired \n";
    }

    // Pure virtual
    virtual void jump() = 0;

    void takeDamage(int damage)
    {
        cout << "Player taking damage: " << damage << "\n";
    }

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

class TankPlayer : public PlayerInterface
{
public:
    TankPlayer()
    {
        cout << "Creating object of Tankplayer class using default \n";
    }

    TankPlayer(int hp) : PlayerInterface(hp)
    {
        cout << "Creating object of Tankplayer class using custom \n";
    }

    ~TankPlayer()
    {
        cout << "Destructor is called of TankPlayer\n";
    }

    virtual void jump() {
        cout << "Tankplayer jump \n";
    }

    void fire()
    {
        cout << "Tankplayer fired \n";
    }

    void takeDamage(int damage)
    {
        cout << "tankPlayer taking damage: " << damage << "\n";
    }
};

class HighDamagePlayer : public Player {

};

int main()
{
    // Player player1;  // default constructor
    // cout << player1.getHealth() << "\n";

    // playerFun();
    // cout << player1.getHealth() << "\n";
    // Player player2; //50
    // player2.setHealth(50);
    // int x;
    // cin >> x;
    // Player player2(196);    // Custom constructor
    // cout << player2.getHealth() << "\n";

    // Player player4(&player2);
    // // Player *player4 = new Player (player2);
    // cout << player4.getHealth() << "\n";
//     Player player3; //150
//    //  player3.setHealth(150);
//     player3.takeDamage(40);
    // cout << player3.getHealth() << "\n";

    //player.takeDamage(60);

    // player.takeDamage(43);
    // cout << "Current health: " << player.getHealth() << "\n";
    // player.takeDamage(60, 1);

    // TankPlayer tankplayer;
    TankPlayer player4(134);
    // cout << tankplayer.getHealth() << "\n";
    player4.takeDamage(40);

    // HighDamagePlayer highDamagePlayer;
    // highDamagePlayer.takeDamage(50);
    PlayerInterface *p;
    // p = &player3; 
    // p->fire();

    p = &player4;
    p->fire();

    // TankPlayer *tp;
    // tp = &player4;
    // tp->fire();


    cout << "Returning from main! \n";
    return 0;
}
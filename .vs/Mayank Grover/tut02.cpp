#include <iostream>
using namespace std;

// void printScoreRed()
// {
//     cout << "Box is red, score is 10 \n";
// }

// void printScoreBlue()
// {
//     cout << "Box is blue, score is 20 \n";
// }

// Solution for one single core value
void printScore(int score)
{
    cout << "Box score is " << score << "\n";
}

// Solution for one single box
int getBoxScore(char box)
{
    if (box == 'r')
    {
        // printScoreRed();
        // int multipliedScore = printScore(10);
        // cout << "Multiplied score is: " << multipliedScore << "\n";
        printScore(10);
        return 10;
    }
    else if (box == 'b')
    {
        // printScoreBlue();
        printScore(20);
        return 20;
    }
    else
    {
        printScore(0);
        return 0;
    }
}

void calculatePlayerScore(char boxes[])
{
    int totalScore = 0;
    for (int i = 0; i < 4; i++)
    {
        int score = getBoxScore(boxes[i]);
        totalScore = totalScore + score;
    }

    cout << "Total score: " << totalScore << "\n";
}

int main()
{
    // char box = 'r';
    // // char box = 'b';
    // printBoxScore(box);
    char boxes1[] = {'r', 'b', 'r', 'x'};
    calculatePlayerScore(boxes1);
    cout << "\n";

    char boxes2[] = {'b', 'r', 'b', 'b'}; 
    calculatePlayerScore(boxes2); 

    // Do not repeat yourself! DRY
    return 0;
}
#include <iostream>
using namespace std;

int printRedBoxScore(int score)
{
    return 10;
}

int printBlueBoxScore(int score)
{
    return 15; 
}

void printScore(int r_score, int b_score)
{
    cout << "red box score " << r_score << " and blue box score is " << b_score << endl;
}

int main()
{
    char box;
    char choice = 'Y';
    int score, r_score = 0, b_score = 0;
    int streakvalue = 1; 

    while (choice == 'Y')
    {
        cout << "Enter the colour of box \n";
        cin >> box;
        if (box == 'R')
        {
            score = printRedBoxScore(10);
            r_score += score*streakvalue;
            cout << "The red box score is: " << r_score;
        }
        else if (box == 'B')
        {
            score = printBlueBoxScore(15);
            b_score += score*streakvalue;
            cout << "The bue box score is: " << b_score;
        }
        else
        {
            cout << "Please enter R / B only ";
        }
        if (choice == 'N')
        {
            break;
        }

        cout << "\nDo you wann continue --> 'Y' or 'N' ";
        cin >> choice;
    }
        printScore(r_score, b_score);
    return 0;
}
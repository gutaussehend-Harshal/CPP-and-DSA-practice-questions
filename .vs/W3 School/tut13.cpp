#include <iostream>
using namespace std;

int main()
{
    //     int i = 0;
    //     while (i<10){

    //     cout << i << endl;
    //     i++;

    //     if (i==4){
    //         break;
    // }

    // }

    int i = 0;
    while (i < 10)
    {
        if (i == 4)
        {
            i++;
            continue;
        }

        cout << i << endl;
        i++;
    }
    return 0;
}
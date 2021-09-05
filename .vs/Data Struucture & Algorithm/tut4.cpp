#include <iostream>
using namespace std;

int main () {
    char S1[80];
    char S2[80];
    int count1 = 0;
    int count2 = 0;
    cout << "Enter String ";

    cin.getline(S1,80);
    cin.getline(S2,80);

    for (int i = 0; S1[i] != '\0'; i++)
    {
       count1++; 
    }
    cout << count1 << endl;

    for (int i = 0; S2[i] != '\0'; i++)
    {
       count2++; 
    }
    cout << count2 << endl; 

    for (int i = 0; S2[i] != '\0' ; i++)
    {
        S1[count1++] = S2[i];
    }
    
    // for (int i = 0; S1[i] != '\0'; i++) 
    // {
    //     cout << S1[i];
    // }
    S1[count1] = '\0';
    cout << S1 << endl;

    return 0;
}
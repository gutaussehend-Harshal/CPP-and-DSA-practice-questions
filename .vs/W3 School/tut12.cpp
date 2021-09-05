#include <iostream> 
using namespace std;

int main () {
//     int i = 1;
//     do {
//     cout << "I will bring my notebook tomorrow." << endl; 
//     i++;
// }
//     while (i<10); 


    // int i = 0;
    // while (i<5){
    // cout << "I will bring a notebook tomorrow." << endl;
    // i++;   

    
    // for (int i = 0; i < 5; i++) { 
    // cout << i << "\n";

    for (int i = 0; i <= 10; i++){ 

        if (i == 5){  

            continue; // continue is just skip the value hold by variable & execute code further again, whereas break is used to jump out of the loop.

    } 
        cout << i << endl; 
    }


    return 0;
}
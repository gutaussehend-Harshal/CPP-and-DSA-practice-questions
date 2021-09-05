// #include <iostream>
// using namespace std;

// int main () {
//     string cars[4] = {"Volvo","BMW","Ford","Tata"}; 
//     cout << cars[3] << endl; 
    
//     cars[0] = "Tesla"; 
//     cout << cars[0] << endl; 
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main () {
//     string cars[4] = {"Volvo","BMW","Ford","Tata"};
//     for (int i=0; i<4; i++){ 

//         cout << cars[i] << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main () {
//     string cars[4] = {"Volvo","BMW","Ford","Tata"};
//     for (int i=0; i<4; i++){  

//         cout << i <<" : "<< cars[i] << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main () {
//     string cars[6] = {"Volvo","BMW","Ford","Tata"};
//     cars[4] = "Tesla";
//     cars[5] = "Honda";

//     for (int i=0; i<6; i++){
//         cout << i << ":" << cars[i] << endl; 
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main () {
    string cars[6];
    cars[0] = "Tesla";
    cars[1] = "Honda";
    cars[2] = "Tata";
    cars[3] = "Volvo";
    cars[4] = "Mahindra"; 
    cars[5] = "BMW";

    for (int i=0; i<6; i++){
        cout << i << ":" << cars[i] << endl; 
    }

    return 0;
}
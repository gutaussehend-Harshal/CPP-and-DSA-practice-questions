#include <iostream>

// C++Program to Multiply Two Numbers

int main () {
    
    int cin, cout, product;
    std::cout << "Enter the integers: " << std::endl;
    std::cin >> cin >> cout;
    
    product = cin * cout;
    std::cout << "The multilplication of " << cin << " & " << cout << " is " << product << std::endl;
    return 0;
}
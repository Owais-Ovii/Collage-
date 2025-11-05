#include <iostream>


int main() {
    int guests, chairs;
    long long arrangements = 1;  

    std::cout << "Enter number of guests: ";
    std::cin >> guests;
    std::cout << "Enter number of chairs: ";
    std::cin >> chairs;

   
    for (int i = 0; i < chairs; i++) {
        arrangements *= (guests - i);
    }

    std::cout << "Number of possible arrangements: " << arrangements << std::endl;

    return 0;
}

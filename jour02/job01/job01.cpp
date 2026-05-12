#include <iostream>


int main() {
    int n;
    do {
        std::cout << "Hello, shit exercice!" << std::endl;
    }
    while (std::cout << "Enter a positive int : ", std::cin >> n, n <= 0);
    return 0;
}
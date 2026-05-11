#include <iostream>

int getUserIntInput(char i) { 

    int userInput; 

    std::cout << "Type an integer (called " << i << ") ";
    std::cin >> userInput; 

    return userInput;

}

void invert() {
    
    int m = getUserIntInput('m');
    int n = getUserIntInput('n'); 
    int temp;

    std::cout << "m before the swap : " << m << std::endl;
    std::cout << "n before the swap : " << n << std::endl;

    temp = m; 
    m = n; 
    n = temp; 

    std::cout << "m after the swap : " << m << std::endl;
    std::cout << "n after the swap : " << n << std::endl;

}

int main() {
    invert();
    return 0;
}
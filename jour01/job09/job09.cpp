#include <iostream>

int getUserIntInput(int i) { 

    int userInput; 

    std::cout << "Type an integer (number " << i << ") ";
    std::cin >> userInput; 

    return userInput;

}

void printBiggest() {   

    int i = getUserIntInput(1); 
    int j = getUserIntInput(2);
    int k = getUserIntInput(3); 

    if (i > j && i > k) {
        std::cout << "The biggest number is " << i << std::endl;
    }
    else if (j > i && j > k) { 
        std::cout << "The biggest number is " << j << std::endl;
    }
    else {
        std::cout << "The biggest number is " << k << std::endl;
    }
}

int main() {
    printBiggest();
}
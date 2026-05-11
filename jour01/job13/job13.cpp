#include <iostream>

int getUserIntInput() { 

    int userInput = 0; 

    while (userInput <= 5) {

    std::cout << "Type an integer, strictly above 5 ";
    std::cin >> userInput; 
    }

    return userInput;

}

int calculateTheSum(int max) { 

    int sum = 0;
    for (int i = 5; i <= max; i++) { 
        sum += (i*i*i); 
    }

    std::cout << "The total of squares between 5 and " << max << " is " << sum << std::endl;
}

int main() {
    calculateTheSum(getUserIntInput());
    return 0;
}
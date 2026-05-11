#include <iostream>

int getUserIntInput(int i) { 

    int userInput; 

    std::cout << "Type an integer (numero " << i << ") ";
    std::cin >> userInput; 

    return userInput;

}

float calculateTheAverage() { 

    int sum = 0; 

    for (int i = 0; i < 5; i++) { 
        sum += getUserIntInput(i+1);
    }

    float average = sum / 5; 
    std::cout << "The average is " << average << std::endl;

    return average;
}

int main() { 
    calculateTheAverage();
    return 0;
}
#include <iostream>
#include <string>

float getUserFloatInput(std::string description) { 

    float userInput; 

    std::cout << "Type the " << description;

    // Error management
    while (!(std::cin >> userInput)) {
        std::cout << "Invalid input. Please type a number: ";
    }

    return userInput;
}


void printTotalCost() {   

    float carrotPrice = getUserFloatInput("price of a kg of carrots "); 
    float carrotWeight = getUserFloatInput("number of kg of carrots ");
    float tax = 1.0 + getUserFloatInput("VAT (between 0 and 1) "); 

    float totalCost = carrotPrice * carrotWeight * tax; 

    std::cout << "The total price of the order is " << totalCost << std::endl;
}

int main() {
    
    printTotalCost();
}
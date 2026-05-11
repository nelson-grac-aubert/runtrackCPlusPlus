#include <iostream>
#include <string>

int getUserIntInput() { 

    int userInput = 0; 

    while (userInput <= 5) {

    std::cout << "Type an integer, a long one :) ";
    std::cin >> userInput; 
    }

    return userInput;

}

std::string convertIntToString(int i) { 

    std::string theString = std::to_string(i);

    return theString; 

}

std::string reverseTheString(std::string str) {

    std::string newString = ""; 

    for (int i = str.length() - 1; i >= 0; i--) { 
        newString += str[i]; 
    }

    return newString;
}

int convertTheStringBackToInt(std::string str) { 

    int newInt; 

    newInt = std::stoi(str);
    std::cout << "The reversed int is " << newInt << std::endl;

    return newInt;
}

int main() { 

    int theInt = getUserIntInput();
    std::string theString = convertIntToString(theInt); 
    std::string reversedString = reverseTheString(theString);
    int newInt = convertTheStringBackToInt(reversedString);

    return 0;
}
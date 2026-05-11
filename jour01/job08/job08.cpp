#include <iostream>

int getUserIntInput() 
{ 

    int userInput; 

    std::cout << "Type a year : ";
    std::cin >> userInput; 

    return userInput;

}

void printLeap() 
{   

    int i = getUserIntInput(); 

    if (i % 4 == 0) 
    { 
        std::cout << i << " is a leap year." << std::endl;
    }
    else 
    {
        std::cout << i << " is not a leap year." << std::endl;
    }
}

int main()
{
    printLeap();
}
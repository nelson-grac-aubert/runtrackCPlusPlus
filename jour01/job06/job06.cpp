#include <iostream>

int getUserIntInput() 
{ 

    int userInput; 

    std::cout << "Type a number : ";
    std::cin >> userInput; 

    return userInput;

}

void printMultiplicationTable() 
{   

    int factor = getUserIntInput(); 

    for (int i = 0; i < 11; i++) 
    {
        std::cout << i << " x " << factor << " = " << i * factor << std::endl;
    }
}

int main()
{
    printMultiplicationTable();
}
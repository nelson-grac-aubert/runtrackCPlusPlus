#include <iostream>

int getUserIntInput() 
{ 

    int userInput; 

    std::cout << "Type a number : ";
    std::cin >> userInput; 

    return userInput;

}

void printEvenOdd() 
{   

    int i = getUserIntInput(); 

    if (i % 2 == 0) 
    { 
        std::cout << i << "is even." << std::endl;
    }
    else 
    {
        std::cout << i << " is odd." << std::endl;
    }
}

int main()
{
    printEvenOdd();
}
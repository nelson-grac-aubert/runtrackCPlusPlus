#include <iostream>
#include <limits> // Import for cin error management 
using namespace std; 

int getUserInput(string description) {

    int input;
    bool inputIsValid = false;

    while (!inputIsValid) {
        cout << description << endl;
        cout << "Enter your number : ";
        cin >> input; 

        if (cin.fail()) {
            cout << "Invalid input! An integer is expected.\n";
            cin.clear(); // Removes the errors in cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore every character in the cin until you end up on an \n
        }
        else if (input < 0) {
            cout << "Invalid input! Integer must be positive.\n";
        }
        else if (input > 20) {
            cout << "Invalid input! Must be below 21 to avoid integer overflow\n";
        }
        else {
            inputIsValid = true; 
        }
    }

    return input;
}

void printResult (int n, int factor) {
    cout << "Factorial(" << n << ") is " << factor << endl;
}

int factorial(int n) { 

    int factor = 1;
    
    for (int i = 1; i <= n; i++) {
        factor *= i;
    }

    return factor;
}

int recursiveFactorial(int n) { 

    if (n == 0) { 
        return 1; 
    }
    return n * recursiveFactorial(n-1);
    
}

int main() {

    int userInput = getUserInput("Enter the number you want the factorial of");
    int fact = factorial(userInput);
    printResult(userInput, fact);
    int recursFact = recursiveFactorial(userInput);
    printResult(userInput, recursFact);
    return 0;
}

/* Impossible d'arriver a un stack overflow avec un max d'une trentaine de récursion? 
L'integer overflow arrive bien avant 
Pas sur de l'énoncé */
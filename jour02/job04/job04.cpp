#include <iostream>
#include <limits> // Import for cin error management 
using namespace std; 

// Utils

float add(float a, float b) {   return a + b;   }
float sub(float a, float b) {   return a - b;   }
float mul(float a, float b) {   return a * b;   }
float div(float a, float b) {   return a / b;   }

float getUserInput(string firstOrSecond) {

    float input;
    bool inputIsValid = false;

    while (!inputIsValid) {
        cout << "Enter the " << firstOrSecond << " element of your operation : ";
        cin >> input; 

        if (cin.fail()) {
            cout << "Invalid input! A float is expected.\n";
            cin.clear(); // Removes the errors in cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore every character in the cin until you end up on an \n
        }
        else {
            inputIsValid = true; 
        }
    }

    return input;
}

// Operations

void triggerAddition() { 
    cout << " ===== Let's add somme stuff  ===== \n";
    float a, b; 

    a = getUserInput("first");
    b = getUserInput("second");
    cout << a << " + " << b << " = " << add(a, b) << endl; 
}

void triggerSubstraction() { 
    cout << " ===== Let's substract things  ===== \n";
    float a, b; 

    a = getUserInput("first");
    b = getUserInput("second");
    cout << a << " - " << b << " = " << sub(a, b) << endl; 
}

void triggerMultiplication() { 
    cout << " ===== Let's multiply shit  ===== \n";
    float a, b; 

    a = getUserInput("first");
    b = getUserInput("second");
    cout << a << " x " << b << " = " << mul(a, b) << endl; 
}

void triggerDivision() { 
    cout << " ===== Let's divide and conquer  ===== \n";
    float a, b; 

    a = getUserInput("first");
    b = getUserInput("second");

    if (b == 0) { 
        cout << "Division by 0 is not allowed babygurl...\n";
        return;
    }
    
    cout << a << " / " << b << " = " << div(a, b) << endl; 
}


// Main menu 
void displayOptions() { 
    cout << " ===== Hello, Calculator :) ===== \n";
    cout << " Type 1 then enter for an addition\n";
    cout << " Type 2 then enter for a substraction\n";
    cout << " Type 3 then enter for a multiplication\n";
    cout << " Type 4 then enter for a division\n";
    cout << " Type anything else to exit!\n";
    cout << "Your choice : ";
}

void mainMenu() { 

    int decision;
    bool running = true;

    while(running) {

        displayOptions(); 

        cin >> decision;

        switch (decision) {
            case(1) : triggerAddition(); break;
            case(2) : triggerSubstraction(); break; 
            case(3) : triggerMultiplication(); break; 
            case(4) : triggerDivision(); break; 
            default : running = false; break;
        }
    }

}

int main() {

    mainMenu(); 
    cout << "See you hoe XOXO"; 
    return 0; 
}
#include <iostream>
#include <limits> // Import for cin error management 
#include <cmath> // Import for square root 
using namespace std; 

float getUserInput(string description) {

    float input;
    bool inputIsValid = false;

    while (!inputIsValid) {
        cout << description << endl;
        cout << "Enter your number : ";
        cin >> input; 

        if (cin.fail()) {
            cout << "Invalid input! A float is expected.\n";
            cin.clear(); // Removes the errors in cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore every character in the cin until you end up on an \n
        }
        else if (input < 0) {
            cout << "Invalid input! Number must be positive.\n";
        }
        else {
            inputIsValid = true; 
        }
    }

    return input;
}

double square (float toBeRooted) {
    return sqrt(toBeRooted); 
}

int main() {

    int userInput = getUserInput("Enter the positive number you want rooted"); 
    cout << "The square root of " << userInput << " is " << square(userInput); 

    return 0;
}
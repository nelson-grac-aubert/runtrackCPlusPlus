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
        else {
            inputIsValid = true; 
        }
    }

    return input;
}

void checkIfIsIncluded(int low, int high, int check) {
    if (low <= check && check <= high) {
        cout << check << " is between " << low << " and " << high << endl; 
    }
    else {
        cout << check << " is NOT between " << low << " and " << high << endl;
    }
}

int main() {

    int low, high, choice;

    while (1) {
        low = getUserInput("Chose the low bound of the interval");
        high = getUserInput("Chose the high bound of the interval");
        
        if (low <= high) {
            break;
        }

        cout << "The lowest bound of the interval must be smaller than the highest, duh\n";
    }

    choice = getUserInput("Chose your number to check");
    checkIfIsIncluded(low, high, choice); 

    return 1;
}
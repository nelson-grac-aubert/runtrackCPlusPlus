#include <iostream>
#include <limits> // Import for cin error management 
using namespace std; 

int getUserInput(string lowOrHigh) {

    int input;
    bool inputIsValid = false;

    while (!inputIsValid) {
        cout << "Chose the " << lowOrHigh << " bound of your interval\n";
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

void displayAllInts(int low, int high) { 
    int i = low;

    while (i <= high) {
        cout << i << endl;
        i++; 
    }
}

int main() {

    int low, high;
    bool running = true;

    while (running) {
        low = getUserInput("lower");
        high = getUserInput("higher");
        
        if (low <= high) {
            running = false;
        }

        cout << "The lowest bound of the interval must be smaller than the highest, duh\n";
    }

    displayAllInts(low, high);
    return 1;
}

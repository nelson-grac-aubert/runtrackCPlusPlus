#include <iostream>
#include <limits> // Import for cin error management 
using namespace std; 

int getUserInput() {

    int input;
    bool inputIsValid = false;

    while (!inputIsValid) {
        cout << "Enter your grade : ";
        cin >> input; 

        if (cin.fail()) {
            cout << "Invalid input! An integer is expected.\n";
            cin.clear(); // Removes the errors in cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore every character in the cin until you end up on an \n
        }
        else if (!(0 <= input && input <= 20)) { 
            cout << "The grade must be between 0 and 20\n";
        }
        else {
            inputIsValid = true; 
        }
    }

    return input;
}

void check(int toBeCheckedIsToBeSeen) {
    if (toBeCheckedIsToBeSeen < 10) {
        cout << "Boohoo you failed\n";
    }
    else {
        cout << "Yippee you passed";
    }
}

int main() {
    
    int checkMeDaddy = getUserInput(); 
    check(checkMeDaddy); 
    return 0;
}
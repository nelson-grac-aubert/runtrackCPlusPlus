#include <iostream>
#include <limits> // Import for cin error management 
using namespace std; 

int getUserInput() {

    int input;
    bool inputIsValid = false;

    while (!inputIsValid) {
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

void feeFoo(int n) { 

    for (int i = 0; i <= n; i++) { 

        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " feefoo\n"; 
        }
        else if (i % 3 == 0) {
            cout << i << " fee\n";
        }
        else if (i % 5 == 0) {
            cout << i << " foo\n"; 
        }
        else {
            cout << i << endl;
        }
    }
}

int main() {
    feeFoo(getUserInput()); 
    return 0;
}
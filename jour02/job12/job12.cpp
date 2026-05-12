#include <iostream>
#include <limits>

using namespace std;

int getUserInput(string description) {

    int input;
    bool isValid = false;

    while (!isValid) {

        cout << description << "\nEnter your number : ";
        cin >> input;

        if (cin.fail()) {
            cout << "Invalid input! An integer is expected.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (input < 0) {
            cout << "Invalid input! Integer must be positive.\n";
        } else {
            isValid = true;
        }
    }

    return input;
}

float harmonicSequence (int sequenceEnd) {

    float sum = 0.0; 

    for (float i = 1.0; i <= sequenceEnd; i++) {
        sum += 1 / i; 
    }

    return sum;
}

int main() { 

    cout << harmonicSequence(getUserInput("Enter the top limit of your harmonic sequence."));

}
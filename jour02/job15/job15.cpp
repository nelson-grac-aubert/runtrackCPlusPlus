#include <iostream>
#include <limits> // Import for cin error management 

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

void printFibonacci(int max) { 

    int fNMinusTwo = 0;
    int fNMinusOne = 1;
    int fN = 1 ;

    if (0 < max) {
        cout << 0 << endl; 
    }
    if (1 < max) {
        cout << 1 << endl; 
    }

    while (fN < max) { 

        cout << fN << endl;

        int next = fN + fNMinusOne;

        fNMinusTwo = fNMinusOne;    
        fNMinusOne = fN;         
        fN = next;               
    }

}

int main() {
    printFibonacci(getUserInput("Your Fibonacci Sequence will end before this number")); 
    return 0;
}
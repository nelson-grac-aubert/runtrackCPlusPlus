#include "../include/job06.hpp"

int getUserInput(int numero) {

    int input;
    bool inputIsValid = false;

    while (!inputIsValid) {
        cout << "Enter your int numero " << numero + 1 << " :";
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

void buildTheArray(int myArray[10]) { 
    for (int i = 0; i < 10; i++) {
        myArray[i] = getUserInput(i);
    }
}

int countAboveFive(int myArray[10]) {

    int counter = 0;

    for (int i = 0; i < 10; i++) {
        if (myArray[i] >= 5) {
            counter += 1;
        }
    }

    cout << "The array has " << counter << " numbers above 5" << endl; 

    return counter;
}

int main() { 

    int theArray[10]; 
    buildTheArray(theArray); 
    countAboveFive(theArray);
    return 0;

}
#include "../include/job08.hpp"

string getUserInput() {

    string input;
    bool inputIsValid = false;

    while (!inputIsValid) {
        cout << "Enter your string : ";
        getline(cin, input); // reads the entire line, spaces included

        if (input.empty()) {
            cout << "Invalid input! A string is expected.\n";
        } else {
            inputIsValid = true;
        }
    }

    return input;
}

char* buildTheArray(string theString) { 
 
    const int SIZE = theString.length();

    char* theArray = new char[SIZE+1];

    for (int i = 0; i < SIZE; i++) { 
        theArray[i] = theString[i]; 
    }

    theArray[SIZE] = '\0';

    return theArray;
}

int main() {

    string theString = getUserInput();

    char* theArray = buildTheArray(theString); 

    cout << "Your string as a char array : " << theArray << "\n";

    delete[] theArray;
    theArray = nullptr;

    return 0;
}
#include "../include/job09.hpp"

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

bool isIncluded(const string& included, const string& including) {
    int lenIncluded  = included.length();
    int lenIncluding = including.length();

    for (int i = 0; i <= lenIncluding - lenIncluded ; i++) {
        int matchCount = 0;
        for (int j = 0; j < lenIncluded ; j++) {
            if (including[i + j] == included[j])
                matchCount++;
            else
                break;
        }
        if (matchCount == lenIncluded)
            return true;
    }
    return false;
}

int main() {

    string stringOne = getUserInput();
    string stringTwo = getUserInput();

    if (isIncluded(stringOne, stringTwo)) {
        cout << stringOne << " can be found inside " << stringTwo << endl;
    }
    else {
        cout << stringOne << " CANNOT be found inside " << stringTwo << endl;
    }

    return 0;
}
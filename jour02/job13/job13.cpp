#include <iostream>
#include <string>

using namespace std;

/* Transform a number into a string
Add 2 blank spaces after a digit, 1 blank space after 2 digits */
string addBlankSpace(int anInt) { 

    string stringifiedResult = to_string(anInt); 

    if (stringifiedResult.length() == 1) {
        stringifiedResult += "  ";
    }
    else if (stringifiedResult.length() == 2) {
        stringifiedResult += " ";
    }

    return stringifiedResult;
}

void printFirstLines() {
    cout << "   | 1  2  3  4  5  6  7  8  9  10\n";
    cout << "-----------------------------------\n";
}

void printStartOfLine(int factor) { 
    cout << addBlankSpace(factor) << "| ";
}

void printTheActualLine(int factor) { 
    for (int i = 1; i <= 10; i++) {
        cout << addBlankSpace(factor * i);
    }
}

int main() {

    printFirstLines();

    for (int i = 1; i <= 10; i++) {
        printStartOfLine(i); 
        printTheActualLine(i); 

        cout << endl;
    }

    return 0;

}


#include <iostream>
#include <string>
using namespace std;

int countTheCharacters (string myString) { 

    int stringLength = myString.length();  
    cout << "The string has " << stringLength << " characters" << endl;
    return stringLength;

}

int main() {
    countTheCharacters("Hello, World!");
    return 0;
}
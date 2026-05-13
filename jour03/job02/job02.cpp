#include <iostream>
#include <string>
using namespace std;

bool isAVowel(char ch) {
    if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117 || ch == 121) {
        return true;
    }
    return false;
}

string deleteVowels(string aString) {

    for (int i = 0; i < aString.length(); i++) {

        if (isAVowel(aString[i])) {
            aString.erase(i, 1);
        }
    }

    cout << aString << endl;
    return aString;
}

int main() {

    deleteVowels("vive la Plateforme!");
    return 0;
    
}
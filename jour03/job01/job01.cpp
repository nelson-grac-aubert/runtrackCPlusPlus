#include <iostream>
#include <string>
using namespace std;

string capitalizeString(string lowercaseString) {

    for (int i = 0; i < lowercaseString.length(); i++) {

        if (lowercaseString[i] <= 122 && lowercaseString[i] >= 97) {
            lowercaseString[i] -= 32; 
        }
    }

    cout << lowercaseString << endl;
    return lowercaseString;
}

int main() {

    capitalizeString("vive la Plateforme!");
    
}
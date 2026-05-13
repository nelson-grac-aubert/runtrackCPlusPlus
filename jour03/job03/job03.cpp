#include <iostream>
#include <string>
using namespace std;

bool areTheSameStrings (string string1, string string2) { 

    if (string1.length() != string2.length()) {
        cout << "Not even gonna iterate through the strings, they're not the same size" << endl; 
        return false;
    }
    else {
        for (int i = 0; i < string1.length(); i++) {
            if (string1[i] != string2[i]) {
                cout << "Found a different character at index " << i << ", strings are not the same" << endl; 
                return false;
            }
        }
    }

    cout << "The strings are identical" << endl;
    return true;

}

int main() {
    areTheSameStrings("Hello, World!", "Hello, World!");
    areTheSameStrings("Hello, World!", "Hello, C++");
    areTheSameStrings("Hello, World!", "Hello, Zorld!");
}
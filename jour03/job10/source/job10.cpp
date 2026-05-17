#include "../include/job10.hpp"

string getUserInput() {

    string input;
    bool inputIsValid = false;

    while (!inputIsValid) {
        cout << "Enter your string : ";
        getline(cin, input);

        if (input.empty()) {
            cout << "Invalid input! A string is expected.\n";
        } else {
            inputIsValid = true;
        }
    }

    return input;
}

vector<string> buildWordList(const string& inputString, const string& fixed) {

    vector<string> words;
    stringstream ss(inputString);
    string word;

    while (ss >> word)
        words.push_back(word);

    words.push_back(fixed);
    sort(words.begin(), words.end());

    return words;
}

int main() {

    string userString = getUserInput();
    string helloString = "Bonjour";

    vector<string> result = buildWordList(userString, helloString);

    for (string w : result)
        cout << w << " ";
    cout << "\n";

    return 0;
}
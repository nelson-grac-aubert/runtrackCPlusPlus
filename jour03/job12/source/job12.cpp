#include "../include/job12.hpp"

const int MAX_TRIES = 7;

// srand seeds the random generator with current time — different result each run
int generateMysteryNumber() {
    srand(time(nullptr));
    return rand() % 101; // 0 to 100 inclusive
}

int getUserGuess() {

    int guess;
    bool inputIsValid = false;

    while (!inputIsValid) {
        cout << "Enter your guess (0-100) : ";
        cin >> guess;

        if (cin.fail() || guess < 0 || guess > 100) {
            cout << "Invalid input! Please enter a number between 0 and 100.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            inputIsValid = true;
        }
    }

    return guess;
}

void giveHint(int guess, int mystery) {
    if (guess < mystery)
        cout << "Too low!\n";
    else
        cout << "Too high!\n";
}

void playGame(int mystery) {

    int triesLeft = MAX_TRIES;

    while (triesLeft > 0) {
        cout << "\nAttempts left : " << triesLeft << "\n";

        int guess = getUserGuess();

        if (guess == mystery) {
            cout << "Correct! You found the mystery number in " << MAX_TRIES - triesLeft + 1 << " attempt(s). You win!\n";
            return;
        }

        giveHint(guess, mystery);
        triesLeft--;
    }

    cout << "No more attempts! The mystery number was " << mystery << ". You lose!\n";
}

int main() {

    cout << "=== Mystery Number ===\n";
    cout << "Find the number between 0 and 100. You have " << MAX_TRIES << " attempts.\n";

    int mystery = generateMysteryNumber();
    playGame(mystery);

    return 0;
}
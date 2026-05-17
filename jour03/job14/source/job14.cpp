#include "../include/job14.hpp"

// a palindrome reads the same forwards and backwards
bool isPalindrome(const string& word) {

    int left = 0;
    int right = word.length() - 1;

    // walk inward from both ends — stop if a mismatch is found
    while (left < right) {
        if (word[left] != word[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main() {

    const int SIZE = 5;
    string tab[SIZE] = {"radar", "hello", "lvel", "stats", "world"};

    cout << "Palindromes found :\n";
    for (int i = 0; i < SIZE; i++) {
        if (isPalindrome(tab[i]))
            cout << "  " << tab[i] << "\n";
    }

    return 0;
}
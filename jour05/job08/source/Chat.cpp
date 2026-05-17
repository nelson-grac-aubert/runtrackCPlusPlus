#include "../include/Chat.hpp"

void Chat::crier()  { cout << "Miaou!\n"; }
void Chat::manger() { cout << "Le chat mange du poisson.\n"; }

// job10: overload — different signature, checks the food type
void Chat::manger(const string& nourriture) {
    if (nourriture == "des croquettes")
        cout << "Le chat mange des croquettes.\n";
    else
        cout << "Le chat refuse de manger " << nourriture << ".\n";
}

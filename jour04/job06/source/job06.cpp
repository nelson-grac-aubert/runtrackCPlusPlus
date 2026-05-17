#include "../include/job06.hpp"

int main() {
    int    entier    = 17;
    float  flottant  = 3.14f;
    double reel      = 123.345;
    string caractere = "La Plateforme";

    // cast to void* to display address as hex for all types consistently
    cout << "entier    @ " << (void*)&entier    << " = " << entier    << "\n";
    cout << "flottant  @ " << (void*)&flottant  << " = " << flottant  << "\n";
    cout << "reel      @ " << (void*)&reel      << " = " << reel      << "\n";
    cout << "caractere @ " << (void*)&caractere << " = " << caractere << "\n";

    return 0;
}

#include "../include/Joueur.hpp"

int main() {
    // job03: one object per constructor
    Joueur j1;
    Joueur j2(5, 10);
    Joueur j3(3, 7, "Arthas");

    cout << "=== Initial positions ===\n";
    j1.afficher();
    j2.afficher();
    j3.afficher();

    // job01: simulate movements
    cout << "\n=== Movements ===\n";
    j3.deplacer(2, -1);
    j3.afficher();
    j3.deplacer(-5, 3);
    j3.afficher();

    // job04: chained setters via this
    cout << "\n=== Chained setters ===\n";
    j1.setNom("Thrall").setX(10).setY(5);
    j1.afficher();

    return 0;
}

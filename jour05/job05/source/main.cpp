#include "../include/Etudiant.hpp"
#include "../include/Personne.hpp"
#include "../include/Contact.hpp"

int main() {

    // ── job05 : Etudiant ─────────────────────────────────────────────────────
    cout << "=== Etudiants ===\n";
    Etudiant e1("Dupont", "Alice", 20, 1001);
    Etudiant e2("Martin", "Bob",   22, 1002);
    e1.afficher();
    e2.afficher();

    // ── job06 : Personne ─────────────────────────────────────────────────────
    cout << "\n=== Personnages ===\n";
    Personne guerrier("Guerrier", 100, 15.5f);
    Personne mage("Mage",         60,  5.0f);
    Personne voleur("Voleur",     80, 10.0f);

    guerrier.afficher();
    mage.afficher();
    voleur.afficher();

    guerrier.setPointsDeVie(75);
    mage.setDefense(8.5f);
    cout << "\n-- After modifications --\n";
    guerrier.afficher();
    mage.afficher();

    // ── job07 : Contact ──────────────────────────────────────────────────────
    cout << "\n=== Contacts ===\n";
    Contact c1("Alice", 612345678);
    Contact c2("Bob",   698765432);

    // copy constructor — creates independent copies
    Contact c1Copy(c1);
    Contact c2Copy(c2);

    c1Copy.setNumero(600000001);
    c2Copy.setNumero(600000002);

    cout << "Original : "; c1.afficher();
    cout << "Copy     : "; c1Copy.afficher();
    cout << "Original : "; c2.afficher();
    cout << "Copy     : "; c2Copy.afficher();

    return 0;
}

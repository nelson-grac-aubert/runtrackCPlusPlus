#include "../include/Etudiant.hpp"

Etudiant::Etudiant(const string& nom, const string& prenom, int age, int matricule)
    : nom(nom), prenom(prenom), age(age), matricule(matricule) {}

void Etudiant::afficher() const {
    cout << "Etudiant #" << matricule << " : "
         << prenom << " " << nom << " (" << age << " ans)\n";
}

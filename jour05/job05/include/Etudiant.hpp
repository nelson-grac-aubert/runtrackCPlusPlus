#pragma once
#include <iostream>
#include <string>
using namespace std;

class Etudiant {
private:
    string nom;
    string prenom;
    int    age;
    int    matricule;

public:
    // initialization list sets members before the constructor body runs
    Etudiant(const string& nom, const string& prenom, int age, int matricule);
    void afficher() const;
};

#include "../include/Personne.hpp"

Personne::Personne(const string& nom, int pointsDeVie, float defense)
    : nom(nom), pointsDeVie(pointsDeVie), defense(defense) {}

void Personne::afficher() const {
    cout << nom << " | PV: " << pointsDeVie << " | Défense: " << defense << "\n";
}

void Personne::setNom(const string& nom) { this->nom = nom; }
void Personne::setPointsDeVie(int pv)    { this->pointsDeVie = pv; }
void Personne::setDefense(float defense) { this->defense = defense; }

string Personne::getNom()         const { return nom; }
int    Personne::getPointsDeVie() const { return pointsDeVie; }
float  Personne::getDefense()     const { return defense; }

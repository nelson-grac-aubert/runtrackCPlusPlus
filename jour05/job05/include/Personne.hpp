#pragma once
#include <iostream>
#include <string>
using namespace std;

class Personne {
private:
    string nom;
    int    pointsDeVie;
    float  defense;

public:
    Personne(const string& nom, int pointsDeVie, float defense);

    void afficher() const;

    // setters
    void setNom(const string& nom);
    void setPointsDeVie(int pv);
    void setDefense(float defense);

    // getters
    string getNom()         const;
    int    getPointsDeVie() const;
    float  getDefense()     const;
};

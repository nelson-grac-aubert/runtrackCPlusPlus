#pragma once
#include <iostream>
#include <string>
using namespace std;

class Joueur {
private:
    int    x;
    int    y;
    string nom;

public:
    Joueur();                                     // job03: default — x=0, y=0
    Joueur(int x, int y);                         // job03: coordinates only
    Joueur(int x, int y, const string& nom);      // job03: coordinates + name

    void init(int x, int y, const string& nom);   // job01: manual initializer
    void afficher() const;                         // job01: display state
    void deplacer(int dx, int dy);                 // job01: move by delta

    // job04: setters use this explicitly — return *this enables chaining
    Joueur& setX(int x);
    Joueur& setY(int y);
    Joueur& setNom(const string& nom);

    int    getX()   const;
    int    getY()   const;
    string getNom() const;
};

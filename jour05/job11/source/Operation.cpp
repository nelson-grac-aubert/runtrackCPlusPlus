#include "../include/Operation.hpp"

Operation::Operation(double valeur) : valeur(valeur) {}

Operation Operation::operator+(const Operation& other) const { return Operation(valeur + other.valeur); }
Operation Operation::operator-(const Operation& other) const { return Operation(valeur - other.valeur); }
Operation Operation::operator*(const Operation& other) const { return Operation(valeur * other.valeur); }

Operation Operation::operator/(const Operation& other) const {
    if (other.valeur == 0.0) {
        cerr << "Error: division by zero\n";
        return Operation(0.0);
    }
    return Operation(valeur / other.valeur);
}

bool Operation::operator==(const Operation& other) const { return valeur == other.valeur; }
bool Operation::operator!=(const Operation& other) const { return valeur != other.valeur; }
bool Operation::operator>(const Operation& other)  const { return valeur >  other.valeur; }
bool Operation::operator<(const Operation& other)  const { return valeur <  other.valeur; }

ostream& operator<<(ostream& os, const Operation& op) {
    os << op.valeur;
    return os;
}

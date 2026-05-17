#pragma once
#include <iostream>
using namespace std;

class Operation {
private:
    double valeur;

public:
    Operation(double valeur);

    // arithmetic operators — return a new Operation, don't modify operands
    Operation operator+(const Operation& other) const;
    Operation operator-(const Operation& other) const;
    Operation operator*(const Operation& other) const;
    Operation operator/(const Operation& other) const;

    // comparison operators
    bool operator==(const Operation& other) const;
    bool operator!=(const Operation& other) const;
    bool operator>(const Operation& other)  const;
    bool operator<(const Operation& other)  const;

    // friend: operator<< needs access to private valeur
    friend ostream& operator<<(ostream& os, const Operation& op);
};

#pragma once
#include "Animal.hpp"

class Chien : public Animal {
public:
    void crier()  override;
    void manger() override;
};

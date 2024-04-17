//
// Created by Mario on 4/17/2024.
//

#ifndef UNISCORE_CLASACUPOINTER_H
#define UNISCORE_CLASACUPOINTER_H

#endif //UNISCORE_CLASACUPOINTER_H
#include "../Headers/campionat.h"
class ClasaCuPointer {
private:
    Campionat *pointerBaza;
public:
    ClasaCuPointer();
    void setPointerDeBaza(Campionat *pointer);
    int apelCalculPct(const Echipa &echipa) const;
};
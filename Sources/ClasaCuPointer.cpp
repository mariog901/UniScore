//
// Created by Mario on 4/17/2024.
//
#include "../Headers/ClasaCuPointer.h"
ClasaCuPointer::ClasaCuPointer() : pointerBaza(nullptr) {}
void ClasaCuPointer::setPointerDeBaza(Campionat* pointer) {
    pointerBaza = pointer;
}
int ClasaCuPointer::apelCalculPct(const Echipa& echipa) const {
    if (pointerBaza) {
        return pointerBaza->calculPct(echipa);
    }
    return 0;
}
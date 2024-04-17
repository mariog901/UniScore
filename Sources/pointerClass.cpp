//
// Created by Mario on 4/17/2024.
//
#include "../Headers/pointerClass.h"
#include "../Headers/jucator.h"
pointerClass::pointerClass(Jucator* pointer) : ptr(pointer) {}
void pointerClass::printare() {
    ptr->print();
}
//
// Created by Mario on 4/3/2024.
//
#include "../Headers/jucator.h"

Jucator::Jucator(const Jucator &jucator){
    this->nume=jucator.nume;
    this->varsta=jucator.varsta;
    this->pozitie=jucator.pozitie;
}
Jucator &Jucator::operator=(const Jucator &jucator){
    this->varsta = jucator.varsta;
    this->nume = jucator.nume;
    this->pozitie=jucator.pozitie;
    return *this;
}


std::ostream &operator<<(std::ostream &out, const Jucator &jucator) {
    out << "nume: " << jucator.nume << ", varsta: " << jucator.varsta<< ", Pozitia: "<<jucator.pozitie<<'\n';
    return out;
}

std::istream &operator>>(std::istream &in,  Jucator &jucator) {
    in >> jucator.nume >> jucator.varsta>>jucator.pozitie;
    return in;
}



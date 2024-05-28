//
// Created by Mario on 4/3/2024.
//
#include "../Headers/jucator.h"

Jucator::Jucator(const Jucator &jucator){
    this->nume=jucator.nume;
    this->varsta=jucator.varsta;
    this->pozitie=jucator.pozitie;
    this->nrmeciuri=jucator.nrmeciuri;
    this->nrgoluri=jucator.nrgoluri;
    this->nrpasegol=jucator.nrpasegol;
    this->nrcartonasegalbene=jucator.nrcartonasegalbene;
    this->nrcartonaserosii=jucator.nrcartonaserosii;
}
Jucator &Jucator::operator=(const Jucator &jucator) {
    if (this == &jucator) return *this; // Verificare auto-atribuire
    this->nume = jucator.nume;
    this->varsta = jucator.varsta;
    this->pozitie = jucator.pozitie;
    this->nrmeciuri = jucator.nrmeciuri;
    this->nrgoluri = jucator.nrgoluri;
    this->nrpasegol = jucator.nrpasegol;
    this->nrcartonasegalbene = jucator.nrcartonasegalbene;
    this->nrcartonaserosii = jucator.nrcartonaserosii;
    return *this;
}


std::ostream &operator<<(std::ostream &out, const Jucator &jucator) {
    out << "Nume: " << jucator.nume << ", Varsta: " << jucator.varsta<< ", Pozitia: "<<jucator.pozitie<<" NrMeciuri: " << jucator.nrmeciuri<<" NrGoluri: "<<jucator.nrgoluri<<" NrPaseGol: "<<jucator.nrpasegol<<" NrCartonaseGalbene: "<<jucator.nrcartonasegalbene << " NrCartonaseRosii : "<<jucator.nrcartonaserosii<<'\n';
    return out;
}

std::istream &operator>>(std::istream &in,  Jucator &jucator) {
    in >> jucator.nume >> jucator.varsta>>jucator.pozitie>>jucator.nrmeciuri>>jucator.nrgoluri>>jucator.nrpasegol>>jucator.nrcartonasegalbene>>jucator.nrcartonaserosii;
    return in;
}
void Jucator::print() const {
    std::cout << "Jucatorul:" <<nume << " are varsta de : " << varsta << "ani , joaca pe pozitia "<< pozitie <<" are un numar de "<<nrmeciuri<<" meciuri , "<<nrgoluri<<" goluri , " <<nrpasegol<<" pase de gol , " <<nrcartonasegalbene << " cartonase galbene si "<< nrcartonaserosii<<" cartonase rosii."<<'\n';
}

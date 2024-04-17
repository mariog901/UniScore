//
// Created by Mario on 4/16/2024.
//
#include "../Headers/matches.h"
int Matches::getNrMeciuri() const {
    return nrmec;
}

void Matches::setNrmeciuri(int nrmeciuri) {
    Matches::nrmec = nrmeciuri;
}
void Matches::print() const {
std::cout<<"Jucatorul "<<this->getNume()<< " are in acest sezon un numar de : " << this->nrmec <<" meciuri. " << std::endl;
}
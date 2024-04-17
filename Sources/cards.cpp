//
// Created by Mario on 4/16/2024.
//
#include "../Headers/cards.h"
int Cards::getNrcartonasegalbene() const {
    return nrcartonasegalbene;
}

void Cards::setNrcartonasegalbene(int nrcartonasegalbene) {
    Cards::nrcartonasegalbene = nrcartonasegalbene;
}

int Cards::getNrcartonaserosii() const {
    return nrcartonaserosii;
}

void Cards::setNrcartonaserosii(int nrcartonaserosii) {
    Cards::nrcartonaserosii = nrcartonaserosii;
}
void Cards::print() const {
std::cout<<"Jucatorul "<<this->getNume()<< " are in acest sezon un numar de : "<<this->nrcartonasegalbene<< " cartonase galbene si " << this->nrcartonaserosii << " cartonase rosii " << std::endl;
}

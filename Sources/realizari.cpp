#include "../Headers/realizari.h"
int Realizari::getNrgoluri() const {
    return nrgoluri;
}

void Realizari::setNrgoluri(int nrgoluri)  {
    Realizari::nrgoluri = nrgoluri;
}
int Realizari::getNrpase() const {
    return nrpase;
}
void Realizari::setNrpase(int nrpase) {
    Realizari::nrpase = nrpase;
}
void Realizari::print() const {
std::cout<<"Jucatorul "<<this->getNume()<< " are in acest sezon un numar de : "<<this->nrgoluri<< "goluri " << " si " << this->nrpase << "pase de gol" << std::endl;
}
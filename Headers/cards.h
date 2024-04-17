//
// Created by Mario on 4/16/2024.
//

#ifndef UNISCORE_CARDS_H
#define UNISCORE_CARDS_H

#endif //UNISCORE_CARDS_H
#include "../Headers/jucator.h"
class Cards : public Jucator{
private:
    int nrcartonasegalbene;
    int nrcartonaserosii;

public:
    Cards()=default;
    Cards(const std::string &nume,unsigned int varsta, std::string pozitie,int nrcartonasegalbene,int nrcartonaserosii):Jucator(nume,varsta,pozitie),nrcartonasegalbene(nrcartonasegalbene),nrcartonaserosii(nrcartonaserosii){}
    ~Cards() =default;

    int getNrcartonasegalbene() const ;

    void setNrcartonasegalbene(int nrcartonasegalbene);

    int getNrcartonaserosii() const;

    void setNrcartonaserosii(int nrcartonaserosii);
    void print() const;
};
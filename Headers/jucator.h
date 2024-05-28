//
// Created by Mario on 4/3/2024.
//

#ifndef JUCATOR_H
#define JUCATOR_H
#include<iostream>
class Jucator {
private:
    std::string nume;
    unsigned int varsta;
    std::string pozitie;
    unsigned int nrcartonasegalbene;
    unsigned int nrcartonaserosii;
    unsigned int nrmeciuri;
    unsigned int nrgoluri;
    unsigned int nrpasegol;


public:
    Jucator()=default;
    explicit Jucator(const std::string &nume,unsigned int varsta, std::string pozitie, unsigned int nrmeciuri , unsigned int nrgoluri , unsigned int nrpasegol , unsigned int nrcartonasegalbene,unsigned int nrcartonaserosii ) : nume(nume) , varsta(varsta), pozitie(pozitie) , nrmeciuri(nrmeciuri) , nrgoluri(nrgoluri) , nrpasegol(nrpasegol), nrcartonasegalbene(nrcartonasegalbene), nrcartonaserosii(nrcartonaserosii) {}

    Jucator(const Jucator &jucator);
    Jucator &operator=(const Jucator &jucator);
    virtual ~Jucator()=default;
    const std::string &getNume() const{ return nume;}
    unsigned int getVarsta() const { return varsta;}
    const std::string getPozitie() const { return pozitie; }
    unsigned int getNrMeciuri() const{return nrmeciuri;}
    unsigned int getNrGoluri() const{return nrgoluri;}
    unsigned int getNrPaseGol() const{return nrpasegol;}
    unsigned int getCartonaseGalbene() const{return nrcartonasegalbene;}
    unsigned int getCartonaseRosii() const{return nrcartonaserosii;}

    friend std::ostream &operator<<(std::ostream &out, const Jucator &jucator) ;

    friend std::istream &operator>>(std::istream &in,  Jucator &jucator) ;
    virtual void print() const;

};
#endif //JUCATOR_H




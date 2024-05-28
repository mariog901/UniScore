//
// Created by Mario on 4/3/2024.
//

#ifndef JUCATOR_H
#define JUCATOR_H
#include<iostream>
#include <utility>
class Jucator {
private:
    std::string nume;
    unsigned int varsta{};
    std::string pozitie;
    unsigned int nrcartonasegalbene{};
    unsigned int nrcartonaserosii{};
    unsigned int nrmeciuri{};
    unsigned int nrgoluri{};
    unsigned int nrpasegol{};


public:
    Jucator()=default;
    Jucator(const std::string &nume,unsigned int varsta, std::string pozitie, unsigned int nrmeciuri , unsigned int nrgoluri , unsigned int nrpasegol , unsigned int nrcartonasegalbene,unsigned int nrcartonaserosii ) : nume(nume) , varsta(varsta), pozitie(std::move(pozitie)) , nrmeciuri(nrmeciuri) , nrgoluri(nrgoluri) , nrpasegol(nrpasegol), nrcartonasegalbene(nrcartonasegalbene), nrcartonaserosii(nrcartonaserosii) {}

    Jucator(const Jucator &jucator);
    Jucator &operator=(const Jucator &jucator);
    virtual ~Jucator()=default;
    [[nodiscard]] const std::string &getNume() const{ return nume;}
    [[nodiscard]] unsigned int getVarsta() const { return varsta;}
    [[nodiscard]] const std::string getPozitie() const { return pozitie; }
    [[nodiscard]] unsigned int getNrMeciuri() const{return nrmeciuri;}
    [[nodiscard]] unsigned int getNrGoluri() const{return nrgoluri;}
    [[nodiscard]] unsigned int getNrPaseGol() const{return nrpasegol;}
    [[nodiscard]] unsigned int getCartonaseGalbene() const{return nrcartonasegalbene;}
    [[nodiscard]] unsigned int getCartonaseRosii() const{return nrcartonaserosii;}

    friend std::ostream &operator<<(std::ostream &out, const Jucator &jucator) ;

    friend std::istream &operator>>(std::istream &in,  Jucator &jucator) ;
    virtual void print() const;

};
#endif //JUCATOR_H




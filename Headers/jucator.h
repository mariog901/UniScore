//
// Created by Mario on 4/3/2024.
//

#ifndef UNISCORE_JUCATOR_H
#define UNISCORE_JUCATOR_H
#endif //UNISCORE_JUCATOR_H
#include<iostream>
class Jucator {
private:
    std::string nume;
    unsigned int varsta;
    std::string pozitie;
public:
    Jucator()=default;
    Jucator(const std::string &nume,unsigned int varsta, std::string pozitie) : nume(nume) , varsta(varsta), pozitie(pozitie) {}

    Jucator(const Jucator &jucator);
    Jucator &operator=(const Jucator &jucator);
    ~Jucator()=default;
    const std::string &getNume() const{ return nume;}
    unsigned int getVarsta() const { return varsta;}
    const std::string getPozitie() const { return pozitie; }

    friend std::ostream &operator<<(std::ostream &out, const Jucator &jucator) ;

    friend std::istream &operator>>(std::istream &in,  Jucator &jucator) ;
};



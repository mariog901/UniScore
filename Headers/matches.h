//
// Created by Mario on 4/16/2024.
//

#ifndef UNISCORE_MATCHES_H
#define UNISCORE_MATCHES_H

#endif //UNISCORE_MATCHES_H
#include "../Headers/jucator.h"
class Matches : public Jucator{
private:
    static int nrmec;

public:
    Matches()=default;
    Matches(const std::string &nume,unsigned int varsta, std::string pozitie,int nrmeciuri):Jucator(nume,varsta,pozitie),nrmeciuri(nrmeciuri){}
    ~Matches() =default;
    int getNrMeciuri() const;

    static void setNrmeciuri(int nrmeciuri);
    void print() const ;
};
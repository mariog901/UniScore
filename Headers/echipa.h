//
// Created by Mario on 4/3/2024.
//

#ifndef UNISCORE_ECHIPA_H
#define UNISCORE_ECHIPA_H

#endif //UNISCORE_ECHIPA_H
#include<iostream>
#include<vector>
#include "../Headers/jucator.h"
class Echipa {
private:
    std::string nume;
    std::vector<Jucator> jucatori;
    int victorii;
    int egaluri;
    int infrangeri;

public:
    explicit Echipa(const std::string &numeEchipa, const std::vector<Jucator> &fotbalisti) : nume(numeEchipa),jucatori(fotbalisti) {}
    Echipa()=default;
    Echipa(const std::string &nume):nume(nume),victorii(victorii),egaluri(egaluri),infrangeri(infrangeri){}

    ~Echipa()=default;

    const std::string getNume() const { return nume;}
    void adaugaVictorie();
    void adaugaEgal();
    int getVictorii() const;
    int getEgaluri() const;
    void setVictorii(int v);
    void setEgaluri(int e);
    const std::vector<Jucator> getPlayers() const {return jucatori; }



    void addPlayer(const Jucator&jucator);
    void afisare() const ;
    friend std::ostream &operator<<(std::ostream &out, const Echipa &echipa);
    
};


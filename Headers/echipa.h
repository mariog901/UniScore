//
// Created by Mario on 4/3/2024.
//

#ifndef UNISCORE_ECHIPA_H
#define UNISCORE_ECHIPA_H


#include<iostream>
#include <utility>
#include<vector>
#include<stdexcept>
#include "../Headers/jucator.h"
class Echipa {
private:
    std::string nume;
    std::vector<Jucator> jucatori;
    int victorii{};
    int egaluri{};
    int infrangeri{};

public:
    explicit Echipa(std::string numeEchipa, const std::vector<Jucator> &fotbalisti) : nume(std::move(numeEchipa)),jucatori(fotbalisti) {}
    Echipa()=default;
    explicit Echipa(std::string nume):nume(std::move(nume)),victorii(0),egaluri(0),infrangeri(0){}

    ~Echipa()=default;

    [[nodiscard]] std::string getNume() const { return nume;}
    void adaugaVictorie();
    void adaugaEgal();
    [[nodiscard]] int getVictorii() const;
    [[nodiscard]] int getEgaluri() const;
    void setVictorii(int v);
    void setEgaluri(int e);
    [[nodiscard]] std::vector<Jucator> getPlayers() const {return jucatori; }


    void addPlayer(const Jucator&jucator);
    [[nodiscard]] bool hasThreePlayersWithTenGoals() const ;
    void afisare() const ;
    friend std::ostream &operator<<(std::ostream &out, const Echipa &echipa);
    
};
#endif //UNISCORE_ECHIPA_H

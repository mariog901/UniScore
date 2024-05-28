//
// Created by Mario on 4/3/2024.
//
#include "../Headers/campionat.h"
void Campionat::addTeam(std::basic_string<char> echipa){
    echipe.push_back(echipa);
}
std::ostream &operator<<(std::ostream &out, const Campionat &campionat) {
    out << campionat.nume ;
    for (const Echipa &echipa:campionat.echipe){
        out<<echipa<<"";
    }
    return out;
}
bool Campionat::checkChampionship(const Echipa &echipa)  {
    for (const auto& team : echipe) {
        if (echipa.getNume() == team.getNume()) {
            return true;
        }
    }
    return false;
}
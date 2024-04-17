//
// Created by Mario on 4/17/2024.
//
#include "../Headers/CampionateAmerica.h"
int CampionateAmerica::calculPct(const Echipa &echipa) const {
    return 2*echipa.getVictorii()+(echipa.getEgaluri())/2;
}
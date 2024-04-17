//
// Created by Mario on 4/17/2024.
//
#include "../Headers/CampionateEuropa.h"
int CampionateEuropa::calculPct(const Echipa &echipa) const {
    return 3*echipa.getVictorii()+echipa.getEgaluri();
}
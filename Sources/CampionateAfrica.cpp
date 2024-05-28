//
// Created by Mario on 4/23/2024.
//
#include "../Headers/CampionateAfrica.h"
int CampionateAfrica::calculPct(const Echipa &echipa) const {
    return 4*echipa.getVictorii()+2*echipa.getEgaluri();
}
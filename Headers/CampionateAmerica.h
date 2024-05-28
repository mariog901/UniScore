//
// Created by Mario on 4/17/2024.
//

#ifndef UNISCORE_CAMPIONATEAMERICA_H
#define UNISCORE_CAMPIONATEAMERICA_H

#include "../Headers/campionat.h"
class CampionateAmerica : public Campionat{
private:
    int punctajechipa;
public:
    CampionateAmerica()=default;
    ~CampionateAmerica() override=default;
    CampionateAmerica(const std::string &numeCampionat, const std::vector<Echipa> &echipe):Campionat(numeCampionat,echipe){}
    int calculPct(const Echipa &echipa) const override ;
};
#endif //UNISCORE_CAMPIONATEAMERICA_H
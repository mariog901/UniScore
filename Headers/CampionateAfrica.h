//
// Created by Mario on 4/23/2024.
//

#ifndef UNISCORE_CAMPIONATEAFRICA_H
#define UNISCORE_CAMPIONATEAFRICA_H

#include "../Headers/campionat.h"
class CampionateAfrica : public Campionat{
private:
    int punctajechipa;
public:
    CampionateAfrica()=default;
    ~CampionateAfrica() override=default;
    CampionateAfrica(const std::string &numeCampionat , const std::vector<Echipa> &echipe): Campionat(numeCampionat,echipe){}
    int calculPct(const Echipa &echipa) const override ;
};
#endif //UNISCORE_CAMPIONATEAFRICA_H
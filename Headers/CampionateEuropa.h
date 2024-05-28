//
// Created by Mario on 4/17/2024.
//

#ifndef UNISCORE_CAMPIONATEEUROPA_H
#define UNISCORE_CAMPIONATEEUROPA_H

#include "../Headers/campionat.h"
class CampionateEuropa : public Campionat{
private:
    int punctajechipa;
public:
    CampionateEuropa()=default;
    ~CampionateEuropa() override=default ;
    CampionateEuropa(const std::string &numeCampionat, const std::vector<Echipa> &echipe):Campionat(numeCampionat,echipe){}
    CampionateEuropa(const std::string &numeCampionat , const std::vector<Echipa> &echipe , const std::string echipa):Campionat(numeCampionat,echipe){
       std::cout<<echipa<<"\n";
    }
    int calculPct(const Echipa &echipa) const override;

};

#endif //UNISCORE_CAMPIONATEEUROPA_H
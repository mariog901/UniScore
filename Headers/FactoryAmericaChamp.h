//
// Created by Mario on 5/28/2024.
//

#ifndef UNISCORE_FACTORYAMERICACHAMP_H
#define UNISCORE_FACTORYAMERICACHAMP_H
#include<iostream>
#include "../Headers/campionat.h"
#include "../Headers/FactoryChamp.h"
#include "../Headers/CampionateAmerica.h"
class FactoryAmericaChamp : public FactoryChamp{
public:
  Campionat* createchamp() override;
};


#endif // UNISCORE_FACTORYAMERICACHAMP_H

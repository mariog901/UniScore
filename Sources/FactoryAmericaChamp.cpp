//
// Created by Mario on 5/28/2024.
//
#include "../Headers/FactoryAmericaChamp.h"
#include "../Headers/campionat.h"
Campionat* FactoryAmericaChamp::createchamp() {
  return new CampionateAmerica();
}
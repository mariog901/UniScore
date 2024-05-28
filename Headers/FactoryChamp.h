//
// Created by Mario on 5/28/2024.
//

#ifndef UNISCORE_FACTORYCHAMP_H
#define UNISCORE_FACTORYCHAMP_H
#include<iostream>
#include "../Headers/campionat.h"
class FactoryChamp {
public:
  virtual Campionat* createchamp()=0;
};

#endif // UNISCORE_FACTORYCHAMP_H

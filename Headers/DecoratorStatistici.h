//
// Created by Mario on 5/28/2024.
//

#ifndef UNISCORE_DECORATORSTATISTICI_H
#define UNISCORE_DECORATORSTATISTICI_H
#include<iostream>
#include "../Headers/jucator.h"
#include "../Headers/DecoratorPlayer.h"
class DecoratorStatistici : public DecoratorPlayer {
public:
  DecoratorStatistici(Jucator* jucator) : DecoratorPlayer(jucator) {}
  void print() const override;
};


#endif // UNISCORE_DECORATORSTATISTICI_H

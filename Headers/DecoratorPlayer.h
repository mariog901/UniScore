//
// Created by Mario on 5/28/2024.
//

#ifndef UNISCORE_DECORATORPLAYER_H
#define UNISCORE_DECORATORPLAYER_H
#include<iostream>
#include "../Headers/jucator.h"
class DecoratorPlayer : public Jucator {
protected:
  Jucator *jucator;

public:
  DecoratorPlayer(Jucator *jucator) : jucator(jucator) {}
  void print() const override;

  int getGoluri() const;
};
#endif // UNISCORE_DECORATORPLAYER_H
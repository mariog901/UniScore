//
// Created by Mario on 5/28/2024.
//
#include "../Headers/DecoratorPlayer.h"
void DecoratorPlayer::print() const  {
  if (jucator) {
    jucator->print();
  }
}

int DecoratorPlayer::getGoluri() const {
  if (jucator) {
    return jucator->getNrGoluri();
  }
  return 0;
}
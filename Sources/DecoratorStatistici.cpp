//
// Created by Mario on 5/28/2024.
//
#include "../Headers/DecoratorStatistici.h"
void DecoratorStatistici::print() const {
  DecoratorPlayer::print();
  std::cout << "Adăugare statistici suplimentare" << std::endl;
}
//
// Created by Mario on 5/29/2024.
//
#include <iostream>
#include "../Headers/Punctaj.h"

int main() {
  Punctaj<int> punctajInt(61);
  std::cout << punctajInt.descrierePunctaj() << std::endl;

  Punctaj<float> punctajFloat(61.5);
  std::cout << punctajFloat.descrierePunctaj() << std::endl;


  return 0;
}

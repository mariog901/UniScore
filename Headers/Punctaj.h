//
// Created by Mario on 5/29/2024.
//

#ifndef UNISCORE_PUNCTAJ_H
#define UNISCORE_PUNCTAJ_H

#include <iostream>
#include <type_traits>
#include <cmath>
#include <string>

template<typename T>
class Punctaj {
private:
  T puncte;
public:
  explicit Punctaj(T puncte) : puncte(puncte) {}

  T getPunctaj() const {
    return puncte;
  }

  void setPunctaj(T pct) {
    this->puncte = pct;
  }

  T getPunctajDupaInjumatatire() const {
    if constexpr (std::is_integral_v<T>) {
      return (puncte + 1) / 2;
    } else {
      return puncte / 2.0;
    }
  }

  [[nodiscard]] std::string descrierePunctaj() const {
    return "Punctaj echipa inainte de play-off/play-out: " + std::to_string(puncte) + "\n"
           + "Punctaj echipa dupa injumatatirea punctelor: " + std::to_string(getPunctajDupaInjumatatire()) + "\n";
  }
  explicit operator float() const {
    return static_cast<float>(puncte);
  }


};




#endif // UNISCORE_PUNCTAJ_H

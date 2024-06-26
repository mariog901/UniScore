#include "../Headers/echipa.h"
#include "../Headers/jucator.h"

void Echipa::addPlayer(const Jucator&jucator){
jucatori.push_back(jucator);
}

bool Echipa::hasThreePlayersWithTenGoals() const {
  int count = 0;
  for (const auto& jucator : jucatori) {
    if (jucator.getNrGoluri() >= 10) {
      count++;
      if (count >= 3) {
        return true;
      }
    }
  }
  return false;
}

void Echipa::afisare() const{
    int i=1;
    std::cout<<"Echipa " << nume << " are jucatorii: "<<std::endl;
    for(const auto &jucator:jucatori){
        std::cout<<i<<". "<<jucator.getNume()<< " in varsta de "<<jucator.getVarsta()<<" ani "<< "si joaca pe pozitia de "<<jucator.getPozitie()<<std::endl;
        i++;
    }
    std::cout<<'\n';
}

void Echipa::adaugaVictorie() {victorii++;}
void Echipa::adaugaEgal() {egaluri++;}
int Echipa::getVictorii() const {return victorii;}
int Echipa::getEgaluri() const {return egaluri;}
void Echipa::setVictorii(int v) {victorii = v;}
void Echipa::setEgaluri(int e) {egaluri = e;}

std::ostream &operator<<(std::ostream &out, const Echipa &echipa) {
    out << echipa.nume << ""<<std::endl;
    for (const Jucator &jucator :echipa.jucatori){
        out<<jucator<<"";
    }
    return out;
}


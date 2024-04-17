#include "../Headers/jucator.h"
class Realizari : public Jucator{
private:
    int nrgoluri;
    int nrpase;

public:
    Realizari()=default;
    Realizari(const std::string &nume,unsigned int varsta, std::string pozitie,int nrgoluri,int nrpase):Jucator(nume,varsta,pozitie),nrgoluri(nrgoluri),nrpase(nrpase){}
    ~Realizari() =default;

    int getNrgoluri() const;

    void setNrgoluri(int nrgoluri);
    int getNrpase() const;
    void setNrpase(int nrpase);
    void print() const ;
};
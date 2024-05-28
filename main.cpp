//#include <iostream>
//#include <vector>
//#include "Headers/jucator.h"
//#include "Headers/campionat.h"
//#include "Headers/pointerClass.h"
//#include "Headers/ClasaCuPointer.h"
//#include "Headers/CampionateEuropa.h"
//#include "Headers/CampionateAmerica.h"
//#include "Headers/echipa.h"


//class Jucator {
//private:
//    std::string nume;
//    unsigned int varsta;
//    std::string pozitie;
//    unsigned int nrcartonasegalbene;
//    unsigned int nrcartonaserosii;
//      unsigned int nrmeciuri;
//      unsigned int nrgoluri;
//      unsigned int nrpasegol;
//
//
//public:
//    Jucator()=default;
//    explicit Jucator(const std::string &nume,unsigned int varsta, std::string pozitie, unsigned int nrmeciuri , unsigned int nrgoluri , unsigned int nrpasedegol , unsigned int nrcartonasegalbene,unsigned int nrcartonaserosii ) : nume(nume) , varsta(varsta), pozitie(pozitie) , nrmeciuri(nrmeciuri) , nrgoluri(nrgoluri) , nrpasegol(nrpasegol), nrcartonasegalbene(nrcartonasegalbene), nrcartonaserosii(nrcartonaserosii) {
//        this->nume = nume;
//        this->varsta=varsta;
//        this->pozitie=pozitie;
//        this->nrmeciuri=nrmeciuri;
//        this->nrgoluri=nrgoluri;
//        this->nrpasegol=nrpasegol;
//        this->nrcartonasegalbene=nrcartonasegalbene;
//        this->nrcartonaserosii=nrcartonaserosii;
//    }
//
//    Jucator(const Jucator &jucator){
//        this->nume=jucator.nume;
//        this->varsta=jucator.varsta;
//        this->pozitie=jucator.pozitie;
//        this->nrmeciuri=jucator.nrmeciuri;
//        this->nrgoluri=jucator.nrgoluri;
//        this->nrpasegol=jucator.nrpasegol;
//        this->nrcartonasegalbene=jucator.nrcartonasegalbene;
//        this->nrcartonaserosii=jucator.nrcartonaserosii;
//
//    }
//    Jucator &operator=(const Jucator &jucator) {
//        this->varsta = jucator.varsta;
//        this->nume = jucator.nume;
//        this->pozitie=jucator.pozitie;
//        this->nrmeciuri=jucator.nrmeciuri;
//        this->nrgoluri=jucator.nrgoluri;
//        this->nrpasegol=jucator.nrpasegol;
//        this->nrcartonasegalbene=jucator.nrcartonasegalbene;
//        this->nrcartonaserosii=jucator.nrcartonaserosii;
//
//        return *this;
//    }
//
//    virtual ~Jucator()=default;
//
//    const std::string &getNume() const{
//        return nume;
//    }
//    unsigned int getVarsta() const {
//        return varsta;
//    }
//    const std::string getPozitie() const {
//        return pozitie;
//    }
//    unsigned int getNrMeciuri() const{
//        return nrmeciuri;
//    }
//    unsigned int getNrGoluri() const{
//        return nrgoluri;
//    }
//    unsigned int getNrPaseGol() const{
//        return nrpasegol;
//    }
//    unsigned int getCartonaseGalbene() const{
//        return nrcartonasegalbene;
//    }
//    unsigned int getCartonaseRosii() const{
//        return nrcartonaserosii;
//    }
//
//    friend std::ostream &operator<<(std::ostream &out, const Jucator &jucator) {
//        out << "Nume: " << jucator.nume << ", Varsta: " << jucator.varsta<< ", Pozitia: "<<jucator.pozitie<<" NrMeciuri: " << jucator.nrmeciuri<<" NrGoluri: "<<jucator.nrgoluri<<" NrPaseGol: "<<jucator.nrpasegol<<" NrCartonaseGalbene: "<<jucator.nrcartonasegalbene << " NrCartonaseRosii : "<<jucator.nrcartonaserosii<<'\n';
//        return out;
//    }
//
//    friend std::istream &operator>>(std::istream &in,  Jucator &jucator) {
//        in >> jucator.nume >> jucator.varsta>>jucator.pozitie>>jucator.nrmeciuri>>jucator.nrgoluri>>jucator.nrpasegol>>jucator.nrcartonasegalbene>>jucator.nrcartonaserosii;
//        return in;
//    }
//    virtual void print() const {
//        std::cout << "Jucatorul:" <<nume << " are varsta de : " << varsta << "ani , joaca pe pozitia "<< pozitie <<" are un numar de "<<nrmeciuri<<" meciuri , "<<nrgoluri<<" goluri , " <<nrpasegol<<" pase de gol , " <<nrcartonasegalbene << " cartonase galbene si "<< nrcartonaserosii<<" cartonase rosii."<<'\n';
//    }
//
//};
//
//class Echipa {
//private:
//    std::string nume;
//    std::vector<Jucator> jucatori;
//    int victorii;
//    int egaluri;
//    int infrangeri;
//
//public:
//    explicit Echipa(const std::string &numeEchipa, const std::vector<Jucator> &fotbalisti) : nume(numeEchipa),jucatori(fotbalisti) {}
//    Echipa()=default;
//    Echipa(const std::string &nume):nume(nume),victorii(victorii),egaluri(egaluri),infrangeri(infrangeri){}
//    ~Echipa()=default;
//    const std::string getNume() const {
//        return nume;
//    }
//    void adaugaVictorie() {
//        victorii++;
//    }
//    void adaugaEgal() {
//        egaluri++;
//    }
//    int getVictorii() const {
//        return victorii;
//    }
//    int getEgaluri() const {
//        return egaluri;
//    }
//    void setVictorii(int v) {
//        victorii = v;
//    }
//
//    void setEgaluri(int e) {
//        egaluri = e;
//    }
//
//    const std::vector<Jucator> getPlayers() const {
//        return jucatori;
//    }
//    void addPlayer(const Jucator&jucator){
//        jucatori.push_back(jucator);
//    }
//    void afisare() const {
//        int i=1;
//        std::cout<<"Echipa " << nume << " are jucatorii: "<<std::endl;
//        for(const auto &jucator:jucatori){
//            std::cout<<i<<". "<<jucator.getNume()<< " in varsta de "<<jucator.getVarsta()<<" ani "<< "si joaca pe pozitia de "<<jucator.getPozitie()<<std::endl;
//            i++;
//        }
//        std::cout<<'\n';
//    }
//    friend std::ostream &operator<<(std::ostream &out, const Echipa &echipa) {
//        out << echipa.nume << ""<<std::endl;
//        for (const Jucator &jucator :echipa.jucatori){
//            out<<jucator<<"";
//        }
//        return out;
//    }
//
//};


//class Campionat {
//private:
//    std::string nume;
//    std::vector<Echipa> echipe;
//    int pctvic;
//    int pctegal;
//    int pctinfr;
//
//public:
//    explicit Campionat(const std::string &numeCampionat,const std::vector<Echipa> &echipe): nume(numeCampionat),echipe(echipe){}
//
//    Campionat() =default;
//    virtual ~Campionat()=default;
//
//    const std::string &getNume() const{
//        return nume;
//    }
//
//    const std::vector<Echipa> getEchipe() const {
//        return echipe;
//    }
//
//
//    void addTeam(const std::string &numeEchipa){
//        echipe.push_back(Echipa(numeEchipa));
//    }
//    friend std::ostream &operator<<(std::ostream &out, const Campionat &campionat) {
//        out << campionat.nume ;
//        for (const Echipa &echipa:campionat.echipe){
//            out<<echipa<<"";
//        }
//        return out;
//    }
//    bool checkChampionship(const Echipa &echipa)  {
//        for (const auto& team : echipe) {
//            if (echipa.getNume() == team.getNume()) {
//                return true;
//            }
//        }
//        return false;
//    }
//    virtual void print() const {
//        std::cout << "Campionatul " << nume << " contine echipele:" << std::endl;
//        for (const Echipa &echipa : echipe) {
//            std::cout << echipa.getNume() << std::endl;
//        }
//    }
//    virtual int calculPct(const Echipa &Echipa) const=0;
//};
//
//class Matches : public Jucator{
//private:
//    int nrmeciuri;
//    static int nrmec;
//public:
//    Matches()=default;
//    Matches(const std::string &nume,unsigned int varsta, std::string pozitie,int nrmeciuri):Jucator(nume,varsta,pozitie),nrmeciuri(nrmeciuri){}
//    ~Matches() override=default;
//    int getNrMeciuri() const {
//        return nrmeciuri;
//    }
//
//    static void setNrmeciuri(int nrmeciuri) {
//        Matches::nrmec = nrmeciuri;
//    }
//    void print() const override{
//        std::cout<<"Jucatorul "<<this->getNume()<< " are in acest sezon un numar de : " << this->nrmeciuri <<" meciuri. " << std::endl;
//    }
//};
//class Realizari : public Jucator{
//private:
//    int nrgoluri;
//    int nrpase;
//
//public:
//    Realizari()=default;
//    Realizari(const std::string &nume,unsigned int varsta, std::string pozitie,int nrgoluri,int nrpase):Jucator(nume,varsta,pozitie),nrgoluri(nrgoluri),nrpase(nrpase){}
//    ~Realizari() override=default;
//    Realizari(int goluri,int pase):nrgoluri(goluri),nrpase(pase){}
//    int getNrgoluri() const {
//        return nrgoluri;
//    }
//
//    void setNrgoluri(int nrgoluri) {
//        Realizari::nrgoluri = nrgoluri;
//    }
//    int getNrpase() const {
//        return nrpase;
//    }
//    void setNrpase(int nrpase) {
//        Realizari::nrpase = nrpase;
//    }
//    void print() const override{
//        std::cout<<"Jucatorul "<<this->getNume()<< " are in acest sezon un numar de : "<<this->nrgoluri<< "goluri " << " si " << this->nrpase << "pase de gol" << std::endl;
//    }
//
//};
//class Cards : public Jucator{
//private:
//    int nrcartonasegalbene;
//    int nrcartonaserosii;
//
//public:
//    Cards()=default;
//    Cards(const std::string &nume,unsigned int varsta, std::string pozitie,int nrcartonasegalbene,int nrcartonaserosii):Jucator(nume,varsta,pozitie),nrcartonasegalbene(nrcartonasegalbene),nrcartonaserosii(nrcartonaserosii){}
//    ~Cards() override=default;
//
//    int getNrcartonasegalbene() const {
//        return nrcartonasegalbene;
//    }
//
//    void setNrcartonasegalbene(int nrcartonasegalbene) {
//        Cards::nrcartonasegalbene = nrcartonasegalbene;
//    }
//
//    int getNrcartonaserosii() const {
//        return nrcartonaserosii;
//    }
//
//    void setNrcartonaserosii(int nrcartonaserosii) {
//        Cards::nrcartonaserosii = nrcartonaserosii;
//    }
//    void print() const override{
//        std::cout<<"Jucatorul "<<this->getNume()<< " are in acest sezon un numar de : "<<this->nrcartonasegalbene<< " cartonase galbene si " << this->nrcartonaserosii << " cartonase rosii " << std::endl;
//    }
//};
//
//class pointerClass{
//private:
//    Campionat *ptr;
//public:
//    pointerClass(Campionat* pointer) : ptr(pointer){}
//    void printare(){
//        ptr->print();
//    }
//};
//
//class CampionateEuropa : public Campionat{
//private:
//    int punctajechipa;
//public:
//    CampionateEuropa()=default;
//    ~CampionateEuropa() override=default ;
//    //CampionateEuropa(const std::string &numeCampionat, const std::vector<Echipa> &echipe):Campionat(numeCampionat,echipe){}
//    CampionateEuropa(const std::string &numeCampionat , const std::vector<Echipa> &echipe , const std::string echipa):Campionat(numeCampionat,echipe){
//        std::cout<<echipa<<"\n";
//    }
//    int calculPct(const Echipa &echipa) const override{
//        return 3*echipa.getVictorii()+echipa.getEgaluri();
//    }
//
//};
//class CampionateAmerica : public Campionat{
//private:
//    int punctajechipa;
//public:
//    CampionateAmerica()=default;
//    ~CampionateAmerica() override=default;
//    CampionateAmerica(const std::string &numeCampionat, const std::vector<Echipa> &echipe):Campionat(numeCampionat,echipe){}
//    int calculPct(const Echipa &echipa) const override{
//        return 2*echipa.getVictorii()+(echipa.getEgaluri())/2;
//    }
//};
//
//class CampionateAfrica : public Campionat{
//private:
//    int punctajechipa;
//public:
//    CampionateAfrica()=default;
//    ~CampionateAfrica() override=default;
//    CampionateAfrica(const std::string &numeCampionat , const std::vector<Echipa> &echipe): Campionat(numeCampionat,echipe){}
//    int calculPct(const Echipa &echipa) const override{
//        return 4*echipa.getVictorii()+2*echipa.getEgaluri();
//    }
//};
//class ClasaCuPointer {
//private:
//    Campionat *pointerBaza;
//public:
//    ClasaCuPointer() : pointerBaza(nullptr){}
//    void setPointerDeBaza(Campionat *pointer) {
//        pointerBaza = pointer;
//    }
//    int apelCalculPct(const Echipa &echipa) const {
//        if(pointerBaza) {
//            return pointerBaza->calculPct(echipa);
//        }
//        return 0;
//    }
//};

#include <iostream>
#include <vector>
#include "Headers/jucator.h"
#include "Headers/campionat.h"
#include "Headers/pointerClass.h"
#include "Headers/ClasaCuPointer.h"
#include "Headers/CampionateEuropa.h"
#include "Headers/CampionateAmerica.h"
#include "Headers/echipa.h"
#include "Headers/FactoryChamp.h"
#include "Headers/FactoryAmericaChamp.h"
#include "Headers/DecoratorPlayer.h"
#include "Headers/DecoratorStatistici.h"
#include "Headers/Punctaj.h"



int main() {
    Echipa FCSB("FCSB");
    Echipa InterMiami("Inter Miami");
    Echipa CFR("CFR");
    Echipa Craiova("Craiova");
    Echipa UTA("UTA");
    Echipa Rapid("Rapid");
    Echipa Liverpool("Liverpool");
    Echipa ManCity("Manchester City");
    Echipa Chelsea("Chelsea");
    Echipa BocaJuniors("Boca Juniors");
    Echipa RiverPlate("River Plate");

    Jucator Olaru("Darius Olaru", 26, "CM",32,15,3,6,1);
    Jucator Muhar("Karlo Muhar" , 28 , "CDM",33,7,2,8,0);
    Jucator Mitrita("Alexandru Mitrita",29,"LW",31,13,10,6,0);
    Jucator Ivan ("Andrei Ivan" ,27, "LW",31,4,2,5,1);
    Jucator Markovic ("Jovan Markovic" ,23, "ST",34,6,3,5,0);
    Jucator Baiaram("Stefan Baiaram" , 21, "CAM",26,8,1,3,0);



    FCSB.addPlayer(Olaru);
    CFR.addPlayer(Muhar);
    Craiova.addPlayer(Mitrita);
    Craiova.addPlayer(Ivan);
    Craiova.addPlayer(Markovic);
    Craiova.addPlayer(Baiaram);
    Campionat *champ;
    CampionateEuropa Superliga;
    CampionateEuropa LaLiga;
    CampionateEuropa PremierLeague;
    CampionateAmerica MLS;

    FactoryChamp *factory = new FactoryAmericaChamp;
    Campionat *ArgentinaSuperLiga = factory->createchamp();
    ArgentinaSuperLiga->addTeam(BocaJuniors.getNume());
    ArgentinaSuperLiga->addTeam(RiverPlate.getNume());
    std::cout<<ArgentinaSuperLiga->checkChampionship(BocaJuniors)<<std::endl;
    std::cout<<ArgentinaSuperLiga->checkChampionship(RiverPlate)<<std::endl;
    std::cout<<ArgentinaSuperLiga->checkChampionship(FCSB)<<std::endl;


    Superliga.addTeam(FCSB.getNume());
    Superliga.addTeam(CFR.getNume());
    Superliga.addTeam(Craiova.getNume());
    PremierLeague.addTeam(Liverpool.getNume());
    PremierLeague.addTeam(Chelsea.getNume());
    PremierLeague.addTeam(ManCity.getNume());
    champ=&Superliga;
    FCSB.setEgaluri(4);
    FCSB.setVictorii(11);
    FCSB.adaugaVictorie();
    ClasaCuPointer objPtr;
    objPtr.setPointerDeBaza(&Superliga);
    int punctaj1=objPtr.apelCalculPct(FCSB);
    //std::cout<<"FCSB are "<<champ->calculPct(FCSB)<<" puncte."<<"\n";

    Punctaj<int> punctajFCSB(punctaj1);
    std::cout << "Echipa: " << FCSB.getNume() << std::endl;
    std::cout << "Punctaj inainte de play-off/play-out: " << punctajFCSB.getPunctaj() << std::endl;
    std::cout << "Punctaj dupa injumatatirea punctelor: " << punctajFCSB.getPunctajDupaInjumatatire() << std::endl;

    Craiova.setVictorii(9);
    Craiova.setEgaluri(5);
    ClasaCuPointer objPtr2;
    objPtr2.setPointerDeBaza(&Superliga);
    int punctaj2=objPtr2.apelCalculPct(Craiova);

    Punctaj<int>punctajCraiova(punctaj2);
    std::cout<<"Echipa: " <<Craiova.getNume()<<std::endl;
    std::cout << "Punctaj inainte de play-off/play-out: " << punctajCraiova.getPunctaj() << std::endl;
    auto punctajCraiovaFloat = static_cast<float>(punctajCraiova);
    Punctaj<float> punctajCraiovadupaInjumatatire(punctajCraiovaFloat);
    std::cout<<" Punctaj dupa injumatatirea punctelor , la intrarea in play-off/play-out " <<punctajCraiovaFloat/2<<std::endl;


    auto* juc1=new Jucator("Tavi Popescu",21,"LW",29,2,3,7,0);
    juc1->print();
    auto* juc2=new Jucator("Baba Alhassan",23,"CM",16,2,1,3,0);
    FCSB.addPlayer(*juc1);
    FCSB.addPlayer(*juc2);
    Jucator* juc3 = new DecoratorStatistici(new Jucator("Luis Phelipe",22,"FCSB",20,11,4,3,0));
    FCSB.addPlayer(*juc3);

    try {
      if (FCSB.hasThreePlayersWithTenGoals()) {
        std::cout << "Echipa FCSB are cel puțin trei jucători cu cel puțin 10 goluri fiecare." << std::endl;
      } else {
        throw std::runtime_error("Echipa FCSB nu are cel puțin trei jucători cu cel puțin 10 goluri fiecare.");
      }
    } catch (const std::runtime_error& e) {
      std::cerr << "Eroare: " << e.what() << std::endl;
    }

    pointerClass ptr1(juc1);
    pointerClass ptr2(juc2);
    ptr1.printare();
    ptr2.printare();

//    Jucator* jucnou = new Realizari();
//
//    if (Realizari* realizari = dynamic_cast<Realizari*>(jucnou)) {
//        std::cout << "Jucatorul are realizari " << std::endl;
//    } else {
//        std::cout << "Jucatorul nu are realizari " << std::endl;
//    }




    std::cout<<FCSB<<"\n";
    std::cout<<CFR<<"\n";
    std::cout<<Craiova<<"\n";

    std::cout<<"Echipele din Superliga sunt" <<Superliga<<"\n";
    Craiova.afisare();
    FCSB.afisare();
    CFR.afisare();

    std::cout<<Superliga.checkChampionship(Craiova)<<std::endl;
    std::cout<<Superliga.checkChampionship(UTA)<<std::endl;
    return 0;
}



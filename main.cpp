//#include <iostream>
//#include <string>
//#include <vector>
//
//class Jucator {
//private:
//    std::string nume;
//    unsigned int varsta;
//    std::string pozitie;
//public:
//    Jucator()=default;
//    explicit Jucator(const std::string &nume,unsigned int varsta, std::string pozitie) : nume(nume) , varsta(varsta), pozitie(pozitie) {
//        this->nume = nume;
//    }
//
//    Jucator(const Jucator &jucator){
//        this->nume=jucator.nume;
//        this->varsta=jucator.varsta;
//        this->pozitie=jucator.pozitie;
//    }
//    Jucator &operator=(const Jucator &jucator) {
//        this->varsta = jucator.varsta;
//        this->nume = jucator.nume;
//        this->pozitie=jucator.pozitie;
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
//
//    friend std::ostream &operator<<(std::ostream &out, const Jucator &jucator) {
//        out << "nume: " << jucator.nume << ", varsta: " << jucator.varsta<< ", Pozitia: "<<jucator.pozitie<<'\n';
//        return out;
//    }
//
//    friend std::istream &operator>>(std::istream &in,  Jucator &jucator) {
//        in >> jucator.nume >> jucator.varsta>>jucator.pozitie;
//        return in;
//    }
//    virtual void print() const {
//        std::cout << "Jucatorul:" <<nume << " are varsta de : " << varsta << "ani si joaca pe pozitia "<< pozitie << std::endl;
//    }
//    virtual int Contributii() const=0;
//
//};
//
//class Echipa {
//private:
//    std::string nume;
//    std::vector<Jucator*> jucatori;
//
//public:
//    explicit Echipa(const std::string &numeEchipa, const std::vector<Jucator*> &fotbalisti) : nume(numeEchipa),jucatori(fotbalisti) {}
//    Echipa()=default;
//    Echipa(const std::string &nume):nume(nume){}
//    ~Echipa()=default;
//    const std::string getNume() const {
//        return nume;
//    }
//    const std::vector<Jucator*> getPlayers() const {
//        return jucatori;
//    }
//    void addPlayer(Jucator* jucator){
//        jucatori.push_back(jucator);
//    }
//    void afisare() const {
//        int i=1;
//        std::cout<<"Echipa " << nume << " are jucatorii: "<<std::endl;
//        for(const auto &jucator:jucatori){
//            std::cout<<i<<". "<<jucator->getNume()<< " in varsta de "<<jucator->getVarsta()<<" ani "<< "si joaca pe pozitia de "<<jucator->getPozitie()<<std::endl;
//            i++;
//        }
//        std::cout<<'\n';
//    }
//    friend std::ostream &operator<<(std::ostream &out, const Echipa &echipa) {
//        out << echipa.nume << ""<<std::endl;
//        for (const auto &jucator :echipa.jucatori){
//            out<<jucator<<"";
//        }
//        return out;
//    }
//
//};
//
//
//class Campionat {
//private:
//    std::string nume;
//    std::vector<Echipa> echipe;
//
//public:
//    explicit Campionat(const std::string &numeCampionat,const std::vector<Echipa> &echipe): nume(numeCampionat),echipe(echipe){}
//
//    Campionat() =default;
//    ~Campionat()=default;
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
//    void addTeam(const Echipa &echipa){
//        echipe.push_back(echipa);
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
//            return false;
//    }
//
//
//
//
//};
//class Matches : public Jucator{
//private:
//    int nrmeciuri;
//public:
//    Matches()=default;
//    Matches(const std::string &nume,unsigned int varsta, std::string pozitie,int nrmeciuri):Jucator(nume,varsta,pozitie),nrmeciuri(nrmeciuri){}
//    ~Matches() override=default;
//    int getNrMeciuri() const {
//        return nrmeciuri;
//    }
//
//    void setNrmeciuri(int nrmeciuri) {
//        Matches::nrmeciuri = nrmeciuri;
//    }
//    void print() const override{
//        std::cout<<"Jucatorul "<<getNume()<< " are in acest sezon un numar de : " << nrmeciuri <<" meciuri. " << std::endl;
//    }
//    int Contributii()const override{
//        return nrmeciuri;
//    }
//
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
//    int Contributii() const override{
//        return nrgoluri+nrpase;
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
//    int Contributii()const override{
//        return nrcartonasegalbene , nrcartonaserosii;
//    }
//};
//
//class pointerClass{
//private:
//    Jucator *ptr;
//public:
//    pointerClass(Jucator* pointer) : ptr(pointer){}
//    void printare(){
//        ptr->print();
//    }
//};
//
//
//int main() {
//    Echipa FCSB("FCSB");
//    Echipa CFR("CFR");
//    Echipa Craiova("Craiova");
//    Echipa UTA("UTA");
//    //Jucator Coman("Florinel Coman", 25, "LW");
//
//    //    Jucator Muhar("Karlo Muhar" , 30 , "CDM");
////    Jucator Mitrita("Alexandru Mitrita",29,"LW");
////    Jucator Ivan ("Andrei Ivan" ,26, "ST");
////    Jucator Markovic ("Jovan Markovic" ,22, "ST");
////    Jucator Baiaram("Stefan Baiaram" , 20, "CAM");
//    //FCSB.addPlayer(Coman);
////    CFR.addPlayer(Muhar);
////    Craiova.addPlayer(Mitrita);
////    Craiova.addPlayer(Ivan);
////    Craiova.addPlayer(Markovic);
////    Craiova.addPlayer(Mitrita);
//    Campionat Superliga;
//    Superliga.addTeam(FCSB.getNume());
//    Superliga.addTeam(CFR.getNume());
//    Superliga.addTeam(Craiova.getNume());
//
//
//
//    Jucator *juc=new Realizari("Tavi Popescu",20,"LW",10,4);
//    juc->print();
//
//    Matches *match=new Matches("Tavi Popescu",20,"LW",30);
//    match->print();
//    Cards *cards=new Cards("Tavi Popescu",20,"LW",3,2);
//    cards->print();
//    //Realizari *realizari=new Realizari("Tavi Popescu",20,"LW",10,4);
//    //realizari->print();
//    Matches Olaru("Darius Olaru", 25, "CM",30);
//    Jucator *olaruPtr= &Olaru;
//    Matches Coman("Florinel Coman", 25, "LW", 30);
//    Cards Baluta("Alexandru Baluta",29,"RW",4,1);
//    pointerClass ptr1(&Coman);
//    pointerClass ptr2(&Baluta);
//    Jucator *comanPtr= &Coman;
//    FCSB.addPlayer(comanPtr);
//    FCSB.addPlayer(olaruPtr);
//
//    ptr1.printare();
//    ptr2.printare();
//    std::cout<<'\n';
//
////    std::cout<<FCSB<<"\n";
////    std::cout<<CFR<<"\n";
////    std::cout<<Craiova<<"\n";
//
//    std::cout<<"Echipele din liga 1 sunt:"<<"\n"<<Superliga<<"\n";
//    Craiova.afisare();
//    FCSB.afisare();
//    CFR.afisare();
//
//    std::cout<<Superliga.checkChampionship(Craiova)<<std::endl;
//    std::cout<<Superliga.checkChampionship(UTA)<<std::endl;
//    return 0;
//}
//
//
#include <iostream>
#include <string>
#include <vector>

class Jucator {
private:
    std::string nume;
    unsigned int varsta;
    std::string pozitie;
public:
    Jucator()=default;
    explicit Jucator(const std::string &nume,unsigned int varsta, std::string pozitie) : nume(nume) , varsta(varsta), pozitie(pozitie) {
        this->nume = nume;
    }

    Jucator(const Jucator &jucator){
        this->nume=jucator.nume;
        this->varsta=jucator.varsta;
        this->pozitie=jucator.pozitie;
    }
    Jucator &operator=(const Jucator &jucator) {
        this->varsta = jucator.varsta;
        this->nume = jucator.nume;
        this->pozitie=jucator.pozitie;
        return *this;
    }

    virtual ~Jucator()=default;

    const std::string &getNume() const{
        return nume;
    }
    unsigned int getVarsta() const {
        return varsta;
    }
    const std::string getPozitie() const {
        return pozitie;
    }

    friend std::ostream &operator<<(std::ostream &out, const Jucator &jucator) {
        out << "nume: " << jucator.nume << ", varsta: " << jucator.varsta<< ", Pozitia: "<<jucator.pozitie<<'\n';
        return out;
    }

    friend std::istream &operator>>(std::istream &in,  Jucator &jucator) {
        in >> jucator.nume >> jucator.varsta>>jucator.pozitie;
        return in;
    }
    virtual void print() const {
        std::cout << "Jucatorul:" <<nume << " are varsta de : " << varsta << "ani si joaca pe pozitia "<< pozitie << std::endl;
    }

};

class Echipa {
private:
    std::string nume;
    std::vector<Jucator> jucatori;
    int victorii;
    int egaluri;
    int infrangeri;

public:
    explicit Echipa(const std::string &numeEchipa, const std::vector<Jucator> &fotbalisti) : nume(numeEchipa),jucatori(fotbalisti) {}
    Echipa()=default;
    Echipa(const std::string &nume):nume(nume),victorii(victorii),egaluri(egaluri),infrangeri(infrangeri){}
    ~Echipa()=default;
    const std::string getNume() const {
        return nume;
    }
    void adaugaVictorie() {
        victorii++;
    }
    void adaugaEgal() {
        egaluri++;
    }
    int getVictorii() const {
        return victorii;
    }
    int getEgaluri() const {
        return egaluri;
    }
    void setVictorii(int v) {
        victorii = v;
    }

    void setEgaluri(int e) {
        egaluri = e;
    }

    const std::vector<Jucator> getPlayers() const {
        return jucatori;
    }
    void addPlayer(const Jucator&jucator){
        jucatori.push_back(jucator);
    }
    void afisare() const {
        int i=1;
        std::cout<<"Echipa " << nume << " are jucatorii: "<<std::endl;
        for(const auto &jucator:jucatori){
            std::cout<<i<<". "<<jucator.getNume()<< " in varsta de "<<jucator.getVarsta()<<" ani "<< "si joaca pe pozitia de "<<jucator.getPozitie()<<std::endl;
            i++;
        }
        std::cout<<'\n';
    }
    friend std::ostream &operator<<(std::ostream &out, const Echipa &echipa) {
        out << echipa.nume << ""<<std::endl;
        for (const Jucator &jucator :echipa.jucatori){
            out<<jucator<<"";
        }
        return out;
    }

};


class Campionat {
private:
    std::string nume;
    std::vector<Echipa> echipe;
    int pctvic;
    int pctegal;
    int pctinfr;

public:
    explicit Campionat(const std::string &numeCampionat,const std::vector<Echipa> &echipe): nume(numeCampionat),echipe(echipe){}

    Campionat() =default;
    virtual ~Campionat()=default;

    const std::string &getNume() const{
        return nume;
    }

    const std::vector<Echipa> getEchipe() const {
        return echipe;
    }


    void addTeam(const std::string &numeEchipa){
        echipe.push_back(Echipa(numeEchipa));
    }
    friend std::ostream &operator<<(std::ostream &out, const Campionat &campionat) {
        out << campionat.nume ;
        for (const Echipa &echipa:campionat.echipe){
            out<<echipa<<"";
        }
        return out;
    }
    bool checkChampionship(const Echipa &echipa)  {
        for (const auto& team : echipe) {
            if (echipa.getNume() == team.getNume()) {
                return true;
            }
        }
        return false;
    }
    virtual int calculPct(const Echipa &Echipa) const=0;
};

class Matches : public Jucator{
private:
    int nrmeciuri;
    static int nrmec;
public:
    Matches()=default;
    Matches(const std::string &nume,unsigned int varsta, std::string pozitie,int nrmeciuri):Jucator(nume,varsta,pozitie),nrmeciuri(nrmeciuri){}
    ~Matches() override=default;
    int getNrMeciuri() const {
        return nrmeciuri;
    }

    static void setNrmeciuri(int nrmeciuri) {
        Matches::nrmec = nrmeciuri;
    }
    void print() const override{
        std::cout<<"Jucatorul "<<this->getNume()<< " are in acest sezon un numar de : " << this->nrmeciuri <<" meciuri. " << std::endl;
    }
};
class Realizari : public Jucator{
private:
    int nrgoluri;
    int nrpase;

public:
    Realizari()=default;
    Realizari(const std::string &nume,unsigned int varsta, std::string pozitie,int nrgoluri,int nrpase):Jucator(nume,varsta,pozitie),nrgoluri(nrgoluri),nrpase(nrpase){}
    ~Realizari() override=default;
    Realizari(int goluri,int pase):nrgoluri(goluri),nrpase(pase){}
    int getNrgoluri() const {
        return nrgoluri;
    }

    void setNrgoluri(int nrgoluri) {
        Realizari::nrgoluri = nrgoluri;
    }
    int getNrpase() const {
        return nrpase;
    }
    void setNrpase(int nrpase) {
        Realizari::nrpase = nrpase;
    }
    void print() const override{
        std::cout<<"Jucatorul "<<this->getNume()<< " are in acest sezon un numar de : "<<this->nrgoluri<< "goluri " << " si " << this->nrpase << "pase de gol" << std::endl;
    }

};
class Cards : public Jucator{
private:
    int nrcartonasegalbene;
    int nrcartonaserosii;

public:
    Cards()=default;
    Cards(const std::string &nume,unsigned int varsta, std::string pozitie,int nrcartonasegalbene,int nrcartonaserosii):Jucator(nume,varsta,pozitie),nrcartonasegalbene(nrcartonasegalbene),nrcartonaserosii(nrcartonaserosii){}
    ~Cards() override=default;

    int getNrcartonasegalbene() const {
        return nrcartonasegalbene;
    }

    void setNrcartonasegalbene(int nrcartonasegalbene) {
        Cards::nrcartonasegalbene = nrcartonasegalbene;
    }

    int getNrcartonaserosii() const {
        return nrcartonaserosii;
    }

    void setNrcartonaserosii(int nrcartonaserosii) {
        Cards::nrcartonaserosii = nrcartonaserosii;
    }
    void print() const override{
        std::cout<<"Jucatorul "<<this->getNume()<< " are in acest sezon un numar de : "<<this->nrcartonasegalbene<< " cartonase galbene si " << this->nrcartonaserosii << " cartonase rosii " << std::endl;
    }
};

class pointerClass{
private:
    Jucator *ptr;
public:
    pointerClass(Jucator* pointer) : ptr(pointer){}
    void printare(){
        ptr->print();
    }
};

class CampionateEuropa : public Campionat{
private:
    int punctajechipa;
public:
    CampionateEuropa()=default;
    ~CampionateEuropa() override=default ;
    //CampionateEuropa(const std::string &numeCampionat, const std::vector<Echipa> &echipe):Campionat(numeCampionat,echipe){}
    CampionateEuropa(const std::string &numeCampionat , const std::vector<Echipa> &echipe , const std::string echipa):Campionat(numeCampionat,echipe){
        std::cout<<echipa<<"\n";
    }
    int calculPct(const Echipa &echipa) const override{
        return 3*echipa.getVictorii()+echipa.getEgaluri();
    }

};
class CampionateAmerica : public Campionat{
private:
    int punctajechipa;
public:
    CampionateAmerica()=default;
    ~CampionateAmerica() override=default;
    CampionateAmerica(const std::string &numeCampionat, const std::vector<Echipa> &echipe):Campionat(numeCampionat,echipe){}
    int calculPct(const Echipa &echipa) const override{
        return 2*echipa.getVictorii()+(echipa.getEgaluri())/2;
    }
};

class ClasaCuPointer {
private:
    Campionat *pointerBaza;
public:
    ClasaCuPointer() : pointerBaza(nullptr){}
    void setPointerDeBaza(Campionat *pointer) {
        pointerBaza = pointer;
    }
    int apelCalculPct(const Echipa &echipa) const {
        if(pointerBaza) {
            return pointerBaza->calculPct(echipa);
        }
        return 0;
    }
};


int main() {
    Echipa FCSB("FCSB");
    Echipa CFR("CFR");
    Echipa Craiova("Craiova");
    Echipa UTA("UTA");
    Jucator Olaru("Darius Olaru", 25, "CM");
    Jucator Muhar("Karlo Muhar" , 30 , "CDM");
    Jucator Mitrita("Alexandru Mitrita",29,"LW");
    Jucator Ivan ("Andrei Ivan" ,26, "ST");
    Jucator Markovic ("Jovan Markovic" ,22, "ST");
    Jucator Baiaram("Stefan Baiaram" , 20, "CAM");


    FCSB.addPlayer(Olaru);
    CFR.addPlayer(Muhar);
    Craiova.addPlayer(Mitrita);
    Craiova.addPlayer(Ivan);
    Craiova.addPlayer(Markovic);
    Craiova.addPlayer(Mitrita);
    Campionat *champ;
    CampionateEuropa Superliga;
    CampionateEuropa LaLiga;
    CampionateEuropa PremierLeague;
    CampionateAmerica MLS;
    CampionateAmerica ArgentinaSuperLiga;
    Superliga.addTeam(FCSB.getNume());
    Superliga.addTeam(CFR.getNume());
    Superliga.addTeam(Craiova.getNume());
    champ=&Superliga;
    FCSB.setEgaluri(4);
    FCSB.setVictorii(11);
    FCSB.adaugaVictorie();
    ClasaCuPointer objPtr;
    objPtr.setPointerDeBaza(&Superliga);
    int punctaj=objPtr.apelCalculPct(FCSB);
   // std::cout<<"FCSB are "<<champ->calculPct(FCSB)<<" puncte."<<"\n";
    std::cout<<"Punctajul echipei este: "<<punctaj<<std::endl;
    // CampionateEuropa camp(Superliga,FCSB);

    Jucator *juc=new Jucator("Tavi Popescu",20,"LW");
    juc->print();

    Matches *match=new Matches("Tavi Popescu",20,"LW",30);
    match->print();
    Cards *cards=new Cards("Tavi Popescu",20,"LW",3,2);
    cards->print();
    Realizari *realizari=new Realizari("Tavi Popescu",20,"LW",10,4);
    realizari->print();

    Matches Coman("Florinel Coman", 25, "LW", 30);
    Cards Baluta("Alexandru Baluta",29,"RW",4,1);
    pointerClass ptr1(&Coman);
    pointerClass ptr2(&Baluta);
    FCSB.addPlayer(Coman);

    ptr1.printare();
    ptr2.printare();

    Jucator* jucnou = new Realizari();

    if (Realizari* realizari = dynamic_cast<Realizari*>(jucnou)) {
        std::cout << "Jucatorul are realizari " << std::endl;
    } else {
        std::cout << "Jucatorul nu are realizari " << std::endl;
    }

    delete jucnou;


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



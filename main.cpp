#include <iostream>
#include <string>
#include <vector>
#include<fstream>



class Jucator {
private:
    std::string nume;
    unsigned int varsta;
    std::string pozitie;
public:
    Jucator(){};
    Jucator(const std::string &nume,unsigned int varsta, std::string pozitie) : nume(nume) , varsta(varsta), pozitie(pozitie) {
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

    ~Jucator()=default;

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




};

class Echipa {
private:
    std::string nume;
    std::vector<Jucator> jucatori;

public:
    explicit Echipa(const std::string &numeEchipa, const std::vector<Jucator> &fotbalisti) : nume(numeEchipa),jucatori(fotbalisti) {}
    Echipa(const std::string &nume):nume(nume){}
    Echipa() {};

    ~Echipa()=default;

    const std::string getNume() const {
        return nume;
    }

    const std::vector<Jucator> getPlayers() const {
        return jucatori;
    };


    void addPlayer(const Jucator&jucator){
        jucatori.push_back(jucator);
    }
    void afisare() const{
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

public:
    explicit Campionat(const std::string &numeCampionat,const std::vector<Echipa> &echipe): nume(numeCampionat),echipe(echipe){}

    Campionat() {};
    ~Campionat()=default;

    const std::string &getNume() const{
        return nume;
    }

    const std::vector<Echipa> getEchipe() const {
        return echipe;
    }


    void addTeam(const Echipa &echipa){
        echipe.push_back(echipa);
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

};



int main() {
//        Jucator Olaru("Darius Olaru",25, "CM");
//        Jucator Coman( "Florinel Coman",25, "LW");
//        std::cout << Olaru.getNume() << " " << Olaru.getVarsta() << " "  << Olaru.getPozitie() << "\n";
//        std::cout << Coman.getNume() << " " << Coman.getVarsta() << " "  << Coman.getPozitie() << "\n";
    Echipa FCSB("FCSB");
    Echipa CFR("CFR");
    Echipa Craiova("Craiova");
    Echipa UTA("UTA");
    Jucator Coman("Florinel Coman", 25, "LW");
    Jucator Olaru("Darius Olaru",25, "CM");
    Jucator Muhar("Karlo Muhar" , 30 , "CDM");
    Jucator Mitrita("Alexandru Mitrita",29,"LW");
    Jucator Ivan ("Andrei Ivan" ,26, "ST");
    Jucator Markovic ("Jovan Markovic" ,22, "ST");
    Jucator Baiaram("Stefan Baiaram" , 20, "CAM");
    FCSB.addPlayer(Coman);
    FCSB.addPlayer(Olaru);
    CFR.addPlayer(Muhar);
    Craiova.addPlayer(Mitrita);
    Craiova.addPlayer(Ivan);
    Craiova.addPlayer(Markovic);
    Craiova.addPlayer(Mitrita);
    Campionat Superliga;
    Superliga.addTeam(FCSB.getNume());
    Superliga.addTeam(CFR.getNume());
    Superliga.addTeam(Craiova.getNume());
    std::cout<<FCSB<<"\n";
    std::cout<<CFR<<"\n";
    std::cout<<Craiova<<"\n";

    std::cout<<"Echipele din liga 1 sunt:"<<"\n"<<Superliga<<"\n";
    Craiova.afisare();
    FCSB.afisare();
    CFR.afisare();

//    if(Superliga.checkChampionship(Craiova)==1){
//        std::cout<<Craiova.getNume()<<" este in Superliga.";
//    }
//    else{
//        std::cout<<Craiova.getNume()<<" nu este in Superliga.";
//    }
    std::cout<<Superliga.checkChampionship(Craiova)<<std::endl;
    std::cout<<Superliga.checkChampionship(UTA)<<std::endl;
    return 0;
}



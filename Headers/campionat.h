
#ifndef UNISCORE_CAMPIONAT_H
#define UNISCORE_CAMPIONAT_H

#include<iostream>
#include<vector>
#include "../Headers/echipa.h"
class Campionat {
private:
    std::string nume;
    std::vector<Echipa> echipe;

public:
    explicit Campionat(const std::string &numeCampionat, const std::vector<Echipa> &echipe) : nume(numeCampionat),
                                                                                              echipe(echipe) {}

    Campionat() = default;

    virtual ~Campionat() = default;

    [[nodiscard]] const std::string &getNume() const { return nume; }

    const std::vector<Echipa> getEchipe() const { return echipe; }


    void addTeam(std::basic_string<char> echipa);
    friend std::ostream &operator<<(std::ostream &out, const Campionat &campionat);
    bool checkChampionship(const Echipa &echipa);
    virtual int calculPct(const Echipa &Echipa) const=0;
};
#endif //UNISCORE_CAMPIONAT_H
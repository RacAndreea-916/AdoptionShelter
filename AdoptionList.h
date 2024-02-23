//
// Created by Lenovo on 5/2/2023.
//

#ifndef A7_RACANDREEA_916_1_ADOPTIONLIST_H
#define A7_RACANDREEA_916_1_ADOPTIONLIST_H
#include <vector>
#include "domain.h"
class AdoptionList{
protected:
    std::vector<Dog> adopted;
    int current;
public:
    AdoptionList();

    void add(const Dog& dog);

    vector<Dog>& getList(){return this->adopted;}

    Dog getCurrentDog();

   // void see();

    void next();

    bool isempty();

    virtual ~AdoptionList(){}

};
#endif //A7_RACANDREEA_916_1_ADOPTIONLIST_H

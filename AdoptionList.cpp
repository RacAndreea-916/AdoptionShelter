//
// Created by Lenovo on 5/2/2023.
//

#include "AdoptionList.h"
AdoptionList::AdoptionList() {
    this->current=0;
}

void AdoptionList::add(const Dog &dog) {
    this->adopted.push_back(dog);
}

Dog AdoptionList::getCurrentDog() {
    if(this->current==this->adopted.size())
        this->current=0;
    return this->adopted[this->current];
}

//void AdoptionList::see() {
//    if(this->adopted.size()==0)
//        return;
//    this->current=0;
//    Dog currentDog=this->getCurrentDog();
////    currentDog.see();
//}

void AdoptionList::next() {
    if(this->adopted.size()==0)
        return;
    this->current++;
    Dog currentDog=this->getCurrentDog();
//    currentDog.see();
}

bool AdoptionList::isempty() {
    return this->adopted.size()==0;
}
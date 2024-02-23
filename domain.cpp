//
// Created by Lenovo on 4/19/2023.
//

#include "domain.h"
#include <vector>
#include <string>
#include <sstream>
#include "Utils.h"
//#include <Windows.h>


using namespace std;
//
// Created by Lenovo on 4/19/2023.
//
//
// Created by Lenovo on 3/27/2023.
//

#include <iostream>
Dog::Dog(){}

//Dog::~Dog() =default;

Dog::Dog(const int &age, const std::string &name,const std::string &breed, const std::string &photograph) {
    this->age=age;
    this->name=name;
    this->breed=breed;
    this->photograph=photograph;
}

int Dog::get_age()const {
    return this->age;
}

string Dog::get_breed()const {
    return this->breed;
}

string Dog::get_name() const{
    return this->name;
}

string Dog::get_photograph()const {
    return this->photograph;
}

void Dog::set_age(int new_age){
    this->age=new_age;
}

void Dog::set_name(string new_name) {
    this->name=new_name;
}

void Dog::set_breed(string new_breed){
    this->breed=new_breed;
}

//Dog &Dog::operator=(const Dog &dog) {
//    this->name=dog.name;
//    this->age=dog.age;
//    this->breed=dog.breed;
//    this->photograph=dog.photograph;
//    return *this;
//}

//void Dog::see() {
//    ShellExecuteA(NULL, NULL, "chrome.exe", this->get_photograph().c_str(), NULL, SW_SHOWNORMAL);
//
//}

istream& operator>>(istream& is, Dog& dog){
    string line;
    getline(is, line);

    vector<string> tokens;
    stringstream str(line);
    string tmp;
    while(getline(str, tmp, ','))
        tokens.push_back(tmp);

    if(tokens.size()!=4)
        return is;
    dog.name=tokens[0];
    dog.age=std::stoi(tokens[1]);
    dog.breed=tokens[2];
    dog.photograph=tokens[3];

    return is;
}

ostream &operator<<(ostream &os, const Dog &dog){
    os<<dog.name<<","<<dog.age<<","<<dog.breed<<","<<dog.photograph<<"\n";
    return os;
}

string Dog::toString() {
    string result="name: "+this->name+" breed: "+this->breed+" photo: "+this->photograph;
    return result;
}
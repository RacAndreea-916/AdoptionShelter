//
// Created by Lenovo on 4/19/2023.
//

#ifndef A7_RACANDREEA_916_1_REPO_H
#define A7_RACANDREEA_916_1_REPO_H


#pragma once
#include <cstdlib>
#include "domain.h"
#include <vector>



class Repo{
protected:

    vector<Dog> dogs;

public:

   // ~Repo();

    void init_repository();


    Repo();

    virtual void addRepo(int age, string name, string breed, string photograph);

    virtual void deleteRepo(string name, string breed, int age);

    virtual int checkExistence(string name, string breed, int age);

    virtual void updateRepo(int age,string name, string breed,
                   int new_age, string new_name, string new_breed, string new_photo);


    virtual int GetSize();


    virtual vector<Dog>& GetrArray();



    Dog& operator[](int position){
        return(this->dogs)[position];
    }

};

#endif //A7_RACANDREEA_916_1_REPO_H

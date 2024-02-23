//
// Created by Lenovo on 4/19/2023.
//

#ifndef A7_RACANDREEA_916_1_FILEREPO_H
#define A7_RACANDREEA_916_1_FILEREPO_H

#pragma once
#include <cstdlib>
#include "domain.h"
#include <vector>
#include "repo.h"
using namespace std;
#include <fstream>


class FileRepo: public Repo{
private:

    void LoadData();
    Dog GetElement(int position);
    string FileName;
    void WriteData();


public:

    //~FileRepo();

    FileRepo(const string& file);


    void addRepo(int age, string name, string breed, string photograph)override ;

    void deleteRepo(string name, string breed, int age)override;

    int checkExistence(string name, string breed, int age)override;

    void updateRepo(int age,string name, string breed,
                   int new_age, string new_name, string new_breed, string new_photo)override;

    int GetSize()override;

    vector<Dog>& GetrArray()override;



};

#endif //A7_RACANDREEA_916_1_FILEREPO_H

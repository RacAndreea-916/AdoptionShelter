//
// Created by Lenovo on 4/19/2023.
//

#ifndef A7_RACANDREEA_916_1_SERVICE_H
#define A7_RACANDREEA_916_1_SERVICE_H


#include "repo.h"
#include "domain.h"
//#include <windows.h>
#include <bits/stdc++.h>
#include "fileRepo.h"
#include "Validator.h"
#include "FileAdoptionList.h"

class Service{
private:
    FileRepo* repo;
    FileAdoptionList* user_repo;
    DogValidator  validator;
public:
    // ~Service();

    Service() {
        this->user_repo= nullptr;
        this->repo= nullptr;
        this->validator=DogValidator{};
    };

    Service(FileRepo* repo, FileAdoptionList* user_repo, DogValidator v): repo{repo}, user_repo{user_repo},validator{v}{}

    FileAdoptionList* getList() const {return user_repo;}

    void addService(int age, string name, string breed, string photograph);

    void deleteService(string name, string breed, int age);

    void updateService(int age, string name, string breed,
                      int new_age, string new_name, string new_breed, string new_photo);

    int GetSize();

    //int GetUserSize();

    void addUserService(const Dog& dog );

    vector<Dog>& GetRepo();

    vector<Dog>& GetUserRepo(){return this->user_repo->getList();}

   void saveList();

    int existenceCheck(string name, string breed, int age){return this->repo->checkExistence(name,breed,age);}
};



#endif //A7_RACANDREEA_916_1_SERVICE_H

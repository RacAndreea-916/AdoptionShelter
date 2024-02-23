//
// Created by Lenovo on 4/19/2023.
//

#include "service.h"
#include "fileRepo.h"
// Created by Lenovo on 4/19/2023.
//
#include "service.h"
#include <bits/stdc++.h>
#include <iostream>

//Service::Service(FileRepo &repo, Repo& user_repo, DogValidator& v):
//    this->repo=repo;
//    this->user_repo=user_repo;
//        repo{repo}, user_repo{user_repo}, validator{v}
//
//{
//}

//Service::~Service() {
//    delete this->repo;
//    delete this->user_repo;
//}

int Service::GetSize() {
    return this->repo->GetSize();
}

//int Service::GetUserSize(){
//    return this->user_repo.;
//}

void Service::addService(int age, string name, string breed, string photograph) {
    Dog d(age, name, breed, photograph);
    this->validator.validate(d);
    this->validator.validateDuplicate(d, this->GetRepo());
    this->repo->addRepo(age, name, breed, photograph);

}

void Service:: addUserService(const Dog& dog)
{
     if(this->user_repo== nullptr)
         return;
     this->user_repo->add(dog);
}


void Service::deleteService(string name, string breed, int age) {
    this->repo->deleteRepo(name, breed, age);
}

void Service::updateService(int age, string name, string breed,
                           int new_age, string new_name, string new_breed, string new_photo) {
    this->repo->updateRepo(age, name, breed,  new_age, new_name, new_breed,new_photo);
}

vector<Dog>& Service::GetRepo() {
    return this->repo->GetrArray();
}

void Service::saveList() {
    if(this->user_repo== nullptr)
        return;
    this->user_repo->writeToFile();
}

//vector<Dog>& Service::GetUserRepo() {
//    return this->user_repo->;
//
//}



//void Service::AdoptAPet(Dog pet)
//{
//
//    this->user_repo.addRepo(pet.get_age(),pet.get_name(),pet.get_breed(),pet.get_photograph());
//
//}


//
// Created by Lenovo on 4/19/2023.
//
#include <sstream>
#include "fileRepo.h"
#include <fstream>
#include <string.h>
#include "Exceptions.h"
using namespace std;
FileRepo::FileRepo(const string &file) {
    this->FileName=file;
    this->LoadData();
}

//FileRepo::~FileRepo(){
//    dogs.clear();
//}

void FileRepo::WriteData() {
    ofstream outFile(this->FileName);
    if(!outFile.is_open())
        throw FileException("the file could not be open");

    for(auto d:this->dogs)
        outFile << d;
    outFile.close();
}

void FileRepo::LoadData() {
    ifstream inFile(this->FileName);
    if(!inFile.is_open())
        throw FileException("the file could not be open");
    Dog d;
    while(inFile >> d)
        this->dogs.push_back(d);
    inFile.close();


}
void FileRepo::addRepo(int age, string name, string breed, string photograph) {
    int position;
    position = checkExistence(name, breed, age);
    if(position==-1) {
        Dog d(age, name, breed, photograph);
        this->dogs.push_back(d);
        WriteData();
    //    return 1;
    }

    else
        throw RepositoryExceptions("This dog already exists");

}

int FileRepo::checkExistence(string name, string breed, int age) {
    int position;
    for(int i=0; i<this->dogs.size();i++)
        if(dogs[i].get_name()==name && dogs[i].get_breed()==breed
           && dogs[i].get_age()==age)
            return i;
    return -1;
}

void FileRepo::deleteRepo(string name, string breed, int age) {
    int position;
    position = checkExistence(name, breed, age);
    if(position==-1)
        throw RepositoryExceptions("the dog does not exist");
    else
    {
        this->dogs.erase(dogs.begin()+position);
        WriteData();
       // return 1;
    }

}

void FileRepo::updateRepo(int age, string name, string breed,
                     int new_age, string new_name, string new_breed, string new_photo)
{
    int position;
    position= checkExistence(name, breed, age);
    if(position==-1)
        throw RepositoryExceptions("the dogp does not exist");
    else
    {
        Dog dog(new_age, new_name, new_breed, new_photo);
        this->dogs[position]=dog;
        WriteData();
        //return 1;
    }
}

int FileRepo::GetSize() {
    return this->dogs.size();
}

vector<Dog>& FileRepo::GetrArray() {
    return this->dogs;
}

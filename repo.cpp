//
// Created by Lenovo on 4/19/2023.
//

#include "repo.h"
#include <fstream>
using namespace std;
Repo::Repo(){

}

//Repo::~Repo() {
//    dogs.clear();
//}

void Repo::addRepo(int age, string name, string breed, string photograph) {
    int position;
    position = checkExistence(name, breed, age);
    if(position==-1) {
        Dog d(age, name, breed, photograph);
        this->dogs.push_back(d);

    }



}

int Repo::checkExistence(string name, string breed, int age) {
    int position;
    for(int i=0; i<this->dogs.size();i++)
        if(dogs[i].get_name()==name && dogs[i].get_breed()==breed
           && dogs[i].get_age()==age)
            return i;
    return -1;
}

void Repo::deleteRepo(string name, string breed, int age) {
    int position;
    position = checkExistence(name, breed, age);
    if(position!=-1)


    {
        this->dogs.erase(dogs.begin()+position);

    }

}

void Repo::updateRepo(int age, string name, string breed,
                     int new_age, string new_name, string new_breed, string new_photo)
{
    int position;
    position= checkExistence(name, breed, age);
    if(position!=-1)


    {
        Dog dog(new_age, new_name, new_breed, new_photo);
        this->dogs[position]=dog;

    }
}

int Repo::GetSize() {
    return this->dogs.size();
}

vector<Dog>& Repo::GetrArray() {
    return this->dogs;
}

void Repo::init_repository() {
    addRepo(6, "Jimmy", "Teckel","https://www.pinterest.fr/pin/6051780741583624/" );
    addRepo(3, "Boby", "Beagle", "https://www.pinterest.fr/pin/16044142414498702/");
    addRepo(3,"Blacky", "Bichon","https://www.pinterest.fr/pin/1266706136711720/");
    addRepo(2,"Simion", "Saint Bernard","https://www.pinterest.fr/pin/228065168620573913/" );
    addRepo(1, "Vicu", "Ogar","https://www.pinterest.fr/pin/830491987510133623/");
    addRepo(1, "Pufi", "Husky","https://www.pinterest.fr/pin/633670610081037424/" );
    addRepo(3, "Gusti", "Yorkshire Terrier","https://www.pinterest.fr/pin/368873025742531481/");
    addRepo(1, "Iulia", "Chiwawa","https://www.pinterest.fr/pin/240872280063334951/");
    addRepo(2, "Muri", "Beagle","https://www.pinterest.fr/pin/3940718416868931/");
    addRepo(3, "Horea", "Pitbull","https://www.pinterest.fr/pin/62065301106946407/");
}



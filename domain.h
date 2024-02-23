//
// Created by Lenovo on 4/19/2023.
//

#ifndef A7_RACANDREEA_916_1_DOMAIN_H
#define A7_RACANDREEA_916_1_DOMAIN_H

#include <string>
#include <iostream>
using namespace std;
class Dog{
private:
    int age;
    string breed;
    string name;
    string photograph;
public:

    Dog();

    Dog(const int &age, const std::string &name, const std::string &breed, const std::string &photograph);

   // ~Dog();


     int get_age() const;
    //this function return the age of the dog

    string get_breed() const;
    //returns the breed of the animal

   string get_name() const;
    //return the name of the dog

    string get_photograph() const;
    //returns the link for the photo of dog

    void set_age(int new_age);

    void set_name(string new_name);

    void set_breed(string new_breed);
    void see();

    friend ostream& operator<<(ostream& os , const Dog& dog);

    friend istream& operator>>(istream& is , Dog& dog);

    //Dog& operator=(const Dog &dog);

    string toString();



};

#endif //A7_RACANDREEA_916_1_DOMAIN_H

//
// Created by Lenovo on 5/2/2023.
//

#include "Validator.h"
#include "repo.h"

DogException::DogException(std::vector<string> _errors):errors{_errors} {

}

vector<string> DogException::getErrors() const {
    return this->errors;
}

void DogValidator::validate(const Dog &d) {
    vector<string> errors;
    if(d.get_name().size()<3)
        errors.push_back("The name is too short\n");
    if(d.get_age()<=0)
        errors.push_back("age is a positive number\n");
    if(d.get_breed().size()<3)
        errors.push_back("The breed is too short\n");

    if(errors.size()>0)
        throw DogException(errors);
}

void DogValidator::validateDuplicate(const Dog &d, vector<Dog>vect) {
    vector<string>errors;
    for(auto dog:vect)
        if(dog.get_name()==d.get_name() && dog.get_breed()==d.get_breed() &&
        dog.get_age()==d.get_age() && dog.get_photograph()==d.get_photograph())
            errors.push_back("thre exist a duplicate");
    if(errors.size()>0)
        throw DogException(errors);
}
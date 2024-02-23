//
// Created by Lenovo on 5/2/2023.
//

#ifndef A7_RACANDREEA_916_1_VALIDATOR_H
#define A7_RACANDREEA_916_1_VALIDATOR_H
#include <string>
#include <vector>
#include "domain.h"
using namespace std;
class DogException
{
private:
    std::vector<string>errors;
public:
    DogException(std::vector<string>_errors);
    vector<string>getErrors() const;
};

class DogValidator{
public:
    DogValidator()=default;
    static void validate(const Dog& d);
    static void validateDuplicate(const Dog& d, vector<Dog>vect);

};
#endif //A7_RACANDREEA_916_1_VALIDATOR_H

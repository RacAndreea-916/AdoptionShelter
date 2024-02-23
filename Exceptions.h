//
// Created by Lenovo on 5/2/2023.
//

#ifndef A7_RACANDREEA_916_1_EXCEPTIONS_H
#define A7_RACANDREEA_916_1_EXCEPTIONS_H
#include <string>
#include <exception>
using namespace std;
class RepositoryExceptions : public std::exception
{
protected:
    string message;
public:
    RepositoryExceptions();
    RepositoryExceptions(const string& msg);
    virtual ~RepositoryExceptions(){}
    virtual const char* what();
};

class FileException : public exception
{
protected:
    string message;
public:
    FileException(const string& msg);
    virtual const char* what();
};

class DuplicateNameException : public RepositoryExceptions
{
    const char* what();
};
#endif //A7_RACANDREEA_916_1_EXCEPTIONS_H

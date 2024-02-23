//
// Created by Lenovo on 5/2/2023.
//

#include "Exceptions.h"
FileException::FileException(const string &msg):message(msg) {}

const char* FileException::what() {
    return message.c_str();
}

RepositoryExceptions::RepositoryExceptions():std::exception{}, message{""} {}

RepositoryExceptions::RepositoryExceptions(const std::string & msg): message{msg}
{}

const char* RepositoryExceptions::what() {
    return this->message.c_str();
}

const char * DuplicateNameException::what() {
    return "this name is already in database\n";
}
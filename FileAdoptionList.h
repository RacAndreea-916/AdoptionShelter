//
// Created by Lenovo on 5/2/2023.
//

#ifndef A7_RACANDREEA_916_1_FILEADOPTIONLIST_H
#define A7_RACANDREEA_916_1_FILEADOPTIONLIST_H
#include <iostream>
#include "domain.h"
#include "AdoptionList.h"
class FileAdoptionList:public AdoptionList{
protected:
    std::string fileName;
public:
    FileAdoptionList(const std::string& fileName){
        this->fileName=fileName;
    }
    virtual ~FileAdoptionList(){}
    virtual void writeToFile() = 0;
    //virtual void displayAdoptionList()=0;
};
#endif //A7_RACANDREEA_916_1_FILEADOPTIONLIST_H

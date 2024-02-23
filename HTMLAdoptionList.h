//
// Created by Lenovo on 5/2/2023.
//

#ifndef A7_RACANDREEA_916_1_HTMLADOPTIONLIST_H
#define A7_RACANDREEA_916_1_HTMLADOPTIONLIST_H
#include "FileAdoptionList.h"

class HTMLAdoptionList:public FileAdoptionList{
public:
    HTMLAdoptionList(const std::string& fileName): FileAdoptionList(fileName){};
    ~HTMLAdoptionList(){};
    void writeToFile() override;
   // void displayAdoptionList() override;

};
#endif //A7_RACANDREEA_916_1_HTMLADOPTIONLIST_H

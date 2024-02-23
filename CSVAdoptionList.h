//
// Created by Lenovo on 5/2/2023.
//

#ifndef A7_RACANDREEA_916_1_CSVADOPTIONLIST_H
#define A7_RACANDREEA_916_1_CSVADOPTIONLIST_H
using namespace std;
#include "FileAdoptionList.h"
#include <iostream>
class CSVAdoptionList:public FileAdoptionList{
public:
    CSVAdoptionList(const string &fileName): FileAdoptionList(fileName){};
    ~CSVAdoptionList(){};
    void writeToFile() override;
    //void displayAdoptionList()override;
};
#endif //A7_RACANDREEA_916_1_CSVADOPTIONLIST_H

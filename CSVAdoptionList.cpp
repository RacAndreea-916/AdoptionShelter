//
// Created by Lenovo on 5/2/2023.
//
//#include <Windows.h>
#include <fstream>
#include "Exceptions.h"
using namespace std;
#include "CSVAdoptionList.h"

void CSVAdoptionList::writeToFile() {
    ofstream f(this->fileName);
    if(!f.is_open())
        throw FileException("file cannot be open");
    for(auto d:this->adopted)
        f<<d;
    f.close();
}

//void CSVAdoptionList::displayAdoptionList() {
//    ShellExecuteA(NULL, NULL, "C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE", this->fileName.c_str(), NULL, SW_SHOWMAXIMIZED);
//
//}
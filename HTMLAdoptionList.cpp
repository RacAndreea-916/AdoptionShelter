//
// Created by Lenovo on 5/2/2023.
//

#include "HTMLAdoptionList.h"
#include <fstream>
#include "Exceptions.h"
//#include <Windows.h>

using namespace std;

void HTMLAdoptionList::writeToFile() {
    ofstream f(this->fileName);
    if(!f.is_open())
        throw FileException("no file");
    f << "[\n";
    int index = 0;
    for (auto dog : this->adopted) {
        f << "\t{\n";
        f << "\t\t" << "\"name\": \"" << dog.get_name() << "\",\n";
        f << "\t\t" << "\"breed\": \"" << dog.get_breed() << "\",\n";
        f << "\t\t" << "\"age\":" << dog.get_age()<< "\",\n";
        //f << "\t\t\t{\n";
        //f << "\t\t\t\t" << "\"minutes\":" << dog.getDuration().getMinutes() << ",\n";
        //f << "\t\t\t\t" << "\"seconds\":" << dog.getDuration().getSeconds() << "\n";
        //f << "\t\t\t},\n";
        f << "\t\t" << "\"source\": \"" << dog.get_photograph() << "\"\n";
        f << "\t}";
        if (index != this->adopted.size() - 1) {
            f << ",";
        }
        f << "\n";
        index++;
    }
    f << "]";
    f.close();
}

//void HTMLAdoptionList::displayAdoptionList() {
//    ShellExecuteA(NULL, NULL, "C:\\arhitectura sistemelor de calcul\\ASM_tools\\asm_tools\\npp\\notepad++.exe", this->fileName.c_str(), NULL, SW_SHOWMAXIMIZED);
//
//}
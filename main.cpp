#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include "service.h"
#include "fileRepo.h"
#include "AdoptionList.h"
#include "CSVAdoptionList.h"
#include "Validator.h"
#include "qtui2.h"
#include "gui.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    FileAdoptionList *p= nullptr;
    p=new CSVAdoptionList("1.csv");
    FileRepo r("dogs.txt");


    Service service(&r,p,DogValidator{});
//    GUI ui(service);
    QTUI2 ui(service);
    ui.show();

    return a.exec();
}

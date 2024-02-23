//
// Created by Lenovo on 5/22/2023.
//

#ifndef A89_RACANDREEA_916_GUI_H
#define A89_RACANDREEA_916_GUI_H
#include<QtWidgets/QMainWindow>
#include "service.h"
#include <QListWidget>
#include<QPushButton>
#include<QLineEdit>

class GUI:public QWidget{
private:
    Service& serv;
    QListWidget* dogsListWidget;
    QLineEdit* nameLineEdit;
    QLineEdit* breedLineEdit;
    QLineEdit* ageLineEdit;
    QLineEdit* sourceLineEdit;
    QPushButton* addButton;
    QPushButton* deleteButton;
    QPushButton* updateButton;
public:
    GUI(Service& s);
private:
    void initGUI();
    void populateList();
    void connectSignalsAndSlots();
    void addDog();
    void deleteDog();
    void updateDog();
    int getSElectedIndex();
};

#endif //A89_RACANDREEA_916_GUI_H

//
// Created by Lenovo on 5/17/2023.
//

#ifndef A89_RACANDREEA_916_QTUI_H
#define A89_RACANDREEA_916_QTUI_H

#include <QWidget>
#include <QHBoxLayout>
#include <QListWidget>
#include <QPushButton>
#include "service.h"

QT_BEGIN_NAMESPACE
namespace Ui { class QTUI; }
QT_END_NAMESPACE

class QTUI : public QWidget {
Q_OBJECT

public:
    explicit QTUI(QWidget *parent = nullptr, Service service = Service());
//    GUI(Service& s);
    ~QTUI() override;

private:
    Ui::QTUI *ui;

    void initGUI();
    void populateList();
    void connectSignalsAndSlots();
    void addDog();
    void deleteDog();
    void updateDog();
    int getSElectedIndex();
private:



    Service service;
    QListWidget* dogsListWidget;
    QLineEdit* nameLineEdit;
    QLineEdit* breedLineEdit;
    QLineEdit* ageLineEdit;
    QLineEdit* sourceLineEdit;
    QPushButton* addButton;
    QPushButton* deleteButton;
    QPushButton* updateButton;
};


#endif //A89_RACANDREEA_916_QTUI_H

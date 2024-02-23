//
// Created by Lenovo on 5/31/2023.
//

#ifndef A89_RACANDREEA_916_SECONDDIALOG_H
#define A89_RACANDREEA_916_SECONDDIALOG_H

#include <QWidget>
#include "service.h"

QT_BEGIN_NAMESPACE
namespace Ui { class seconddialog; }
QT_END_NAMESPACE

class seconddialog : public QWidget {
Q_OBJECT

public:
    explicit seconddialog(Service&service,QWidget *parent = nullptr);

    ~seconddialog() override;

private:
    Ui::seconddialog *ui;
    Service& service;
    void connectSignalsAndSlots();
    void populateList();
    void addDog();
    void deleteDog();
    void updateDog();
    int getSelectedIndex();

};


#endif //A89_RACANDREEA_916_SECONDDIALOG_H

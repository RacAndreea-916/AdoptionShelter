//
// Created by Lenovo on 5/31/2023.
//

#ifndef A89_RACANDREEA_916_THIRDDIALOG_H
#define A89_RACANDREEA_916_THIRDDIALOG_H

#include <QWidget>
#include "service.h"

QT_BEGIN_NAMESPACE
namespace Ui { class thirdDialog; }
QT_END_NAMESPACE

class thirdDialog : public QWidget {
Q_OBJECT

public:
    explicit thirdDialog(Service& service, QWidget *parent = nullptr);

    ~thirdDialog() override;

private:
    Ui::thirdDialog *ui;
    Service& service;
    void connectSignalsAndSlots();
    void populateList();
    void saveList();
    void seeDogs();
    void filterDogs();
    int getSelectedIndex();
    void add();
    void nextDog();
    void openFile();
};


#endif //A89_RACANDREEA_916_THIRDDIALOG_H

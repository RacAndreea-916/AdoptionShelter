//
// Created by Lenovo on 5/31/2023.
//

#ifndef A89_RACANDREEA_916_QTUI2_H
#define A89_RACANDREEA_916_QTUI2_H

#include <QWidget>
#include "service.h"
#include "seconddialog.h"
#include "thirddialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class QTUI2; }
QT_END_NAMESPACE

class QTUI2 : public QWidget {
Q_OBJECT

public:
    explicit QTUI2(Service & service, QWidget *parent = nullptr);

    ~QTUI2() override;

private:
    Ui::QTUI2 *ui;
    Service& service;
    seconddialog secondDialog;
    thirdDialog thirdDialog;
    void pushAdmin();
    void pushUser();
    void connectButtonsAndSlots();

};


#endif //A89_RACANDREEA_916_QTUI2_H

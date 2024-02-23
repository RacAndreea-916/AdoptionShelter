//
// Created by Lenovo on 5/31/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_QTUI2.h" resolved

#include "qtui2.h"
#include "ui_QTUI2.h"
#include "seconddialog.h"
#include "thirddialog.h"


QTUI2::QTUI2(Service& service,QWidget *parent) :
        service(service),QWidget(parent), ui(new Ui::QTUI2),secondDialog(this->service), thirdDialog(this->service) {
    ui->setupUi(this);
    connectButtonsAndSlots();
}

QTUI2::~QTUI2() {
    delete ui;
}

void QTUI2::pushAdmin() {

    secondDialog.show();

}

void QTUI2::pushUser() {
    thirdDialog.show();
}

void QTUI2::connectButtonsAndSlots() {
    QObject::connect(this->ui->AdminPushButton, &QPushButton::clicked, this,&QTUI2::pushAdmin );
    QObject::connect(this->ui->UserPushButton, &QPushButton::clicked, this,&QTUI2::pushUser );

}

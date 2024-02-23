//
// Created by Lenovo on 5/31/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_thirdDialog.h" resolved

#include <QtGui>
#include "thirddialog.h"
#include "ui_thirdDialog.h"
#include <shellapi.h>
#include <bits/stdc++.h>
#include <Windows.h>


thirdDialog::thirdDialog(Service&service,QWidget *parent) :
        service(service),QWidget(parent), ui(new Ui::thirdDialog) {
    ui->setupUi(this);
    this->connectSignalsAndSlots();
}

thirdDialog::~thirdDialog() {
    delete ui;
}

void thirdDialog::saveList() {
    this->service.saveList();
}

void thirdDialog::openFile(){
    std::string command="start excel 1.csv";
    system(command.c_str());
}

void thirdDialog::connectSignalsAndSlots() {
    QObject::connect(this->ui->SavePushButton, &QPushButton::clicked, this, &thirdDialog::saveList);
    QObject::connect(this->ui->FilterPushButton, &QPushButton::clicked, this, &thirdDialog::filterDogs);
    QObject::connect(this->ui->SeepushButton, &QPushButton::clicked, this, &thirdDialog::seeDogs);
    QObject::connect(this->ui->AddpushButton, &QPushButton::clicked, this, &thirdDialog::add);
    QObject::connect(this->ui->NextpushButton, &QPushButton::clicked, this, &thirdDialog::nextDog);
    QObject::connect(this->ui->OpenpushButton, &QPushButton::clicked, this, &thirdDialog::openFile  );



}

void thirdDialog::filterDogs() {
    this->ui->FilterListWidget->clear();
    int age=stoi(this->ui->AgeLineEdit->text().toStdString());
    string breed=this->ui->BreedLineEdit->text().toStdString();
    for(auto d:this->service.GetRepo())
        if(d.get_breed()==breed && d.get_age()<age)
            this->ui->FilterListWidget->addItem(QString::fromStdString(d.get_name()+"--"+d.get_breed()+"--"+ to_string(d.get_age())));
}

int thirdDialog::getSelectedIndex() {
    QModelIndexList indexList = this->ui->AdoptionListWidget->selectionModel()->selectedIndexes();
    if (indexList.size() == 0)
        return -1;
    return indexList.at(0).row();
}

void thirdDialog::seeDogs() {
    Dog d=service.GetRepo()[0];
    this->ui->BreedLineEdit->setText(QString::fromStdString((d.get_breed())));
    this->ui->AgeLineEdit->setText(QString::fromStdString(to_string(d.get_age())));
    this->ui->NamelineEdit->setText(QString::fromStdString(d.get_name()));
//    ShellExecute(NULL, NULL, reinterpret_cast<LPCWSTR>("chrome.exe"),
//                 reinterpret_cast<LPCWSTR>(this->service.GetRepo()[0].get_photograph().c_str()), NULL, SW_SHOWNORMAL);

    std::wstring widePath = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>{}.from_bytes(d.get_photograph());

    HINSTANCE result = ShellExecuteW(NULL, L"open", L"chrome.exe", widePath.c_str(), NULL, SW_SHOWNORMAL);
    if (reinterpret_cast<intptr_t>(result) <= 32) {
        // Handle the case when ShellExecute fails
    }

}

void thirdDialog::populateList() {
    this->ui->AdoptionListWidget->clear();
    for(auto d:this->service.GetUserRepo())
        this->ui->AdoptionListWidget->addItem(QString::fromStdString(d.get_name()+" "+d.get_breed()+" "+ to_string(d.get_age())));

}

void thirdDialog::add(){
    string name=this->ui->NamelineEdit->text().toStdString();
    string breed=this->ui->BreedLineEdit->text().toStdString();
    int age = stoi(this->ui->AgeLineEdit->text().toStdString());
    int index = this->service.existenceCheck(name,breed,age);
    Dog d=service.GetRepo()[index];


    this->service.addUserService(d);
    this->populateList();
}

void thirdDialog::nextDog(){
    Dog d;
    string name=this->ui->NamelineEdit->text().toStdString();
    string breed=this->ui->BreedLineEdit->text().toStdString();
    int age = stoi(this->ui->AgeLineEdit->text().toStdString());
    int index = this->service.existenceCheck(name,breed,age);
    if(index==this->service.GetSize())
         index=0;
    d=service.GetRepo()[index+1];

    this->ui->BreedLineEdit->setText(QString::fromStdString((d.get_breed())));
    this->ui->AgeLineEdit->setText(QString::fromStdString(to_string(d.get_age())));
    this->ui->NamelineEdit->setText(QString::fromStdString(d.get_name()));
//    ShellExecute(NULL,NULL, "chrome.exe", this->service.GetRepo()[index].get_photograph().c_str(), NULL, SW_SHOWNORMAL);

    std::wstring widePath = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>{}.from_bytes(d.get_photograph());

    HINSTANCE result = ShellExecuteW(NULL, L"open", L"chrome.exe", widePath.c_str(), NULL, SW_SHOWNORMAL);
    if (reinterpret_cast<intptr_t>(result) <= 32) {
        // Handle the case when ShellExecute fails
    }



}
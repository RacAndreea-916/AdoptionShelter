//
// Created by Lenovo on 5/31/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_seconddialog.h" resolved

#include "seconddialog.h"
#include "ui_seconddialog.h"
#include <QMessageBox>
#include "service.h"
#include "Exceptions.h"

seconddialog::seconddialog(Service&service,QWidget *parent) :
       service(service), QWidget(parent), ui(new Ui::seconddialog) {
    ui->setupUi(this);
    this->populateList();
    this->connectSignalsAndSlots();
}

seconddialog::~seconddialog() {
    delete ui;
}
void seconddialog::populateList(){
    this->ui->DOgslistWidget->clear();
    for(auto dog:this->service.GetRepo())
        this->ui->DOgslistWidget->addItem(QString::fromStdString(dog.get_name()+"--"+dog.get_breed()+"--"+ to_string(dog.get_age())));
}

void seconddialog::addDog() {
    string name=this->ui->NamelineEdit->text().toStdString();
    string breed=this->ui->BreedLineEdit->text().toStdString();
    int age= stoi(this->ui->AgeLineEdit->text().toStdString());

    string source=this->ui->SourceLineEdit->text().toStdString();
    try{
    this->service.addService(age, name, breed, source);}
    catch (DogException& ex)
    {
        QMessageBox::critical(this, "Error", QString::fromStdString(ex.getErrors()[0]));

    }
    catch (DuplicateNameException& ex)
    {
        QMessageBox::critical(this, "Error", QString::fromStdString("this name already exists!!!"));

    }
    this->populateList();
}

void seconddialog::connectSignalsAndSlots() {
    QObject::connect(this->ui->DeletePushButton, &QPushButton::clicked, this, &seconddialog::deleteDog);
    QObject::connect(this->ui->UpdatePushButton, &QPushButton::clicked, this, &seconddialog::updateDog);

    QObject::connect(this->ui->AddPushButton, &QPushButton::clicked, this, &seconddialog::addDog);
    QObject::connect(this->ui->DOgslistWidget,&QListWidget::clicked,[this](){
        int selectedIndex=getSelectedIndex();
        Dog d=service.GetRepo()[selectedIndex];
        this->ui->NamelineEdit->setText(QString::fromStdString(d.get_name()));
        this->ui->BreedLineEdit->setText(QString::fromStdString((d.get_breed())));
        this->ui->AgeLineEdit->setText(QString::fromStdString(to_string(d.get_age())));
        this->ui->SourceLineEdit->setText(QString::fromStdString(d.get_photograph()));


    });
}

void seconddialog::deleteDog() {
    int index=getSelectedIndex();
    if(index==-1)
    {
        QMessageBox::critical(this,"Error", "No song selected!");
        return;
    }
    Dog d=this->service.GetRepo()[index];
    this->service.deleteService(d.get_name(), d.get_breed(), d.get_age());
    this->populateList();
}

int seconddialog::getSelectedIndex() {
    QModelIndexList indexList=this->ui->DOgslistWidget->selectionModel()->selectedIndexes();
    if(indexList.size()==0)
        return -1;
    return indexList.at(0).row();
}

void seconddialog::updateDog() {
    int index=getSelectedIndex();
    if(index==-1)
    {
        QMessageBox::critical(this,"Error", "No song selected!");
        return;
    }
    Dog d=this->service.GetRepo()[index];
    string newName=this->ui->NamelineEdit->text().toStdString();
    string newBreed=this->ui->BreedLineEdit->text().toStdString();
    int newAge= stoi(this->ui->AgeLineEdit->text().toStdString());
    string newSource=this->ui->SourceLineEdit->text().toStdString();
    this->service.updateService(d.get_age(), d.get_name(), d.get_breed(), newAge, newName, newBreed, newSource);

    this->populateList();

}

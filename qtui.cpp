//
// Created by Lenovo on 5/17/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_QTUI.h" resolved

#include "qtui.h"
#include "ui_QTUI.h"
#include "service.h"
#include <QLineEdit>
#include "QVBoxLayout"
#include <QFormLayout>
#include <QMessageBox>
#include "Exceptions.h"
#include <algorithm>

QTUI::QTUI(QWidget *parent,Service service) :
        QWidget(parent), ui(new Ui::QTUI) {
    ui->setupUi(this);
    this->service = service;

    this->initGUI();
    this->populateList();
    this->connectSignalsAndSlots();
}

QTUI::~QTUI() {
    delete ui;
}

void QTUI::initGUI() {
    dogsListWidget=new QListWidget;
    nameLineEdit=new QLineEdit;
    breedLineEdit=new QLineEdit;
    sourceLineEdit=new QLineEdit;
    ageLineEdit=new QLineEdit;
    addButton=new QPushButton{"Add"};
    deleteButton=new QPushButton{"Delete"};
    updateButton=new QPushButton{"Update"};

    QVBoxLayout* mainLayout=new QVBoxLayout(this);
    mainLayout->addWidget(dogsListWidget);
    QFormLayout* formLayout=new QFormLayout;
    formLayout->addRow("Name", nameLineEdit);
    formLayout->addRow("Breed",breedLineEdit);
    formLayout->addRow("Age", ageLineEdit);
    formLayout->addRow("Source", sourceLineEdit);
    mainLayout->addLayout(formLayout);
    QHBoxLayout* buttonsLayout=new QHBoxLayout;
    buttonsLayout->addWidget(addButton);
    buttonsLayout->addWidget(deleteButton);
    buttonsLayout->addWidget(updateButton);
    mainLayout->addLayout(buttonsLayout);
}
void QTUI::populateList(){
    vector<Dog> vect=this->service.GetRepo();
    std::sort(vect.begin(), vect.end(),[](Dog&a, Dog&b){
        return a.get_age()<b.get_age();
    });
    dogsListWidget->clear();
    for(Dog dog:vect){
        dogsListWidget->addItem(QString::fromStdString(dog.get_name()+"--"+dog.get_breed()+"--"+ to_string(dog.get_age())));
    }
}


void QTUI::connectSignalsAndSlots() {
    QObject::connect(dogsListWidget,&QListWidget::clicked,[this](){
        int selectedIndex=getSElectedIndex();
        Dog d=service.GetRepo()[selectedIndex];
        nameLineEdit->setText(QString::fromStdString(d.get_name()));
        breedLineEdit->setText(QString::fromStdString((d.get_breed())));
        ageLineEdit->setText(QString::fromStdString(to_string(d.get_age())));
        sourceLineEdit->setText(QString::fromStdString(d.get_photograph()));


    });
    QObject::connect(addButton, &QPushButton::clicked, this, &QTUI::addDog);
    QObject::connect(deleteButton, &QPushButton::clicked, this, &QTUI::deleteDog);

}


int QTUI::getSElectedIndex() {
    QModelIndexList indexList=this->dogsListWidget->selectionModel()->selectedIndexes();
    if(indexList.size()==0)
        return -1;
    return indexList.at(0).row();

}

void QTUI::addDog() {
    string name=nameLineEdit->text().toStdString();
    string breed=breedLineEdit->text().toStdString();
    int age=ageLineEdit->text().toInt();
    string source=sourceLineEdit->text().toStdString();

    try{
        service.addService(age,name,breed, source);


    }
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

void QTUI::deleteDog() {
    int index=getSElectedIndex();
    if(index==-1)
    {
        QMessageBox::critical(this,"Error", "No song selected!");
        return;
    }
    Dog d=this->service.GetRepo()[index];
    this->service.deleteService(d.get_name(), d.get_breed(), d.get_age());
    this->populateList();
}
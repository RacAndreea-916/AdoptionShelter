//
// Created by Lenovo on 5/22/2023.
//

#include "gui.h"
#include "QVBoxLayout"
#include <QFormLayout>
#include <QMessageBox>
#include "Exceptions.h"
using namespace std;

GUI::GUI(Service &s):serv(s) {
    this->initGUI();
    this->populateList();
    this->connectSignalsAndSlots();
}


void GUI::initGUI() {
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
void GUI::populateList(){
    dogsListWidget->clear();
    vector<Dog> vect=this->serv.GetRepo();
    std::sort(vect.begin(), vect.end(),[](Dog&a, Dog&b){
        return a.get_name()<b.get_name();
    });
    for(Dog dog:vect){
        dogsListWidget->addItem(QString::fromStdString(dog.get_name()+"--"+dog.get_breed()+"--"+ to_string(dog.get_age())));
    }
}

void GUI::connectSignalsAndSlots() {
    QObject::connect(dogsListWidget,&QListWidget::clicked,[this](){
       int selectedIndex=getSElectedIndex();
       Dog d=serv.GetRepo()[selectedIndex];
       nameLineEdit->setText(QString::fromStdString(d.get_name()));
       breedLineEdit->setText(QString::fromStdString((d.get_breed())));
       ageLineEdit->setText(QString::fromStdString(to_string(d.get_age())));
       sourceLineEdit->setText(QString::fromStdString(d.get_photograph()));


    });
    QObject::connect(addButton, &QPushButton::clicked, this, &GUI::addDog);
    QObject::connect(deleteButton, &QPushButton::clicked, this, &GUI::deleteDog);
}

int GUI::getSElectedIndex() {
    QModelIndexList indexList=this->dogsListWidget->selectionModel()->selectedIndexes();
    if(indexList.size()==0)
        return -1;
    return indexList.at(0).row();

}

void GUI::addDog() {
    string name=nameLineEdit->text().toStdString();
    string breed=breedLineEdit->text().toStdString();
    int age=ageLineEdit->text().toInt();
    string source=sourceLineEdit->text().toStdString();

    try{
        serv.addService(age,name,breed, source);


    }
    catch (DogException& ex)
    {
        QMessageBox::critical(this, "Error", QString::fromStdString(ex.getErrors()[0]));

    }
    this->populateList();
}

void GUI::deleteDog() {
    int index=getSElectedIndex();
    if(index==-1)
    {
        QMessageBox::critical(this,"Error", "No dog selected!");
        return;
    }
    Dog d=this->serv.GetRepo()[index];
    this->serv.deleteService(d.get_name(), d.get_breed(), d.get_age());
    this->populateList();
}
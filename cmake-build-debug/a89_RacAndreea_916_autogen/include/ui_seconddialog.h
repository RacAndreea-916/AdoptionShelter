/********************************************************************************
** Form generated from reading UI file 'seconddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIALOG_H
#define UI_SECONDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seconddialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QListWidget *DOgslistWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *NamelineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *SourceLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *BreedLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *AgeLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *AddPushButton;
    QPushButton *DeletePushButton;
    QPushButton *UpdatePushButton;

    void setupUi(QWidget *seconddialog)
    {
        if (seconddialog->objectName().isEmpty())
            seconddialog->setObjectName("seconddialog");
        seconddialog->resize(420, 287);
        verticalLayout_2 = new QVBoxLayout(seconddialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");

        verticalLayout_2->addLayout(horizontalLayout_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        DOgslistWidget = new QListWidget(seconddialog);
        DOgslistWidget->setObjectName("DOgslistWidget");

        formLayout->setWidget(0, QFormLayout::LabelRole, DOgslistWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(seconddialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        NamelineEdit = new QLineEdit(seconddialog);
        NamelineEdit->setObjectName("NamelineEdit");

        horizontalLayout->addWidget(NamelineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(seconddialog);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        SourceLineEdit = new QLineEdit(seconddialog);
        SourceLineEdit->setObjectName("SourceLineEdit");

        horizontalLayout_5->addWidget(SourceLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(seconddialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        BreedLineEdit = new QLineEdit(seconddialog);
        BreedLineEdit->setObjectName("BreedLineEdit");

        horizontalLayout_2->addWidget(BreedLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(seconddialog);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        AgeLineEdit = new QLineEdit(seconddialog);
        AgeLineEdit->setObjectName("AgeLineEdit");

        horizontalLayout_3->addWidget(AgeLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        formLayout->setLayout(1, QFormLayout::LabelRole, verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        AddPushButton = new QPushButton(seconddialog);
        AddPushButton->setObjectName("AddPushButton");

        horizontalLayout_6->addWidget(AddPushButton);

        DeletePushButton = new QPushButton(seconddialog);
        DeletePushButton->setObjectName("DeletePushButton");

        horizontalLayout_6->addWidget(DeletePushButton);

        UpdatePushButton = new QPushButton(seconddialog);
        UpdatePushButton->setObjectName("UpdatePushButton");

        horizontalLayout_6->addWidget(UpdatePushButton);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_6);


        verticalLayout_2->addLayout(formLayout);


        retranslateUi(seconddialog);

        QMetaObject::connectSlotsByName(seconddialog);
    } // setupUi

    void retranslateUi(QWidget *seconddialog)
    {
        seconddialog->setWindowTitle(QCoreApplication::translate("seconddialog", "seconddialog", nullptr));
        label->setText(QCoreApplication::translate("seconddialog", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("seconddialog", "Source", nullptr));
        label_2->setText(QCoreApplication::translate("seconddialog", "Breed", nullptr));
        label_3->setText(QCoreApplication::translate("seconddialog", "Age", nullptr));
        AddPushButton->setText(QCoreApplication::translate("seconddialog", "Add", nullptr));
        DeletePushButton->setText(QCoreApplication::translate("seconddialog", "Delete", nullptr));
        UpdatePushButton->setText(QCoreApplication::translate("seconddialog", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seconddialog: public Ui_seconddialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'thirddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIALOG_H
#define UI_THIRDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thirdDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *SeepushButton;
    QPushButton *NextpushButton;
    QPushButton *AddpushButton;
    QPushButton *SavePushButton;
    QPushButton *FilterPushButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *NamelineEdit;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *AgeLineEdit;
    QLabel *label;
    QLineEdit *BreedLineEdit;
    QListWidget *AdoptionListWidget;
    QListWidget *FilterListWidget;
    QPushButton *OpenpushButton;

    void setupUi(QWidget *thirdDialog)
    {
        if (thirdDialog->objectName().isEmpty())
            thirdDialog->setObjectName("thirdDialog");
        thirdDialog->resize(400, 354);
        verticalLayout_3 = new QVBoxLayout(thirdDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        SeepushButton = new QPushButton(thirdDialog);
        SeepushButton->setObjectName("SeepushButton");

        verticalLayout_2->addWidget(SeepushButton);

        NextpushButton = new QPushButton(thirdDialog);
        NextpushButton->setObjectName("NextpushButton");

        verticalLayout_2->addWidget(NextpushButton);

        AddpushButton = new QPushButton(thirdDialog);
        AddpushButton->setObjectName("AddpushButton");

        verticalLayout_2->addWidget(AddpushButton);

        SavePushButton = new QPushButton(thirdDialog);
        SavePushButton->setObjectName("SavePushButton");

        verticalLayout_2->addWidget(SavePushButton);

        FilterPushButton = new QPushButton(thirdDialog);
        FilterPushButton->setObjectName("FilterPushButton");

        verticalLayout_2->addWidget(FilterPushButton);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(thirdDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        NamelineEdit = new QLineEdit(thirdDialog);
        NamelineEdit->setObjectName("NamelineEdit");

        horizontalLayout_5->addWidget(NamelineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(thirdDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        AgeLineEdit = new QLineEdit(thirdDialog);
        AgeLineEdit->setObjectName("AgeLineEdit");

        horizontalLayout_2->addWidget(AgeLineEdit);


        horizontalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(thirdDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        BreedLineEdit = new QLineEdit(thirdDialog);
        BreedLineEdit->setObjectName("BreedLineEdit");

        horizontalLayout->addWidget(BreedLineEdit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        AdoptionListWidget = new QListWidget(thirdDialog);
        AdoptionListWidget->setObjectName("AdoptionListWidget");

        verticalLayout_3->addWidget(AdoptionListWidget);

        FilterListWidget = new QListWidget(thirdDialog);
        FilterListWidget->setObjectName("FilterListWidget");

        verticalLayout_3->addWidget(FilterListWidget);

        OpenpushButton = new QPushButton(thirdDialog);
        OpenpushButton->setObjectName("OpenpushButton");

        verticalLayout_3->addWidget(OpenpushButton);


        retranslateUi(thirdDialog);

        QMetaObject::connectSlotsByName(thirdDialog);
    } // setupUi

    void retranslateUi(QWidget *thirdDialog)
    {
        thirdDialog->setWindowTitle(QCoreApplication::translate("thirdDialog", "thirdDialog", nullptr));
        SeepushButton->setText(QCoreApplication::translate("thirdDialog", "See Dogs", nullptr));
        NextpushButton->setText(QCoreApplication::translate("thirdDialog", "Next", nullptr));
        AddpushButton->setText(QCoreApplication::translate("thirdDialog", "Add to list", nullptr));
        SavePushButton->setText(QCoreApplication::translate("thirdDialog", "Save", nullptr));
        FilterPushButton->setText(QCoreApplication::translate("thirdDialog", "Filter by breed and age", nullptr));
        label_3->setText(QCoreApplication::translate("thirdDialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("thirdDialog", "Age", nullptr));
        label->setText(QCoreApplication::translate("thirdDialog", "Breed", nullptr));
        OpenpushButton->setText(QCoreApplication::translate("thirdDialog", "Open file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdDialog: public Ui_thirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H

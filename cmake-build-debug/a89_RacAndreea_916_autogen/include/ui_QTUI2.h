/********************************************************************************
** Form generated from reading UI file 'qtui2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTUI2_H
#define UI_QTUI2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTUI2
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *AdminPushButton;
    QPushButton *UserPushButton;

    void setupUi(QWidget *QTUI2)
    {
        if (QTUI2->objectName().isEmpty())
            QTUI2->setObjectName("QTUI2");
        QTUI2->resize(400, 300);
        verticalLayout = new QVBoxLayout(QTUI2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        AdminPushButton = new QPushButton(QTUI2);
        AdminPushButton->setObjectName("AdminPushButton");

        horizontalLayout->addWidget(AdminPushButton);

        UserPushButton = new QPushButton(QTUI2);
        UserPushButton->setObjectName("UserPushButton");

        horizontalLayout->addWidget(UserPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QTUI2);

        QMetaObject::connectSlotsByName(QTUI2);
    } // setupUi

    void retranslateUi(QWidget *QTUI2)
    {
        QTUI2->setWindowTitle(QCoreApplication::translate("QTUI2", "QTUI2", nullptr));
        AdminPushButton->setText(QCoreApplication::translate("QTUI2", "Admin", nullptr));
        UserPushButton->setText(QCoreApplication::translate("QTUI2", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTUI2: public Ui_QTUI2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTUI2_H

/********************************************************************************
** Form generated from reading UI file 'qtui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTUI_H
#define UI_QTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTUI
{
public:

    void setupUi(QWidget *QTUI)
    {
        if (QTUI->objectName().isEmpty())
            QTUI->setObjectName("QTUI");
        QTUI->resize(400, 300);

        retranslateUi(QTUI);

        QMetaObject::connectSlotsByName(QTUI);
    } // setupUi

    void retranslateUi(QWidget *QTUI)
    {
        QTUI->setWindowTitle(QCoreApplication::translate("QTUI", "QTUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTUI: public Ui_QTUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTUI_H

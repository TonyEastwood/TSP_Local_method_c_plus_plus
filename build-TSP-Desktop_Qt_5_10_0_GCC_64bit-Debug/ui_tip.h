/********************************************************************************
** Form generated from reading UI file 'tip.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIP_H
#define UI_TIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tip
{
public:

    void setupUi(QWidget *Tip)
    {
        if (Tip->objectName().isEmpty())
            Tip->setObjectName(QStringLiteral("Tip"));
        Tip->resize(400, 300);

        retranslateUi(Tip);

        QMetaObject::connectSlotsByName(Tip);
    } // setupUi

    void retranslateUi(QWidget *Tip)
    {
        Tip->setWindowTitle(QApplication::translate("Tip", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tip: public Ui_Tip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIP_H

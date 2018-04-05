/********************************************************************************
** Form generated from reading UI file 'configurerandomgenerate.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURERANDOMGENERATE_H
#define UI_CONFIGURERANDOMGENERATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureRandomGenerate
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *ConfigureRandomGenerate)
    {
        if (ConfigureRandomGenerate->objectName().isEmpty())
            ConfigureRandomGenerate->setObjectName(QStringLiteral("ConfigureRandomGenerate"));
        ConfigureRandomGenerate->resize(594, 286);
        lineEdit = new QLineEdit(ConfigureRandomGenerate);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 40, 113, 25));
        lineEdit_2 = new QLineEdit(ConfigureRandomGenerate);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(310, 40, 113, 25));
        lineEdit_3 = new QLineEdit(ConfigureRandomGenerate);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 130, 113, 25));
        pushButton = new QPushButton(ConfigureRandomGenerate);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 220, 89, 25));
        pushButton_2 = new QPushButton(ConfigureRandomGenerate);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 220, 89, 25));
        label = new QLabel(ConfigureRandomGenerate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 231, 17));
        label_2 = new QLabel(ConfigureRandomGenerate);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 40, 51, 17));
        label_3 = new QLabel(ConfigureRandomGenerate);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 40, 51, 17));
        label_4 = new QLabel(ConfigureRandomGenerate);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 90, 131, 17));

        retranslateUi(ConfigureRandomGenerate);

        QMetaObject::connectSlotsByName(ConfigureRandomGenerate);
    } // setupUi

    void retranslateUi(QWidget *ConfigureRandomGenerate)
    {
        ConfigureRandomGenerate->setWindowTitle(QApplication::translate("ConfigureRandomGenerate", "Form", nullptr));
        pushButton->setText(QApplication::translate("ConfigureRandomGenerate", "Ok", nullptr));
        pushButton_2->setText(QApplication::translate("ConfigureRandomGenerate", "Cancel", nullptr));
        label->setText(QApplication::translate("ConfigureRandomGenerate", "Range distance between points:", nullptr));
        label_2->setText(QApplication::translate("ConfigureRandomGenerate", "from", nullptr));
        label_3->setText(QApplication::translate("ConfigureRandomGenerate", "to", nullptr));
        label_4->setText(QApplication::translate("ConfigureRandomGenerate", "quantity points", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureRandomGenerate: public Ui_ConfigureRandomGenerate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURERANDOMGENERATE_H

/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->resize(590, 411);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainForm->setPalette(palette);
        pushButton = new QPushButton(MainForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 280, 171, 61));
        QPalette palette1;
        QBrush brush2(QColor(211, 215, 207, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        pushButton->setPalette(palette1);
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        label = new QLabel(MainForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 30, 201, 31));
        QPalette palette2;
        QBrush brush3(QColor(237, 212, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        QBrush brush4(QColor(190, 190, 190, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label->setPalette(palette2);
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label_2 = new QLabel(MainForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 70, 351, 41));
        QPalette palette3;
        QBrush brush5(QColor(0, 255, 212, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_2->setPalette(palette3);
        label_2->setFont(font);
        label_3 = new QLabel(MainForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 110, 91, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_3->setPalette(palette4);
        label_3->setFont(font);
        label_4 = new QLabel(MainForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 180, 211, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_4->setPalette(palette5);
        label_4->setFont(font);
        label_5 = new QLabel(MainForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 230, 231, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_5->setPalette(palette6);
        label_5->setFont(font);
        label_6 = new QLabel(MainForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 140, 511, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_6->setPalette(palette7);
        label_6->setFont(font);

        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "Main", nullptr));
        pushButton->setText(QApplication::translate("MainForm", "Start", nullptr));
        label->setText(QApplication::translate("MainForm", "\320\232\321\203\321\200\321\201\320\276\320\262\320\260 \321\200\320\276\320\261\320\276\321\202\320\260", nullptr));
        label_2->setText(QApplication::translate("MainForm", "\320\267 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\321\203  \"\320\224\320\276\321\201\320\273\321\226\320\264\320\266\320\265\320\275\320\275\321\217 \320\276\320\277\320\265\321\200\320\260\321\206\321\226\320\271\"", nullptr));
        label_3->setText(QApplication::translate("MainForm", "\320\275\320\260 \321\202\320\265\320\274\321\203: ", nullptr));
        label_4->setText(QApplication::translate("MainForm", "\321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260 \320\263\321\200\321\203\320\277\320\270 \320\206\320\241 - 51", nullptr));
        label_5->setText(QApplication::translate("MainForm", "\320\235\321\226\320\272\320\276\320\273\320\260\321\224\320\262\320\260 \320\236\320\273\320\265\320\272\321\201\320\260\320\275\320\264\321\200\320\260", nullptr));
        label_6->setText(QApplication::translate("MainForm", "\"\320\233\320\276\320\272\320\260\320\273\321\214\320\275\321\226 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\270 \320\267\320\275\320\260\321\205\320\276\320\264\320\266\320\265\320\275\320\275\321\217 \320\272\320\276\321\200\320\276\321\202\320\272\320\270\321\205 \321\210\320\273\321\217\321\205\321\226\320\262\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H

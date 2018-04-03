/********************************************************************************
** Form generated from reading UI file 'tspresult.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSPRESULT_H
#define UI_TSPRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TSPResult
{
public:
    QPushButton *buttStartPath;
    QPushButton *buttDoubleReplacement;
    QPushButton *buttTripleReplacement;
    QPushButton *buttFourthReplacement;
    QLabel *labelTime;
    QLabel *labelResult;
    QLabel *labelTimeStart;
    QLabel *labelTime2;
    QLabel *labelTime3;
    QLabel *labelTime4;
    QLabel *labelResultStart;
    QLabel *labelResult2;
    QLabel *labelResult3;
    QLabel *labelResult4;
    QLabel *labelPath;
    QLabel *labelPathStart;
    QLabel *labelPath2;
    QLabel *labelPath3;
    QLabel *labelPath4;
    QLabel *labelStartPoint;
    QLineEdit *editStartPoint;
    QPushButton *buttAllAlgorythm;
    QProgressBar *progressStartPathAccuracy;
    QProgressBar *progressDoubleReplaceAccuracy;
    QProgressBar *progressTrippleReplaceAccuracy;
    QProgressBar *progressQuadroReplaceAccuracy;
    QProgressBar *progressStartPathTime;
    QProgressBar *progressTrippleReplaceTime;
    QProgressBar *progressQuadroReplaceTime;
    QProgressBar *progressDoubleReplaceTIme;
    QLabel *label_Time;
    QLabel *label_accuracy;

    void setupUi(QWidget *TSPResult)
    {
        if (TSPResult->objectName().isEmpty())
            TSPResult->setObjectName(QStringLiteral("TSPResult"));
        TSPResult->resize(901, 450);
        buttStartPath = new QPushButton(TSPResult);
        buttStartPath->setObjectName(QStringLiteral("buttStartPath"));
        buttStartPath->setGeometry(QRect(30, 80, 151, 25));
        buttDoubleReplacement = new QPushButton(TSPResult);
        buttDoubleReplacement->setObjectName(QStringLiteral("buttDoubleReplacement"));
        buttDoubleReplacement->setGeometry(QRect(30, 140, 151, 31));
        buttTripleReplacement = new QPushButton(TSPResult);
        buttTripleReplacement->setObjectName(QStringLiteral("buttTripleReplacement"));
        buttTripleReplacement->setGeometry(QRect(40, 210, 141, 51));
        buttFourthReplacement = new QPushButton(TSPResult);
        buttFourthReplacement->setObjectName(QStringLiteral("buttFourthReplacement"));
        buttFourthReplacement->setGeometry(QRect(30, 310, 141, 25));
        labelTime = new QLabel(TSPResult);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(220, 30, 67, 17));
        labelResult = new QLabel(TSPResult);
        labelResult->setObjectName(QStringLiteral("labelResult"));
        labelResult->setGeometry(QRect(340, 30, 67, 17));
        labelTimeStart = new QLabel(TSPResult);
        labelTimeStart->setObjectName(QStringLiteral("labelTimeStart"));
        labelTimeStart->setGeometry(QRect(210, 80, 67, 17));
        labelTime2 = new QLabel(TSPResult);
        labelTime2->setObjectName(QStringLiteral("labelTime2"));
        labelTime2->setGeometry(QRect(200, 140, 67, 17));
        labelTime3 = new QLabel(TSPResult);
        labelTime3->setObjectName(QStringLiteral("labelTime3"));
        labelTime3->setGeometry(QRect(200, 220, 67, 17));
        labelTime4 = new QLabel(TSPResult);
        labelTime4->setObjectName(QStringLiteral("labelTime4"));
        labelTime4->setGeometry(QRect(200, 310, 67, 17));
        labelResultStart = new QLabel(TSPResult);
        labelResultStart->setObjectName(QStringLiteral("labelResultStart"));
        labelResultStart->setGeometry(QRect(340, 80, 67, 17));
        labelResult2 = new QLabel(TSPResult);
        labelResult2->setObjectName(QStringLiteral("labelResult2"));
        labelResult2->setGeometry(QRect(330, 130, 67, 17));
        labelResult3 = new QLabel(TSPResult);
        labelResult3->setObjectName(QStringLiteral("labelResult3"));
        labelResult3->setGeometry(QRect(340, 220, 67, 17));
        labelResult4 = new QLabel(TSPResult);
        labelResult4->setObjectName(QStringLiteral("labelResult4"));
        labelResult4->setGeometry(QRect(350, 300, 67, 17));
        labelPath = new QLabel(TSPResult);
        labelPath->setObjectName(QStringLiteral("labelPath"));
        labelPath->setGeometry(QRect(460, 30, 67, 17));
        labelPathStart = new QLabel(TSPResult);
        labelPathStart->setObjectName(QStringLiteral("labelPathStart"));
        labelPathStart->setGeometry(QRect(460, 80, 271, 17));
        labelPath2 = new QLabel(TSPResult);
        labelPath2->setObjectName(QStringLiteral("labelPath2"));
        labelPath2->setGeometry(QRect(480, 120, 351, 17));
        labelPath3 = new QLabel(TSPResult);
        labelPath3->setObjectName(QStringLiteral("labelPath3"));
        labelPath3->setGeometry(QRect(470, 210, 371, 17));
        labelPath4 = new QLabel(TSPResult);
        labelPath4->setObjectName(QStringLiteral("labelPath4"));
        labelPath4->setGeometry(QRect(490, 290, 321, 17));
        labelStartPoint = new QLabel(TSPResult);
        labelStartPoint->setObjectName(QStringLiteral("labelStartPoint"));
        labelStartPoint->setGeometry(QRect(60, 370, 331, 17));
        editStartPoint = new QLineEdit(TSPResult);
        editStartPoint->setObjectName(QStringLiteral("editStartPoint"));
        editStartPoint->setGeometry(QRect(50, 400, 113, 25));
        buttAllAlgorythm = new QPushButton(TSPResult);
        buttAllAlgorythm->setObjectName(QStringLiteral("buttAllAlgorythm"));
        buttAllAlgorythm->setGeometry(QRect(420, 410, 89, 25));
        progressStartPathAccuracy = new QProgressBar(TSPResult);
        progressStartPathAccuracy->setObjectName(QStringLiteral("progressStartPathAccuracy"));
        progressStartPathAccuracy->setGeometry(QRect(590, 80, 118, 23));
        QPalette palette;
        QBrush brush(QColor(115, 210, 22, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        QBrush brush1(QColor(145, 145, 145, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressStartPathAccuracy->setPalette(palette);
        progressStartPathAccuracy->setValue(24);
        progressDoubleReplaceAccuracy = new QProgressBar(TSPResult);
        progressDoubleReplaceAccuracy->setObjectName(QStringLiteral("progressDoubleReplaceAccuracy"));
        progressDoubleReplaceAccuracy->setGeometry(QRect(580, 120, 118, 23));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressDoubleReplaceAccuracy->setPalette(palette1);
        progressDoubleReplaceAccuracy->setValue(24);
        progressTrippleReplaceAccuracy = new QProgressBar(TSPResult);
        progressTrippleReplaceAccuracy->setObjectName(QStringLiteral("progressTrippleReplaceAccuracy"));
        progressTrippleReplaceAccuracy->setGeometry(QRect(560, 200, 118, 23));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressTrippleReplaceAccuracy->setPalette(palette2);
        progressTrippleReplaceAccuracy->setValue(24);
        progressQuadroReplaceAccuracy = new QProgressBar(TSPResult);
        progressQuadroReplaceAccuracy->setObjectName(QStringLiteral("progressQuadroReplaceAccuracy"));
        progressQuadroReplaceAccuracy->setGeometry(QRect(590, 290, 118, 23));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressQuadroReplaceAccuracy->setPalette(palette3);
        progressQuadroReplaceAccuracy->setValue(24);
        progressStartPathTime = new QProgressBar(TSPResult);
        progressStartPathTime->setObjectName(QStringLiteral("progressStartPathTime"));
        progressStartPathTime->setGeometry(QRect(750, 80, 118, 23));
        QPalette palette4;
        QBrush brush2(QColor(204, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressStartPathTime->setPalette(palette4);
        progressStartPathTime->setAutoFillBackground(false);
        progressStartPathTime->setValue(24);
        progressTrippleReplaceTime = new QProgressBar(TSPResult);
        progressTrippleReplaceTime->setObjectName(QStringLiteral("progressTrippleReplaceTime"));
        progressTrippleReplaceTime->setGeometry(QRect(720, 200, 118, 23));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressTrippleReplaceTime->setPalette(palette5);
        progressTrippleReplaceTime->setAutoFillBackground(false);
        progressTrippleReplaceTime->setValue(24);
        progressQuadroReplaceTime = new QProgressBar(TSPResult);
        progressQuadroReplaceTime->setObjectName(QStringLiteral("progressQuadroReplaceTime"));
        progressQuadroReplaceTime->setGeometry(QRect(750, 290, 118, 23));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressQuadroReplaceTime->setPalette(palette6);
        progressQuadroReplaceTime->setAutoFillBackground(false);
        progressQuadroReplaceTime->setValue(24);
        progressDoubleReplaceTIme = new QProgressBar(TSPResult);
        progressDoubleReplaceTIme->setObjectName(QStringLiteral("progressDoubleReplaceTIme"));
        progressDoubleReplaceTIme->setGeometry(QRect(740, 120, 118, 23));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressDoubleReplaceTIme->setPalette(palette7);
        progressDoubleReplaceTIme->setAutoFillBackground(false);
        progressDoubleReplaceTIme->setValue(24);
        label_Time = new QLabel(TSPResult);
        label_Time->setObjectName(QStringLiteral("label_Time"));
        label_Time->setGeometry(QRect(780, 30, 67, 17));
        label_accuracy = new QLabel(TSPResult);
        label_accuracy->setObjectName(QStringLiteral("label_accuracy"));
        label_accuracy->setGeometry(QRect(610, 30, 67, 17));

        retranslateUi(TSPResult);

        QMetaObject::connectSlotsByName(TSPResult);
    } // setupUi

    void retranslateUi(QWidget *TSPResult)
    {
        TSPResult->setWindowTitle(QApplication::translate("TSPResult", "Form", nullptr));
        buttStartPath->setText(QApplication::translate("TSPResult", "Start path", nullptr));
        buttDoubleReplacement->setText(QApplication::translate("TSPResult", "2 replacement", nullptr));
        buttTripleReplacement->setText(QApplication::translate("TSPResult", "3 replacement", nullptr));
        buttFourthReplacement->setText(QApplication::translate("TSPResult", "4 replacement", nullptr));
        labelTime->setText(QApplication::translate("TSPResult", "Time", nullptr));
        labelResult->setText(QApplication::translate("TSPResult", "Result Value", nullptr));
        labelTimeStart->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelTime2->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelTime3->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelTime4->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelResultStart->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelResult2->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelResult3->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelResult4->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelPath->setText(QApplication::translate("TSPResult", "Path", nullptr));
        labelPathStart->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelPath2->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelPath3->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelPath4->setText(QApplication::translate("TSPResult", "TextLabel", nullptr));
        labelStartPoint->setText(QApplication::translate("TSPResult", "Start Point", nullptr));
        buttAllAlgorythm->setText(QApplication::translate("TSPResult", "PushButton", nullptr));
        label_Time->setText(QApplication::translate("TSPResult", "Time", nullptr));
        label_accuracy->setText(QApplication::translate("TSPResult", "Accuracy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TSPResult: public Ui_TSPResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSPRESULT_H

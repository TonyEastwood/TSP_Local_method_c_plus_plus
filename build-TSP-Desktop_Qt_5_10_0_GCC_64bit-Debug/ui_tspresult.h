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
    } // retranslateUi

};

namespace Ui {
    class TSPResult: public Ui_TSPResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSPRESULT_H

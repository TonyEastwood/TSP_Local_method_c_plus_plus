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
#include <QtWidgets/QRadioButton>
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
    QPushButton *buttRandomGenerate;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *editPointFrom;
    QLineEdit *editPointTo;
    QLineEdit *editPointStep;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *editLengthTo;
    QLabel *label_7;
    QLineEdit *editLengthFrom;
    QLabel *label_8;
    QLineEdit *editQuantCycle;

    void setupUi(QWidget *TSPResult)
    {
        if (TSPResult->objectName().isEmpty())
            TSPResult->setObjectName(QStringLiteral("TSPResult"));
        TSPResult->resize(985, 593);
        buttStartPath = new QPushButton(TSPResult);
        buttStartPath->setObjectName(QStringLiteral("buttStartPath"));
        buttStartPath->setEnabled(true);
        buttStartPath->setGeometry(QRect(20, 80, 151, 31));
        QFont font;
        font.setPointSize(14);
        buttStartPath->setFont(font);
        buttDoubleReplacement = new QPushButton(TSPResult);
        buttDoubleReplacement->setObjectName(QStringLiteral("buttDoubleReplacement"));
        buttDoubleReplacement->setGeometry(QRect(20, 130, 151, 41));
        buttDoubleReplacement->setFont(font);
        buttTripleReplacement = new QPushButton(TSPResult);
        buttTripleReplacement->setObjectName(QStringLiteral("buttTripleReplacement"));
        buttTripleReplacement->setGeometry(QRect(20, 190, 151, 41));
        buttTripleReplacement->setFont(font);
        buttFourthReplacement = new QPushButton(TSPResult);
        buttFourthReplacement->setObjectName(QStringLiteral("buttFourthReplacement"));
        buttFourthReplacement->setGeometry(QRect(20, 250, 151, 41));
        buttFourthReplacement->setFont(font);
        labelTime = new QLabel(TSPResult);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(210, 30, 91, 17));
        labelTime->setFont(font);
        labelResult = new QLabel(TSPResult);
        labelResult->setObjectName(QStringLiteral("labelResult"));
        labelResult->setGeometry(QRect(320, 30, 101, 17));
        labelResult->setFont(font);
        labelTimeStart = new QLabel(TSPResult);
        labelTimeStart->setObjectName(QStringLiteral("labelTimeStart"));
        labelTimeStart->setGeometry(QRect(200, 90, 101, 17));
        labelTimeStart->setFont(font);
        labelTime2 = new QLabel(TSPResult);
        labelTime2->setObjectName(QStringLiteral("labelTime2"));
        labelTime2->setGeometry(QRect(200, 150, 101, 17));
        labelTime2->setFont(font);
        labelTime3 = new QLabel(TSPResult);
        labelTime3->setObjectName(QStringLiteral("labelTime3"));
        labelTime3->setGeometry(QRect(200, 200, 101, 17));
        labelTime3->setFont(font);
        labelTime4 = new QLabel(TSPResult);
        labelTime4->setObjectName(QStringLiteral("labelTime4"));
        labelTime4->setGeometry(QRect(200, 260, 101, 17));
        labelTime4->setFont(font);
        labelResultStart = new QLabel(TSPResult);
        labelResultStart->setObjectName(QStringLiteral("labelResultStart"));
        labelResultStart->setGeometry(QRect(320, 90, 101, 17));
        labelResultStart->setFont(font);
        labelResult2 = new QLabel(TSPResult);
        labelResult2->setObjectName(QStringLiteral("labelResult2"));
        labelResult2->setGeometry(QRect(320, 150, 91, 17));
        labelResult2->setFont(font);
        labelResult3 = new QLabel(TSPResult);
        labelResult3->setObjectName(QStringLiteral("labelResult3"));
        labelResult3->setGeometry(QRect(320, 200, 101, 17));
        labelResult3->setFont(font);
        labelResult4 = new QLabel(TSPResult);
        labelResult4->setObjectName(QStringLiteral("labelResult4"));
        labelResult4->setGeometry(QRect(320, 260, 101, 17));
        labelResult4->setFont(font);
        labelPath = new QLabel(TSPResult);
        labelPath->setObjectName(QStringLiteral("labelPath"));
        labelPath->setGeometry(QRect(760, 30, 67, 17));
        labelPath->setFont(font);
        labelPathStart = new QLabel(TSPResult);
        labelPathStart->setObjectName(QStringLiteral("labelPathStart"));
        labelPathStart->setGeometry(QRect(750, 90, 821, 17));
        labelPathStart->setFont(font);
        labelPath2 = new QLabel(TSPResult);
        labelPath2->setObjectName(QStringLiteral("labelPath2"));
        labelPath2->setGeometry(QRect(750, 150, 831, 17));
        labelPath2->setFont(font);
        labelPath3 = new QLabel(TSPResult);
        labelPath3->setObjectName(QStringLiteral("labelPath3"));
        labelPath3->setGeometry(QRect(740, 200, 841, 17));
        labelPath3->setFont(font);
        labelPath4 = new QLabel(TSPResult);
        labelPath4->setObjectName(QStringLiteral("labelPath4"));
        labelPath4->setGeometry(QRect(740, 260, 841, 17));
        labelPath4->setFont(font);
        labelStartPoint = new QLabel(TSPResult);
        labelStartPoint->setObjectName(QStringLiteral("labelStartPoint"));
        labelStartPoint->setGeometry(QRect(280, 310, 431, 17));
        labelStartPoint->setFont(font);
        editStartPoint = new QLineEdit(TSPResult);
        editStartPoint->setObjectName(QStringLiteral("editStartPoint"));
        editStartPoint->setGeometry(QRect(280, 340, 113, 25));
        buttAllAlgorythm = new QPushButton(TSPResult);
        buttAllAlgorythm->setObjectName(QStringLiteral("buttAllAlgorythm"));
        buttAllAlgorythm->setGeometry(QRect(20, 320, 171, 51));
        buttAllAlgorythm->setFont(font);
        progressStartPathAccuracy = new QProgressBar(TSPResult);
        progressStartPathAccuracy->setObjectName(QStringLiteral("progressStartPathAccuracy"));
        progressStartPathAccuracy->setGeometry(QRect(460, 90, 118, 23));
        QPalette palette;
        QBrush brush(QColor(115, 210, 22, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        QBrush brush1(QColor(145, 145, 145, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressStartPathAccuracy->setPalette(palette);
        progressStartPathAccuracy->setValue(0);
        progressDoubleReplaceAccuracy = new QProgressBar(TSPResult);
        progressDoubleReplaceAccuracy->setObjectName(QStringLiteral("progressDoubleReplaceAccuracy"));
        progressDoubleReplaceAccuracy->setGeometry(QRect(460, 150, 118, 23));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressDoubleReplaceAccuracy->setPalette(palette1);
        progressDoubleReplaceAccuracy->setValue(0);
        progressTrippleReplaceAccuracy = new QProgressBar(TSPResult);
        progressTrippleReplaceAccuracy->setObjectName(QStringLiteral("progressTrippleReplaceAccuracy"));
        progressTrippleReplaceAccuracy->setGeometry(QRect(460, 200, 118, 23));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressTrippleReplaceAccuracy->setPalette(palette2);
        progressTrippleReplaceAccuracy->setValue(0);
        progressQuadroReplaceAccuracy = new QProgressBar(TSPResult);
        progressQuadroReplaceAccuracy->setObjectName(QStringLiteral("progressQuadroReplaceAccuracy"));
        progressQuadroReplaceAccuracy->setGeometry(QRect(460, 260, 118, 23));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressQuadroReplaceAccuracy->setPalette(palette3);
        progressQuadroReplaceAccuracy->setValue(0);
        progressStartPathTime = new QProgressBar(TSPResult);
        progressStartPathTime->setObjectName(QStringLiteral("progressStartPathTime"));
        progressStartPathTime->setGeometry(QRect(610, 90, 118, 23));
        QPalette palette4;
        QBrush brush2(QColor(204, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressStartPathTime->setPalette(palette4);
        progressStartPathTime->setAutoFillBackground(false);
        progressStartPathTime->setValue(0);
        progressTrippleReplaceTime = new QProgressBar(TSPResult);
        progressTrippleReplaceTime->setObjectName(QStringLiteral("progressTrippleReplaceTime"));
        progressTrippleReplaceTime->setGeometry(QRect(610, 200, 118, 23));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressTrippleReplaceTime->setPalette(palette5);
        progressTrippleReplaceTime->setAutoFillBackground(false);
        progressTrippleReplaceTime->setValue(0);
        progressQuadroReplaceTime = new QProgressBar(TSPResult);
        progressQuadroReplaceTime->setObjectName(QStringLiteral("progressQuadroReplaceTime"));
        progressQuadroReplaceTime->setGeometry(QRect(610, 260, 118, 23));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressQuadroReplaceTime->setPalette(palette6);
        progressQuadroReplaceTime->setAutoFillBackground(false);
        progressQuadroReplaceTime->setValue(0);
        progressDoubleReplaceTIme = new QProgressBar(TSPResult);
        progressDoubleReplaceTIme->setObjectName(QStringLiteral("progressDoubleReplaceTIme"));
        progressDoubleReplaceTIme->setGeometry(QRect(610, 150, 118, 23));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        progressDoubleReplaceTIme->setPalette(palette7);
        progressDoubleReplaceTIme->setAutoFillBackground(false);
        progressDoubleReplaceTIme->setValue(0);
        label_Time = new QLabel(TSPResult);
        label_Time->setObjectName(QStringLiteral("label_Time"));
        label_Time->setGeometry(QRect(630, 30, 67, 17));
        label_Time->setFont(font);
        label_accuracy = new QLabel(TSPResult);
        label_accuracy->setObjectName(QStringLiteral("label_accuracy"));
        label_accuracy->setGeometry(QRect(460, 20, 111, 31));
        label_accuracy->setFont(font);
        buttRandomGenerate = new QPushButton(TSPResult);
        buttRandomGenerate->setObjectName(QStringLiteral("buttRandomGenerate"));
        buttRandomGenerate->setEnabled(false);
        buttRandomGenerate->setGeometry(QRect(560, 530, 291, 51));
        buttRandomGenerate->setFont(font);
        radioButton = new QRadioButton(TSPResult);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(30, 410, 181, 23));
        radioButton->setFont(font);
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(TSPResult);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 450, 281, 23));
        radioButton_2->setFont(font);
        label = new QLabel(TSPResult);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(650, 330, 141, 31));
        label->setFont(font);
        label_2 = new QLabel(TSPResult);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(430, 370, 51, 17));
        label_2->setFont(font);
        label_3 = new QLabel(TSPResult);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(610, 370, 31, 17));
        label_3->setFont(font);
        label_4 = new QLabel(TSPResult);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(780, 350, 41, 51));
        label_4->setFont(font);
        editPointFrom = new QLineEdit(TSPResult);
        editPointFrom->setObjectName(QStringLiteral("editPointFrom"));
        editPointFrom->setEnabled(false);
        editPointFrom->setGeometry(QRect(490, 370, 113, 25));
        editPointTo = new QLineEdit(TSPResult);
        editPointTo->setObjectName(QStringLiteral("editPointTo"));
        editPointTo->setEnabled(false);
        editPointTo->setGeometry(QRect(650, 370, 113, 25));
        editPointStep = new QLineEdit(TSPResult);
        editPointStep->setObjectName(QStringLiteral("editPointStep"));
        editPointStep->setEnabled(false);
        editPointStep->setGeometry(QRect(830, 370, 113, 25));
        label_5 = new QLabel(TSPResult);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(640, 420, 141, 17));
        label_5->setFont(font);
        label_6 = new QLabel(TSPResult);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(480, 450, 61, 17));
        label_6->setFont(font);
        editLengthTo = new QLineEdit(TSPResult);
        editLengthTo->setObjectName(QStringLiteral("editLengthTo"));
        editLengthTo->setEnabled(false);
        editLengthTo->setGeometry(QRect(760, 450, 113, 25));
        label_7 = new QLabel(TSPResult);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(true);
        label_7->setGeometry(QRect(700, 450, 31, 17));
        label_7->setFont(font);
        editLengthFrom = new QLineEdit(TSPResult);
        editLengthFrom->setObjectName(QStringLiteral("editLengthFrom"));
        editLengthFrom->setEnabled(false);
        editLengthFrom->setGeometry(QRect(540, 450, 113, 25));
        label_8 = new QLabel(TSPResult);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(490, 490, 141, 31));
        label_8->setFont(font);
        editQuantCycle = new QLineEdit(TSPResult);
        editQuantCycle->setObjectName(QStringLiteral("editQuantCycle"));
        editQuantCycle->setEnabled(false);
        editQuantCycle->setGeometry(QRect(640, 490, 141, 31));

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
        labelTime->setText(QApplication::translate("TSPResult", "Time (nsec)", nullptr));
        labelResult->setText(QApplication::translate("TSPResult", "Path length", nullptr));
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
        editStartPoint->setText(QApplication::translate("TSPResult", "1", nullptr));
        buttAllAlgorythm->setText(QApplication::translate("TSPResult", "Find All Value", nullptr));
        label_Time->setText(QApplication::translate("TSPResult", "Time", nullptr));
        label_accuracy->setText(QApplication::translate("TSPResult", "Efficiency", nullptr));
        buttRandomGenerate->setText(QApplication::translate("TSPResult", "Configure random generate", nullptr));
        radioButton->setText(QApplication::translate("TSPResult", "Matrix from file", nullptr));
        radioButton_2->setText(QApplication::translate("TSPResult", "Random generated matrix", nullptr));
        label->setText(QApplication::translate("TSPResult", "Interval points", nullptr));
        label_2->setText(QApplication::translate("TSPResult", "From", nullptr));
        label_3->setText(QApplication::translate("TSPResult", "To", nullptr));
        label_4->setText(QApplication::translate("TSPResult", "Step", nullptr));
        editPointFrom->setText(QApplication::translate("TSPResult", "6", nullptr));
        editPointTo->setText(QApplication::translate("TSPResult", "10", nullptr));
        editPointStep->setText(QApplication::translate("TSPResult", "2", nullptr));
        label_5->setText(QApplication::translate("TSPResult", "Interval length", nullptr));
        label_6->setText(QApplication::translate("TSPResult", "From", nullptr));
        editLengthTo->setText(QApplication::translate("TSPResult", "100", nullptr));
        label_7->setText(QApplication::translate("TSPResult", "To", nullptr));
        editLengthFrom->setText(QApplication::translate("TSPResult", "25", nullptr));
        label_8->setText(QApplication::translate("TSPResult", "Quantity cycles", nullptr));
        editQuantCycle->setText(QApplication::translate("TSPResult", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TSPResult: public Ui_TSPResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSPRESULT_H

#ifndef WIDGET_H
#define WIDGET_H
#define QUANT_POINTS 15            //max quantity of points that file can involve
#define _INFINITY  1000000          //max distance between points
#include <QFile>
#include <QWidget>
#include "QStandardItemModel"
#include "QStandardItem"
#include <QMessageBox>
#include "tspresult.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    QStandardItemModel *model=new QStandardItemModel;
    QStandardItem *item;


    void ShowDataTableFromFile(int, int matrix_distance[][QUANT_POINTS]);        //show matrix distance on tableview
    void Error_FileNonExistent(QString);                                            //show error that file name that user write not found
    void Error_CantOpenFile(QString);                       //show error that we don't have access rights for open file on read
    void OpenTspResultForm();
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    TSPResult *tspform;                //open new form TSPResult
    void AssignStartValue( int (&)[QUANT_POINTS][QUANT_POINTS]);         //initialize start value for distance matrix
    void AssignValueFromFile (int (&)[QUANT_POINTS][QUANT_POINTS], QFile &);
    Ui::Widget *ui;
};

#endif // WIDGET_H

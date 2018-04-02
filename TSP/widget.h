#ifndef WIDGET_H
#define WIDGET_H
#include <QFile>
#include <QWidget>
#include "QStandardItemModel"
#include "QStandardItem"
#include <QMessageBox>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    QStandardItemModel *model=new QStandardItemModel;
       QStandardItem *item;



    void ShowDataTableFromFile(int, double matrix_distance[][100]);
    void Error_FileNonExistent(QString);
    void Error_CantOpenFile(QString);
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

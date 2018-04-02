#ifndef TSPRESULT_H
#define TSPRESULT_H
#define QUANT_POINTS 100            //max quantity of points that file can involve
#include <QWidget>

namespace Ui {
class TSPResult;
}

class TSPResult : public QWidget
{
    Q_OBJECT

public:
    explicit TSPResult(QWidget *parent = 0);
    TSPResult(double (&)[QUANT_POINTS][QUANT_POINTS], int );
    ~TSPResult();

private slots:
    void on_buttStartPath_clicked();

private:
    double point_distance[QUANT_POINTS][QUANT_POINTS];    //matrix distance between points
    int quantity_points;                                   //quantity points in matrix
     void InitialInvolvePoints(bool (&)[QUANT_POINTS]);     //set all value 'false'
    Ui::TSPResult *ui;
};

#endif // TSPRESULT_H

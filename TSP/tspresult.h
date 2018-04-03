#ifndef TSPRESULT_H
#define TSPRESULT_H
#define QUANT_POINTS 15            //max quantity of points that file can involve
#define _INFINITY  1000000          //max distance between points
#include <QWidget>
#include <queue>
namespace Ui {
class TSPResult;
}

class TSPResult : public QWidget
{
    Q_OBJECT

public:
    explicit TSPResult(QWidget *parent = 0);
    TSPResult(double (&)[QUANT_POINTS][QUANT_POINTS], int );
    QString AlgorythmStartPath(double (&)[QUANT_POINTS][QUANT_POINTS], double (&)[QUANT_POINTS][QUANT_POINTS], int, double &);
    //Original massive, massive that we return as refer, start position (point that will be start ), and length of path (sum) , type double
    ~TSPResult();

private slots:
    void on_buttStartPath_clicked();

private:
    void QueueClear(std::queue<int> &q);
    std::queue<int> CurrentShortPath;
    QString ConvertFromPathToQString();                    //convert bool matrix to QString like '1->5->6->3->1' !!!!!!!!!!!!1
    double point_distance[QUANT_POINTS][QUANT_POINTS];    //matrix distance between points
    int quantity_points;                                   //quantity points in matrix
     void InitialInvolvePoints(bool (&)[QUANT_POINTS], int);     //set all value 'false'
    Ui::TSPResult *ui;
};

#endif // TSPRESULT_H

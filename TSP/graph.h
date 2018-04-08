#ifndef GRAPH_H
#define GRAPH_H
#define _GRAPH_SCALE 100
#include <QWidget>
#include "qcustomplot.h"
#include "tip.h"
namespace Ui {
class Graph;
}

class Graph : public QWidget
{
    Q_OBJECT
  //  double T[4][_GRAPH_SCALE];            //average time on each interval of N in percent
   // double A[4][_GRAPH_SCALE];            //average accuracy on each interval of N in percent
public:
    explicit Graph(QWidget *parent = 0);
    Graph(double [4][_GRAPH_SCALE], double [4][_GRAPH_SCALE], int, int, int);
    ~Graph();

private slots:
    void on_pushButton_clicked();

private:
    double MaxValue(double [4][_GRAPH_SCALE]);
    void DrawGraph(double [4][_GRAPH_SCALE], double[4][_GRAPH_SCALE],int, int,int);
    Ui::Graph *ui;
    Tip *tip;
};

#endif // GRAPH_H

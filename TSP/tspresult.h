#ifndef TSPRESULT_H
#define TSPRESULT_H
#define QUANT_POINTS 15            //max quantity of points that file can involve   (if points so many, app can crash )
#define _INFINITY  1000000          //max distance between points
#include <QWidget>
namespace Ui {
class TSPResult;
}

class TSPResult : public QWidget
{
    Q_OBJECT

public:
    explicit TSPResult(QWidget *parent = 0);
    TSPResult(double (&)[QUANT_POINTS][QUANT_POINTS], int );            //constructor with parameters
    QString AlgorythmStartPath(double [QUANT_POINTS][QUANT_POINTS], int, double &);  //geedy algorythm search start short path
    QString AlgotythmDoubleReplace(double [QUANT_POINTS][QUANT_POINTS], int, double &); //algorythm local find, double replace
    //Original massive, start position (point that will be start ), and length of path (sum) , type double
    ~TSPResult();

private slots:
    void on_buttStartPath_clicked();            //search start path (geedy algorythm) and show result

    void on_buttDoubleReplacement_clicked();

private:
    double CalcPathLength(double [QUANT_POINTS][QUANT_POINTS], int [QUANT_POINTS]);
    int CurrentShortPath[QUANT_POINTS];                       //massive that contain path like '1 2 6 3 4' that search due to geedy algorythm
    QString ConvertFromPathToQString();                    //convert bool matrix to QString like '1->5->6->3->1' !!!!!!!!!!!!1
    double point_distance[QUANT_POINTS][QUANT_POINTS];    //matrix distance between points
    int quantity_points;                                   //quantity points in matrix
     void InitialInvolvePoints(bool (&)[QUANT_POINTS], int);     //set all value 'false'
    Ui::TSPResult *ui;
};

#endif // TSPRESULT_H

#ifndef TSPRESULT_H
#define TSPRESULT_H
#define QUANT_POINTS 15            //max quantity of points that file can involve   (if points so many, app can crash )
#define _INFINITY  1000000          //max distance between points
#include <QWidget>
#include <QElapsedTimer>
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
    QString AlgotythmTrippleReplace(double [QUANT_POINTS][QUANT_POINTS], int, double &); //algorythm local find, tripple replace
    QString AlgorythmQuadroReplace(double [QUANT_POINTS][QUANT_POINTS], int, double &);  //algorythm local find, quadro replace
    //Original massive, start position (point that will be start ), and length of path (sum) , type double
    ~TSPResult();

private slots:
    void on_buttStartPath_clicked();            //search start path (geedy algorythm) and show result

    void on_buttDoubleReplacement_clicked();

    void on_buttTripleReplacement_clicked();

    void on_buttFourthReplacement_clicked();

    void on_buttAllAlgorythm_clicked();

private:
    int AlgoTime[4];
    double AlgoLength[4];
    QElapsedTimer timer;
    void Swap(int (&)[QUANT_POINTS], int, int);
    double CalcPathLength(double [QUANT_POINTS][QUANT_POINTS], int [QUANT_POINTS]);
    int CurrentShortPath[QUANT_POINTS];                       //massive that contain path like '1 2 6 3 4' that search due to geedy algoryth
    double point_distance[QUANT_POINTS][QUANT_POINTS];    //matrix distance between points
    int quantity_points;                                   //quantity points in matrix
     void InitialInvolvePoints(bool (&)[QUANT_POINTS], int);     //set all value 'false'
    Ui::TSPResult *ui;
};

#endif // TSPRESULT_H

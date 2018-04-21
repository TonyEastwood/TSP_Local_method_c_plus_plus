#ifndef TSPRESULT_H
#define TSPRESULT_H
#define QUANT_POINTS 100            //max quantity of points that file can involve   (if points so many, app can crash )
#define _INFINITY  1000000          //max distance between points
#define _GRAPH_SCALE 100
#include <QWidget>
#include "graph.h"
#include <QElapsedTimer>
#include <QTime>
#include <QMessageBox>
namespace Ui {
class TSPResult;
}

class TSPResult : public QWidget
{
    Q_OBJECT

public:
    explicit TSPResult(QWidget *parent = 0);
    TSPResult(int (&)[QUANT_POINTS][QUANT_POINTS], int );            //constructor with parameters
    QString AlgorythmStartPath(int [QUANT_POINTS][QUANT_POINTS], int, double &, int);  //geedy algorythm search start short path
    QString AlgotythmDoubleReplace(int [QUANT_POINTS][QUANT_POINTS], int, double &, int); //algorythm local find, double replace
    QString AlgotythmTrippleReplace(int [QUANT_POINTS][QUANT_POINTS], int, double &, int); //algorythm local find, tripple replace
    QString AlgorythmQuadroReplace(int [QUANT_POINTS][QUANT_POINTS], int, double &, int);  //algorythm local find, quadro replace
    //Original massive, start position (point that will be start ), and length of path (sum) , type double
    ~TSPResult();

private slots:
    void on_buttStartPath_clicked();            //search start path (geedy algorythm) and show result

    void on_buttDoubleReplacement_clicked();

    void on_buttTripleReplacement_clicked();

    void on_buttFourthReplacement_clicked();

    void on_buttAllAlgorythm_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_buttRandomGenerate_clicked();

  //  void on_buttAnalyze_clicked();

    void on_radioButton_3_clicked();

private:
    void ErrorStartPoint();
    void RandomGenerateMatrixDistance(int (&)[QUANT_POINTS][QUANT_POINTS], int, int, int);//quant point, start distance, end distance (interval random)
    void NormDistributGenerateMatrixDistance(int (&)[QUANT_POINTS][QUANT_POINTS], int, int, int);   //algo that generate random value via norm distribution
                                                                                                    //quant point, start distance, end distance
    double FunctionNormDistribution(double, float, float);  //function normal distribution
                                                            //x, expecation, distribution

    void ReadFromEditForRandom(int &, int&, int&, int&, int&, int&, int&);
    void InitialDoubleMassive(double *, int);  //initial massive by zero
    void SetProgressBar();          //set value for all progress bar
    int AlgoTime[4];
    double AlgoLength[4];
    Graph *graph_dr;
    QElapsedTimer timer;
    void Swap(int (&)[QUANT_POINTS], int, int);
    double CalcPathLength(int [QUANT_POINTS][QUANT_POINTS], int [QUANT_POINTS], int);
    int CurrentShortPath[QUANT_POINTS];                       //massive that contain path like '1 2 6 3 4' that search due to geedy algoryth
    int point_distance[QUANT_POINTS][QUANT_POINTS];    //matrix distance between points (from file)
   // int point_distance_random[QUANT_POINTS][QUANT_POINTS];   //matrix distance between points (random generate)

    int quantity_points;                                   //quantity points in matrix
     void InitialInvolvePoints(bool (&)[QUANT_POINTS], int);     //set all value 'false'
    Ui::TSPResult *ui;
};

#endif // TSPRESULT_H

#include "tspresult.h"
#include "ui_tspresult.h"

TSPResult::TSPResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TSPResult)
{
    ui->setupUi(this);
}

TSPResult::TSPResult(double (&_matrix_distance)[QUANT_POINTS][QUANT_POINTS], int _quantity_points):
    QWidget(0),
    ui(new Ui::TSPResult)
{
        ui->setupUi(this);
    for(int i=0;i<_quantity_points;i++)
        for(int j=0;j<_quantity_points;j++)
        {
            point_distance[i][j]=_matrix_distance[i][j];
        }
    quantity_points=_quantity_points;

}

TSPResult::~TSPResult()
{
    delete ui;
}

void TSPResult::on_buttStartPath_clicked()
{
    int start = ui->editStartPoint->text().toInt();         //point that will be start for out path
    bool InvolvedPoints[QUANT_POINTS];                      //all points that we visit
    InitialInvolvePoints(InvolvedPoints);                   //set all value of massive eque to 'false'
}

void TSPResult::InitialInvolvePoints(bool (&involve_points)[QUANT_POINTS])
{
    for(int i=0;i<quantity_points;i++)
        involve_points[i]=false;
}

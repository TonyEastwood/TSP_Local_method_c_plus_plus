#include "tspresult.h"
#include "ui_tspresult.h"

TSPResult::TSPResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TSPResult)
{
    ui->setupUi(this);
}

void TSPResult::InitialInvolvePoints(bool (&involve_points)[QUANT_POINTS], int _quantity_points)
{
    for(int i=0;i<_quantity_points;i++)
        involve_points[i]=false;
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
     ui->labelStartPoint->setText("Start point (input from 1 to "+QString::number(quantity_points)+")");

}

QString TSPResult::AlgorythmStartPath(double (&original_massive)[QUANT_POINTS][QUANT_POINTS], double (&result_matrix_distance)[QUANT_POINTS][QUANT_POINTS], int start_point, double &sum_path)
{
        QueueClear(CurrentShortPath);                   //clear queue
        sum_path=0;
        bool InvolvedPoints[QUANT_POINTS];                      //all points that we visit
        InitialInvolvePoints(InvolvedPoints, quantity_points);                   //set all value of massive eque to 'false'
        InvolvedPoints[start_point-1]=true;         //start point = true
        for(int i=0;i<quantity_points;i++)
            for(int j=0;j<quantity_points;j++)
            result_matrix_distance[i][j]=original_massive[i][j];

        QString path="";
        path+=QString::number(start_point)+ " ";
        int min_distance=_INFINITY;
        int index=start_point-1;
        while(true)
        {
            int i=index;
            min_distance=_INFINITY;
            for(int j=0;j<quantity_points;j++)
            {
                if(result_matrix_distance[i][j]<min_distance && InvolvedPoints[j]==false)
                {
                    index=j;
                    min_distance=result_matrix_distance[i][j];
                }
            }
            if (i==index)
                break;
            sum_path+=min_distance;
            path+="->"+QString::number(index+1);
            InvolvedPoints[index]=true;
            CurrentShortPath.push(index);
        }
        path+="->"+QString::number(start_point); //add start point at the and '1->....->1'

        return path;            //return path '1->3->5->1'
}

TSPResult::~TSPResult()
{
    delete ui;
}

void TSPResult::on_buttStartPath_clicked()
{

    int start = ui->editStartPoint->text().toInt();         //point that will be start for out path                                         //all path convert from matrix distance to '1->2->5->7->1' etc.
    double result_path[QUANT_POINTS][QUANT_POINTS];
    double path_length=0;
    ui->labelPathStart->setText(AlgorythmStartPath(point_distance, result_path, start, path_length ));
    //show short path in label '1->2...->1'
    ui->labelResultStart->setText(QString::number(path_length));    //show path length (sum all distance )

}

void TSPResult::QueueClear(std::queue<int> &q)
{
     std::queue<int> empty;
       std::swap( q, empty );
}



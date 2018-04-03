#include "tspresult.h"
#include "ui_tspresult.h"

TSPResult::TSPResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TSPResult)
{
    ui->setupUi(this);
}

void TSPResult::InitialInvolvePoints(bool (&involve_points)[QUANT_POINTS], int _quantity_points)    //appropriate all massive value 'false'
{
    for(int i=0;i<_quantity_points;i++)
        involve_points[i]=false;
}

TSPResult::TSPResult(double (&_matrix_distance)[QUANT_POINTS][QUANT_POINTS], int _quantity_points): //Constructor with parametres
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

QString TSPResult::AlgorythmStartPath(double original_massive[QUANT_POINTS][QUANT_POINTS], int start_point, double &sum_path)
 //geedy algorythm search start short path
{

        sum_path=0;                                     //start sum =0
        bool InvolvedPoints[QUANT_POINTS];                      //all points that we visit
        InitialInvolvePoints(InvolvedPoints, quantity_points);                   //set all value of massive eque to 'false'
        InvolvedPoints[start_point-1]=true;         //start point = true
        CurrentShortPath[0]=start_point-1;


        QString path="";                                //will contain path like '1->5->7->1' that we return
        path+=QString::number(start_point);        //add start point in path
        int min_distance=_INFINITY;                     //min_distance = infinity
        int index=start_point-1;                        //index = start point
        int k=1;                                //current index in CurrentShortPath massive
        while(true)
        {
            int i=index;
            min_distance=_INFINITY;
            for(int j=0;j<quantity_points;j++)              //find min path and check point as visited
            {
                if(original_massive[i][j]<min_distance && InvolvedPoints[j]==false) //if path = min and point not visited
                {
                    index=j;                            //memorize index
                    min_distance=original_massive[i][j];    //memorize min distance
                }
            }
            if (i==index)                   //if all points visited
                break;                      //exit from cycle and return QString

            path+="->"+QString::number(index+1);        //write in path next point '1->5->current point'
            InvolvedPoints[index]=true;             //check current point as visited
            CurrentShortPath[k]=index;           //add current point in queue
            k++;
        }
        sum_path=CalcPathLength(original_massive,CurrentShortPath); //calc path length
        path+="->"+QString::number(start_point); //add start point at the and '1->....->1'      //add start point in the end

        return path;            //return path '1->3->5->1'
}

QString TSPResult::AlgotythmDoubleReplace(double original_massive[QUANT_POINTS][QUANT_POINTS], int start_point, double &sum_path)
{
    QString path="";
    path+=QString::number(start_point);        //add start point in path
    double path_length=0;                       //length path
    int int_path[QUANT_POINTS];               //massive path a[0]->a[1]->a[2]..->a[0]
    for(int i=0; i<quantity_points;i++)     //copy massive to changing from Current ShortPath
        int_path[i]=CurrentShortPath[i];

    for(int i=1;i<quantity_points-1;i++)        //replace two points and compare result
    {
        path_length=CalcPathLength(original_massive, int_path);     //calc current length path
        Swap(int_path, i,i+1 );                     //swap two elements
        if (path_length< CalcPathLength(original_massive,int_path)) //if begin length > then current
        {
            Swap(int_path, i,i+1 );                 //revert to start position
        }
        path+="->"+QString::number(int_path[i]+1);      //add points in path result



    }
    path+="->"+QString::number(int_path[quantity_points-1]+1)+"->"+QString::number(start_point);    //add two last point in path
    sum_path=CalcPathLength(original_massive, int_path);    //calc result length path

    return path;        //return path
}

QString TSPResult::AlgotythmTrippleReplace(double original_massive[QUANT_POINTS][QUANT_POINTS], int start_point, double &sum_path)
{
    QString path="";
    path+=QString::number(start_point);        //add start point in path
    double path_length=0;                       //length path
    int int_path[QUANT_POINTS];               //massive path a[0]->a[1]->a[2]..->a[0]
    for(int i=0; i<quantity_points;i++)     //copy massive to changing from Current ShortPath
        int_path[i]=CurrentShortPath[i];

    for(int i=1;i<quantity_points-2;i++)        //replace two points and compare result
    {
       for(int j=0;j<3;j++)
       {
           path_length=CalcPathLength(original_massive,int_path);
           Swap(int_path,i,i+1);
           if (path_length < CalcPathLength(original_massive,int_path))
           {
               Swap(int_path,i+1,i+2);
               if(path_length<CalcPathLength(original_massive,int_path))
               {
                    Swap(int_path,i+1,i+2);
                    Swap(int_path,i,i+1);
               }
               else Swap(int_path,i,i+1);
           }
           else
           {
                Swap(int_path,i+1,i+2);
                   if(path_length<CalcPathLength(original_massive,int_path))
                        Swap(int_path,i+1,i+2);
           }
       }
 path+="->"+QString::number(int_path[i]+1);      //add points in path result
     }
    path+="->"+QString::number(int_path[quantity_points-2]+1)+"->"+QString::number(int_path[quantity_points-1]+1)+"->"+QString::number(start_point);    //add two last point in path
    sum_path=CalcPathLength(original_massive, int_path);    //calc result length path
    return path;        //return path
}

QString TSPResult::AlgorythmQuadroReplace(double original_massive[QUANT_POINTS][QUANT_POINTS], int start_point, double &sum_path)
{
    QString path="";
    path+=QString::number(start_point)+"->";        //add start point in path
    double path_length=0;                       //length path
    int int_path[QUANT_POINTS];               //massive path a[0]->a[1]->a[2]..->a[0]
    int result_path[QUANT_POINTS];
    for(int i=0; i<quantity_points;i++)     //copy massive to changing from Current ShortPath
        int_path[i]=CurrentShortPath[i];
    path_length=CalcPathLength(original_massive,int_path);
    for(int i=1;i<quantity_points-5;i++)
    {
    for(int a=i;a<i+5;a++)
    {
        Swap(int_path,i,i+4);
        for(int b=i;b<i+4;b++)
        {
           Swap(int_path,i+1,1+b);
           for(int c=i;c<i+3;c++)
           {
               Swap(int_path,i+2,i+3);
               for(int d=i;d<i+2;d++)
               {
                   Swap(int_path,i+3,d+3);
                   if(path_length>CalcPathLength(original_massive,int_path))
                   {
                       path_length=CalcPathLength(original_massive,int_path);
                       for(int z=0;z<quantity_points;z++)
                       result_path[z]=int_path[z];
                   }
               }
           }
        }


    }
    }




    for(int i=1;i<quantity_points;i++)
        path+=QString::number(result_path[i]+1)+"->";
    path+=QString::number(start_point);


    sum_path=CalcPathLength(original_massive, result_path);    //calc result length path
    return path;        //return path
}
TSPResult::~TSPResult()
{
    delete ui;

}

void TSPResult::on_buttStartPath_clicked()      //search start path via geedy algorythm
{

    int start = ui->editStartPoint->text().toInt();         //point that will be start for out path                                         //all path convert from matrix distance to '1->2->5->7->1' etc.
    double path_length=0;
    ui->labelPathStart->setText(AlgorythmStartPath(point_distance, start, path_length ));
    //show short path in label '1->2...->1'
    ui->labelResultStart->setText(QString::number(path_length));    //show path length (sum all distance )

}





void TSPResult::on_buttDoubleReplacement_clicked()
{
    int start = ui->editStartPoint->text().toInt();         //point that will be start for out path                                         //all path convert from matrix distance to '1->2->5->7->1' etc.
    double path_length=0;
    ui->labelPath2->setText(AlgotythmDoubleReplace(point_distance, start, path_length ));
    //show short path in label '1->2...->1'
    ui->labelResult2->setText(QString::number(path_length));    //show path length (sum all distance )
}

void TSPResult::Swap(int (&massive_value)[QUANT_POINTS], int i, int j)
{
    int temp=massive_value[i];
    massive_value[i]=massive_value[j];
    massive_value[j]=temp;
}

double TSPResult::CalcPathLength(double matrix_distance[QUANT_POINTS][QUANT_POINTS], int Path[QUANT_POINTS])
{
    int sum=0;              // path length
    for(int i=0;i<quantity_points-1;i++)
           sum+=matrix_distance[Path[i]][Path[i+1]];        //sum all elements in massive
    sum+=matrix_distance[Path[quantity_points-1]][Path[0]]; //add last length '1->...9->1'
    return sum;         //return path length
}

void TSPResult::on_buttTripleReplacement_clicked()
{
    int start = ui->editStartPoint->text().toInt();         //point that will be start for out path                                         //all path convert from matrix distance to '1->2->5->7->1' etc.
    double path_length=0;
    ui->labelPath3->setText(AlgotythmTrippleReplace(point_distance, start, path_length ));
    //show short path in label '1->2...->1'
    ui->labelResult3->setText(QString::number(path_length));    //show path length (sum all distance )
}

void TSPResult::on_buttFourthReplacement_clicked()
{
    int start = ui->editStartPoint->text().toInt();         //point that will be start for out path                                         //all path convert from matrix distance to '1->2->5->7->1' etc.
    double path_length=0;
    ui->labelPath4->setText(AlgorythmQuadroReplace(point_distance, start, path_length ));
    //show short path in label '1->2...->1'
    ui->labelResult4->setText(QString::number(path_length));    //show path length (sum all distance )
}

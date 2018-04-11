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

TSPResult::TSPResult(int (&_matrix_distance)[QUANT_POINTS][QUANT_POINTS], int _quantity_points): //Constructor with parametres
    QWidget(0),
    ui(new Ui::TSPResult)
{
        ui->setupUi(this);
        ui->label_10->setText(QString::number(QUANT_POINTS));
    for(int i=0;i<_quantity_points;i++)
        for(int j=0;j<_quantity_points;j++)
        {
            point_distance[i][j]=_matrix_distance[i][j];
        }
    quantity_points=_quantity_points;
     ui->labelStartPoint->setText("Start point (input from 1 to "+QString::number(quantity_points)+")");

}

QString TSPResult::AlgorythmStartPath(int original_massive[QUANT_POINTS][QUANT_POINTS], int start_point, double &sum_path, int q_points)
 //geedy algorythm search start short path
{

        sum_path=0;                                     //start sum =0
        bool InvolvedPoints[QUANT_POINTS];                      //all points that we visit
        InitialInvolvePoints(InvolvedPoints, q_points);                   //set all value of massive eque to 'false'
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
            for(int j=0;j<q_points;j++)              //find min path and check point as visited
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
        sum_path=CalcPathLength(original_massive,CurrentShortPath, q_points); //calc path length
        path+="->"+QString::number(start_point); //add start point at the and '1->....->1'      //add start point in the end

        return path;            //return path '1->3->5->1'
}

QString TSPResult::AlgotythmDoubleReplace(int original_massive[QUANT_POINTS][QUANT_POINTS], int start_point, double &sum_path, int q_point)
{
    QString path="";
    path+=QString::number(start_point);        //add start point in path
    double path_length=0;                       //length path
    int int_path[QUANT_POINTS];               //massive path a[0]->a[1]->a[2]..->a[0]
    for(int i=0; i<q_point;i++)     //copy massive to changing from Current ShortPath
        int_path[i]=CurrentShortPath[i];
    for(int i=1;i<q_point-1;i++)        //replace two points and compare result
    {
        path_length=CalcPathLength(original_massive, int_path, q_point);     //calc current length path
        Swap(int_path, i,i+1 );                     //swap two elements
        if (path_length< CalcPathLength(original_massive,int_path, q_point)) //if begin length > then current
        {
            Swap(int_path, i,i+1 );                 //revert to start position
        }
        path+="->"+QString::number(int_path[i]+1);      //add points in path result



    }
    path+="->"+QString::number(int_path[q_point-1]+1)+"->"+QString::number(start_point);    //add two last point in path
    sum_path=CalcPathLength(original_massive, int_path, q_point);    //calc result length path

    return path;        //return path
}

QString TSPResult::AlgotythmTrippleReplace(int original_massive[QUANT_POINTS][QUANT_POINTS], int start_point, double &sum_path, int q_point)
{
    QString path="";
    path+=QString::number(start_point);        //add start point in path
    double path_length=0;                       //length path
    int int_path[QUANT_POINTS];               //massive path a[0]->a[1]->a[2]..->a[0]
    for(int i=0; i<q_point;i++)     //copy massive to changing from Current ShortPath
        int_path[i]=CurrentShortPath[i];

    for(int i=1;i<q_point-2;i++)        //replace two points and compare result
    {
       for(int j=0;j<3;j++)
       {
           path_length=CalcPathLength(original_massive,int_path, q_point);
           Swap(int_path,i,i+1);
           if (path_length < CalcPathLength(original_massive,int_path, q_point))
           {

                    Swap(int_path,i,i+1);
           }
           else path_length=CalcPathLength(original_massive,int_path, q_point);
           Swap(int_path,i+1,i+2);
           if (path_length < CalcPathLength(original_massive,int_path, q_point))
           {

                    Swap(int_path,i+1,i+2);
           }
                      else path_length=CalcPathLength(original_massive,int_path, q_point);
           Swap(int_path,i,i+2);
           if (path_length < CalcPathLength(original_massive,int_path, q_point))
           {

                    Swap(int_path,i,i+2);
           }
                      else path_length=CalcPathLength(original_massive,int_path, q_point);
           /*path_length=CalcPathLength(original_massive,int_path, q_point);
           Swap(int_path,i,i+1);
           if (path_length < CalcPathLength(original_massive,int_path, q_point))
           {
               Swap(int_path,i+1,i+2);
               if(path_length<CalcPathLength(original_massive,int_path, q_point))
               {
                    Swap(int_path,i+1,i+2);
                    Swap(int_path,i,i+1);
               }
               else Swap(int_path,i,i+1);
           }
           else
           {
                Swap(int_path,i+1,i+2);
                   if(path_length<CalcPathLength(original_massive,int_path, q_point))
                        Swap(int_path,i+1,i+2);
           }*/
       }
 path+="->"+QString::number(int_path[i]+1);      //add points in path result
     }
    path+="->"+QString::number(int_path[q_point-2]+1)+"->"+QString::number(int_path[q_point-1]+1)+"->"+QString::number(start_point);    //add two last point in path
    sum_path=CalcPathLength(original_massive, int_path, q_point);    //calc result length path
    return path;        //return path
}

QString TSPResult::AlgorythmQuadroReplace(int original_massive[QUANT_POINTS][QUANT_POINTS], int start_point, double &sum_path, int q_point)
{
    QString path="";
    path+=QString::number(start_point)+"->";        //add start point in path
    double path_length=0;                       //length path
    int int_path[QUANT_POINTS];               //massive path a[0]->a[1]->a[2]..->a[0]
    int result_path[QUANT_POINTS];
    for(int i=0; i<q_point;i++)     //copy massive to changing from Current ShortPath
        int_path[i]=CurrentShortPath[i];
    for(int i=0; i<q_point;i++)     //copy massive to changing from Current ShortPath
        result_path[i]=CurrentShortPath[i];
    path_length=CalcPathLength(original_massive,int_path, q_point);
    for(int i=1;i<q_point-5;i++)
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
                   if(path_length>CalcPathLength(original_massive,int_path, q_point))
                   {
                       path_length=CalcPathLength(original_massive,int_path, q_point);
                       for(int z=0;z<q_point;z++)
                       result_path[z]=int_path[z];
                   }
               }
           }
        }


    }
    }
    //for(int z=0;z<q_point;z++)
   //result_path[z]=int_path[z];



    for(int i=1;i<q_point;i++)
        path+=QString::number(result_path[i]+1)+"->";
    path+=QString::number(start_point);


    sum_path=CalcPathLength(original_massive, result_path, q_point);    //calc result length path
    return path;        //return path
}
TSPResult::~TSPResult()
{
    delete ui;

}

void TSPResult::on_buttStartPath_clicked()      //search start path via geedy algorythm
{



    int start = ui->editStartPoint->text().toInt();         //read from edit point that will be start for out path                                         //all path convert from matrix distance to '1->2->5->7->1' etc.
    if (start>=1 && start<=quantity_points)
    {
    double path_length=0;                                   //path length by geedy algo
    timer.start();
    ui->labelPathStart->setText(AlgorythmStartPath(point_distance, start, path_length, quantity_points ));   //show path in label and get path_length
    //show short path in label '1->2...->1'
    AlgoTime[0]=timer.nsecsElapsed();       //calc time that occupied geedy algo
        ui->labelTimeStart->setText(QString::number(AlgoTime[0]));  //show quantity time that geedy algo occupie
    ui->labelResultStart->setText(QString::number(path_length));    //show path length (sum all distance )
    AlgoLength[0]=path_length;      //path length
    }
    else

        ErrorStartPoint();

}





void TSPResult::on_buttDoubleReplacement_clicked()
{




    on_buttStartPath_clicked();                 //the first of all find short path via greedy algo
    int start = ui->editStartPoint->text().toInt();         //point that will be start for out path
    //all path convert from matrix distance to '1->2->5->7->1' etc.
    if (start>=1 && start<=quantity_points)
    {
    double path_length=0;                           //path length by algo double replace..
    timer.start();                                              //start timer
    ui->labelPath2->setText(AlgotythmDoubleReplace(point_distance, start, path_length, quantity_points ));
    //show short path in label '1->2...->1'
    AlgoTime[1]=timer.nsecsElapsed();                           //stop timer
    ui->labelTime2->setText(QString::number(AlgoTime[1]));      //show time that double replace algo occupie
    ui->labelResult2->setText(QString::number(path_length));    //show path length (sum all distance )
    AlgoLength[1]=path_length;                          //path length by algo double replace
    }
    else

        ErrorStartPoint();
}

void TSPResult::Swap(int (&massive_value)[QUANT_POINTS], int i, int j)      //swap two elements with index i and j in massive massive_value
{
    int temp=massive_value[i];                      //buffer for swap
    massive_value[i]=massive_value[j];
    massive_value[j]=temp;
}

double TSPResult::CalcPathLength(int matrix_distance[QUANT_POINTS][QUANT_POINTS], int Path[QUANT_POINTS], int q_points)
//calc length in massive Path where matrix_distance - matrix with distance between points
{
    int sum=0;              // path length
    for(int i=0;i<q_points-1;i++)
           sum+=matrix_distance[Path[i]][Path[i+1]];        //sum all elements in massive
    sum+=matrix_distance[Path[q_points-1]][Path[0]]; //add last length '1->...9->1'
    return sum;         //return path length
}

void TSPResult::on_buttTripleReplacement_clicked()
{

     on_buttStartPath_clicked();                 //the first of all find short path via greedy algo
    int start = ui->editStartPoint->text().toInt();         //point that will be start for out path
    //all path convert from matrix distance to '1->2->5->7->1' etc.
    if (start>=1 && start<=quantity_points)
    {
    double path_length=0;                                    //length path by tripple replace algo
    timer.start();                                          //timer start
    ui->labelPath3->setText(AlgotythmTrippleReplace(point_distance, start, path_length , quantity_points));  //show path by tripple replace algo
    //show short path in label '1->2...->1'
    AlgoTime[2]=timer.nsecsElapsed();               //stop timer
    ui->labelTime3->setText(QString::number(AlgoTime[2]));          //show timer that tripple replace algo occupie
    ui->labelResult3->setText(QString::number(path_length));    //show path length (sum all distance )
    AlgoLength[2]=path_length;                                  //length path
    }
    else

        ErrorStartPoint();
}

void TSPResult::on_buttFourthReplacement_clicked()
{
     on_buttStartPath_clicked();                 //the first of all find short path via greedy algo
    int start = ui->editStartPoint->text().toInt();         //point that will be start for out path
    if (start>=1 && start<=quantity_points)
    {//all path convert from matrix distance to '1->2->5->7->1' etc.
    double path_length=0;                                        //length path
    timer.start();                                              //start timer
    ui->labelPath4->setText(AlgorythmQuadroReplace(point_distance, start, path_length ,quantity_points));   //show short path as result Quadro replace algo
    //show short path in label '1->2...->1'
    AlgoTime[3]=timer.nsecsElapsed();               //stop timer
    ui->labelTime4->setText(QString::number(AlgoTime[3]));      //show time that algo occupie
    ui->labelResult4->setText(QString::number(path_length));    //show path length (sum all distance )
    AlgoLength[3]=path_length;                          //length path
    }
    else

        ErrorStartPoint();
}

void TSPResult::on_buttAllAlgorythm_clicked()
{
    if (ui->editStartPoint->text().toInt()>=1 && ui->editStartPoint->text().toInt()<=quantity_points)
    {
    on_buttStartPath_clicked();                 //show result via greedy algo
    on_buttDoubleReplacement_clicked();     //show result via double replace
    on_buttTripleReplacement_clicked();     //show result via tripple replace
    on_buttFourthReplacement_clicked();     //show result via fourth replace

    SetProgressBar();                   //set all value in progress bar
    }
    else

        ErrorStartPoint();


}

void TSPResult::SetProgressBar()
{
    int max=-1;                       //max time
    int max_length=0;                //max length
    for(int i=0;i<4;i++)
    {
        if(AlgoTime[i]>max)
            max=AlgoTime[i];
        if(AlgoLength[i]>max_length)
            max_length=AlgoLength[i];
   }
    ui->progressStartPathTime->setValue((double)AlgoTime[0]/max*100);
    ui->progressDoubleReplaceTIme->setValue((double)AlgoTime[1]/max*100);
    ui->progressTrippleReplaceTime->setValue((double)AlgoTime[2]/max*100);
    ui->progressQuadroReplaceTime->setValue((double)AlgoTime[3]/max*100);

    ui->progressStartPathAccuracy->setValue(100-(double)AlgoLength[0]/max_length*100);
    ui->progressDoubleReplaceAccuracy->setValue(100-(double)AlgoLength[1]/max_length*100);
    ui->progressTrippleReplaceAccuracy->setValue(100-(double)AlgoLength[2]/max_length*100);
    ui->progressQuadroReplaceAccuracy->setValue(100-(double)AlgoLength[3]/max_length*100);
}

void TSPResult::on_radioButton_clicked()        //check matrix from file
{
    ui->radioButton->setChecked(true);
    ui->radioButton_2->setChecked(false);
    ui->buttStartPath->setEnabled(true);
    ui->buttDoubleReplacement->setEnabled(true);
    ui->buttTripleReplacement->setEnabled(true);
    ui->buttFourthReplacement->setEnabled(true);
    ui->buttAllAlgorythm->setEnabled(true);
    ui->buttRandomGenerate->setEnabled(false);
    ui->editLengthFrom->setEnabled(false);
    ui->editLengthTo->setEnabled(false);
    ui->editPointFrom->setEnabled(false);
    ui->editPointStep->setEnabled(false);
    ui->editPointTo->setEnabled(false);
    ui->editQuantCycle->setEnabled(false);
}

void TSPResult::on_radioButton_2_clicked()      //check matrix from random generate
{
    ui->radioButton_2->setChecked(true);
    ui->radioButton->setChecked(false);
    ui->buttStartPath->setEnabled(false);
    ui->buttDoubleReplacement->setEnabled(false);
    ui->buttTripleReplacement->setEnabled(false);
    ui->buttFourthReplacement->setEnabled(false);
    ui->buttAllAlgorythm->setEnabled(false);
    ui->buttRandomGenerate->setEnabled(true);
    ui->editLengthFrom->setEnabled(true);
    ui->editLengthTo->setEnabled(true);
    ui->editPointFrom->setEnabled(true);
    ui->editPointStep->setEnabled(true);
    ui->editPointTo->setEnabled(true);
    ui->editQuantCycle->setEnabled(true);
}

void TSPResult::on_buttRandomGenerate_clicked()
{
    double T[4][_GRAPH_SCALE];            //average time on each interval of N in percent
    double A[4][_GRAPH_SCALE];            //average accuracy on each interval of N in percent
    double max_time=0;
    double max_length=0;
    double AverageTime[50];                //average time on each step
    double AverageAccuracy[50];            //average accuracy on each step
    double SumTime[4];                      //sum time to process average value
    double sum_path=0;
    double SumAccuracy[4];                  //sum accuracy to process average value
    int quant_from=0;               //quantity points on first step
    int quant_to=0;                 //5quantity points on last step            RandomGenerateMatrixDistance(matrix_distance,i, length_fro
    int quant_step=0;               //step that increase from quant_from to quant_to
    int length_from =0;             //interval random length from length_from
    int length_to = 0;              //to length_to
    int quant_cycle=0;              //quantity cycle on each N
    int start_point=0;
    int matrix_distance[QUANT_POINTS][QUANT_POINTS];
    ReadFromEditForRandom(quant_from,quant_to,quant_step,length_from,length_to,quant_cycle, start_point);    //read data from edit and
     QMessageBox Msgbox;
    if(quant_from>=quant_to)
    {

           Msgbox.setWindowTitle("Error inteval" );
           Msgbox.setText("Start quantity of points(From) should be less than end quantity points(To)");
           Msgbox.exec();
           return void();
    }
    if (length_from<0 || length_to<0)
    {
        Msgbox.setWindowTitle("Error distance value" );
        Msgbox.setText("Distance should be more than zero");
        Msgbox.exec();
        return void();
    }
    if (length_from >= length_to)
    {
        Msgbox.setWindowTitle("Error distance value" );
        Msgbox.setText("Distance 'From' should be less than 'To'");
        Msgbox.exec();
        return void();
    }
    if (quant_cycle<=0)
    {
        Msgbox.setWindowTitle("Error quantity cycle value" );
        Msgbox.setText("Quantity cycle should be more than zero");
        Msgbox.exec();
        return void();
    }
    if (start_point<1 || start_point>quant_to)
    {
        Msgbox.setWindowTitle("Error start point" );
        Msgbox.setText("Input start point from appropriate interval");
        Msgbox.exec();
        return void();
    }

    //write it to variables
    InitialDoubleMassive(SumTime, 4);
    InitialDoubleMassive(SumAccuracy,4);
    InitialDoubleMassive(AverageAccuracy, 50);
    InitialDoubleMassive(AverageTime, 50);
    for(int i=0;i<4;i++)
    {
         InitialDoubleMassive(T[i], _GRAPH_SCALE);
         InitialDoubleMassive(A[i], _GRAPH_SCALE);
    }
    int k=0;
    for(int i=quant_from;i<=quant_to;i+=quant_step)
    {

        for(int j=0;j<quant_cycle;j++)
        {
          //  InitialIntMassive(SumTime, 4);
           // InitialIntMassive(SumAccuracy,4);
            max_time=0;
            max_length=0;
            QString test;
            //i - current quantity of points
            //j - current numb of cycle of itteration i
            RandomGenerateMatrixDistance(matrix_distance,i, length_from, length_to);        //generate random data

             //Start path
            timer.start();                                          //timer start
            test=AlgorythmStartPath(matrix_distance,  start_point, sum_path, i);
            SumTime[0]=timer.nsecsElapsed();
            SumAccuracy[0]=sum_path;
            //end Start path
            max_length=SumAccuracy[0];
            max_time=SumTime[0];

            //Double Replace
            timer.start();                                          //timer start
            test=AlgotythmDoubleReplace(matrix_distance,  start_point, sum_path, i);
            SumTime[1]=timer.nsecsElapsed();
            SumAccuracy[1]=sum_path;
            //end Double Replace
            if(max_length<SumAccuracy[1])
                max_length=SumAccuracy[1];
            if (max_time<SumTime[1])
                max_time=SumTime[1];

            //Tripple Replace
            timer.start();                                          //timer start
            test=AlgotythmTrippleReplace(matrix_distance,  start_point, sum_path, i);
            SumTime[2]=timer.nsecsElapsed();
            SumAccuracy[2]=sum_path;
            //end Tripple Replace
            if(max_length<SumAccuracy[2])
                max_length=SumAccuracy[2];
            if (max_time<SumTime[2])
                max_time=SumTime[2];

            //Quadro Replace
            timer.start();                                          //timer start
            test=AlgorythmQuadroReplace(matrix_distance,  start_point, sum_path, i);
            SumTime[3]=timer.nsecsElapsed();
            SumAccuracy[3]=sum_path;
            //end Quadro Replace
            if(max_length<SumAccuracy[3])
                max_length=SumAccuracy[3];
            if (max_time<SumTime[3])
                max_time=SumTime[3];



            A[0][k]+=100-(double)SumAccuracy[0]/max_length*100;
            A[1][k]+=100-(double)SumAccuracy[1]/max_length*100;
            A[2][k]+=100-(double)SumAccuracy[2]/max_length*100;
            A[3][k]+=100-(double)SumAccuracy[3]/max_length*100;
            T[0][k]+=(double)SumTime[0]/max_time*100;
            T[1][k]+=(double)SumTime[1]/max_time*100;
            T[2][k]+=(double)SumTime[2]/max_time*100;
            T[3][k]+=(double)SumTime[3]/max_time*100;

        }
        A[0][k]/=quant_cycle;
        A[1][k]/=quant_cycle;
        A[2][k]/=quant_cycle;
        A[3][k]/=quant_cycle;
        T[0][k]/=quant_cycle;
        T[1][k]/=quant_cycle;
        T[2][k]/=quant_cycle;
        T[3][k]/=quant_cycle;




        k++;
    }

//send data A[][] and T[][] and draw graphic and k - quantity point
graph_dr= new Graph(A, T, quant_from, quant_to, quant_step);
graph_dr->show();

}

void TSPResult::ErrorStartPoint()
{
    QMessageBox Msgbox;
       Msgbox.setWindowTitle("Error start point" );
       Msgbox.setText("Input start point from specific interval");
       Msgbox.exec();
}

void TSPResult::RandomGenerateMatrixDistance(int (&matr_distance)[QUANT_POINTS][QUANT_POINTS], int quant_point, int l_from, int l_to)
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    for(int i=0;i<quant_point;i++)
    {
        for(int j=i;j<quant_point;j++)
        {
            if(i!=j)
            {
                matr_distance[i][j]= qrand() % ((l_to + 1) - l_from) + l_from;
                matr_distance[j][i]=matr_distance[i][j];
            }
            else matr_distance[i][j]=_INFINITY;
        }
    }
}



void TSPResult::ReadFromEditForRandom(int &q_from, int &q_to, int &q_step, int &l_from, int &l_to, int &q_cycle, int &s_point)
{
    q_from=ui->editPointFrom->text().toInt();
    q_to=ui->editPointTo->text().toInt();
    q_step=ui->editPointStep->text().toInt();
    l_from=ui->editLengthFrom->text().toInt();
    l_to=ui->editLengthTo->text().toInt();
    q_cycle=ui->editQuantCycle->text().toInt();
    s_point= ui->editStartPoint->text().toInt();


}

void TSPResult::InitialDoubleMassive(double *massive, int quant)
{
    for(int i=0;i<quant;i++)
        *(massive+i)=0;
}

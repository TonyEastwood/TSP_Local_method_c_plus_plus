#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::AssignStartValue(double (&distance_matrix)[QUANT_POINTS][QUANT_POINTS] )   //initialize matrix of distance
{
    for(int i=0;i<QUANT_POINTS;i++)
        for(int j=0;j<QUANT_POINTS;j++)
            distance_matrix[i][j]=_INFINITY;
}

void Widget::AssignValueFromFile(double (&point_distance)[QUANT_POINTS][QUANT_POINTS], QFile & file)
{
     QStringList query;                             //for split line and write it on this QString list
    while(!file.atEnd())       //until the end of the file
{
     QString str;                           //buffer for read line from file
     str=file.readLine();                  //read line from file
     QRegExp rx("(\\ )");                   //RegEx for ' ' or ',' or '.' or ':' or '\t'
     query = str.split(rx);                 //split line and assign to query
     point_distance[QString(query[0]).toInt()-1][QString(query[1]).toInt()-1]=QString(query[2]).toInt();    //fill in distance matrix
     point_distance[QString(query[1]).toInt()-1][QString(query[0]).toInt()-1]=QString(query[2]).toInt();    //matrix symetrical so a[0][1]=a[1][0]
}
}
void Widget::Error_CantOpenFile(QString path)   //error if can't open file for read
{
    QMessageBox Msgbox;
       Msgbox.setWindowTitle("Can't open file for read" );
       Msgbox.setText("Can't open file '"+path+"' check for access rights for this file");
       Msgbox.exec();
}
void Widget::Error_FileNonExistent(QString path)    //error if file non exist
{
    QMessageBox Msgbox;
       Msgbox.setWindowTitle("File " +path + " non exist" );
       Msgbox.setText("Copy your file '"+path+"' in current directory");
       Msgbox.exec();
}
void Widget::ShowDataTableFromFile(int quantity_points, double matrix_distance[][100])      //show matrix distance in table view
{
    QStringList horizHeader;
    for(int i=0;i<quantity_points;i++)                  //add all column
       horizHeader.append(QString::number(i+1));

   model->setHorizontalHeaderLabels(horizHeader);
   for(int i=0; i<quantity_points;i++)
   {
       for (int j=0; j<quantity_points;j++)
       {
           item = new QStandardItem(QString(QString::number(matrix_distance[i][j])));       //set value for matrix distance
           model->setItem(i, j, item);              //set value
       }
   }
       ui->tableView->setModel(model);              //show data in table
}
void Widget::on_pushButton_clicked()
{

    const QString lFileName(ui->editFileName->text());


    if (!QFile::exists(lFileName))      //if file with this name non exist
    {
             Error_FileNonExistent(lFileName);   //show error, file non exist
             return void();
    }



    QFile lFile;
    lFile.setFileName(lFileName);   //set FileName for lFile
    if(!lFile.open(QIODevice::ReadOnly|QIODevice::Text))    // open file for Read Only
    {
             Error_CantOpenFile(lFileName);      //show error, can't open file
             return void();
    }


    int quantity_points=QString(lFile.readLine()).toInt();     //quantity points read from first line of file
    double point_distance[QUANT_POINTS][QUANT_POINTS]={_INFINITY};    //matrix distance between points
    AssignStartValue(point_distance);                   //set start value (infinity for each cell)
    AssignValueFromFile(point_distance, lFile);         //set value for each cell from file
    lFile.close();                              //close file
    ShowDataTableFromFile(quantity_points, point_distance);                    //show matrix of distance on tableview

}

void Widget::on_pushButton_2_clicked()
{

}

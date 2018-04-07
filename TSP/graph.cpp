#include "graph.h"
#include "ui_graph.h"

Graph::Graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph)
{
    ui->setupUi(this);
}

Graph::Graph(double A[4][_GRAPH_SCALE], double T[4][_GRAPH_SCALE], int p_from, int p_to, int p_step):
    QWidget(0),
    ui(new Ui::Graph)
{
    ui->setupUi(this);
    //Сгенерируем данные
       //Для этого создадим два массива точек:
       //один для созранения x координат точек,
       //а второй для y соответственно
    DrawGraph(A,T, p_from, p_to, p_step);


}

Graph::~Graph()
{
    delete ui;
}

void Graph::DrawGraph(double A[4][_GRAPH_SCALE], double T[4][_GRAPH_SCALE], int p_from, int p_to, int p_step)
{
    double a = p_from; //Начало интервала, где рисуем график по оси Ox
    double b =  p_to; //Конец интервала, где рисуем график по оси Ox
    double h = p_step; //Шаг, с которым будем пробегать по оси Ox

    int N=(b-a)/h + 2; //Вычисляем количество точек, которые будем отрисовывать
    QVector<double> x(N), y(N), y1(N), y2(N); //Массивы координат точек

    //Вычисляем наши данные
    int i=0;
    for (double X=a; X<=b; X+=h)//Пробегаем по всем точкам
    {
        x[i] = X;
        y[i] = A[1][i];//Формула нашей функции
        y1[i] = A[2][i];//Формула нашей функции
        y2[i] = A[3][i];//Формула нашей функции
        i++;
    }

    ui->widget->clearGraphs();//Если нужно, но очищаем все графики
    //Добавляем один график в widget
    ui->widget->addGraph();
    ui->widget->addGraph();
    ui->widget->addGraph();
    //Говорим, что отрисовать нужно график по нашим двум массивам x и y
     ui->widget->graph(0)->setPen(QColor(255, 0, 0, 255));//задаем цвет точки
      ui->widget->graph(1)->setPen(QColor(0, 255, 0, 255));//задаем цвет точки
       ui->widget->graph(2)->setPen(QColor(0, 0, 255, 255));//задаем цвет точки
    ui->widget->graph(0)->setData(x, y);
    ui->widget->graph(1)->setData(x, y1);
    ui->widget->graph(2)->setData(x, y2);

    //Подписываем оси Ox и Oy
    ui->widget->xAxis->setLabel("N");
    ui->widget->yAxis->setLabel("A");

    //Установим область, которая будет показываться на графике
    ui->widget->xAxis->setRange(a, b);//Для оси Ox

    //Для показа границ по оси Oy сложнее, так как надо по правильному
    //вычислить минимальное и максимальное значение в векторах


    ui->widget->yAxis->setRange(0, 100);//Для оси Oy

    //И перерисуем график на нашем widget
    ui->widget->replot();


    //Вычисляем наши данные
     i=0;
    for (double X=a; X<=b; X+=h)//Пробегаем по всем точкам
    {
        y[i] = T[1][i];//Формула нашей функции
        y1[i] = T[2][i];//Формула нашей функции
        y2[i] = T[3][i];//Формула нашей функции
        i++;
    }

    ui->widget_2->clearGraphs();//Если нужно, но очищаем все графики
    //Добавляем один график в widget
    ui->widget_2->addGraph();
    ui->widget_2->addGraph();
    ui->widget_2->addGraph();
    //Говорим, что отрисовать нужно график по нашим двум массивам x и y
     ui->widget_2->graph(0)->setPen(QColor(255, 0, 0, 255));//задаем цвет точки
      ui->widget_2->graph(1)->setPen(QColor(0, 255, 0, 255));//задаем цвет точки
       ui->widget_2->graph(2)->setPen(QColor(0, 0, 255, 255));//задаем цвет точки
    ui->widget_2->graph(0)->setData(x, y);
    ui->widget_2->graph(1)->setData(x, y1);
    ui->widget_2->graph(2)->setData(x, y2);

    //Подписываем оси Ox и Oy
    ui->widget_2->xAxis->setLabel("N");
    ui->widget_2->yAxis->setLabel("T");

    //Установим область, которая будет показываться на графике
    ui->widget_2->xAxis->setRange(a, b);//Для оси Ox

    //Для показа границ по оси Oy сложнее, так как надо по правильному
    //вычислить минимальное и максимальное значение в векторах


    ui->widget_2->yAxis->setRange(0, 100);//Для оси Oy

    //И перерисуем график на нашем widget
    ui->widget_2->replot();
}

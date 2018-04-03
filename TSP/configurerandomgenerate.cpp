#include "configurerandomgenerate.h"
#include "ui_configurerandomgenerate.h"

ConfigureRandomGenerate::ConfigureRandomGenerate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConfigureRandomGenerate)
{
    ui->setupUi(this);
}

ConfigureRandomGenerate::~ConfigureRandomGenerate()
{
    delete ui;
}

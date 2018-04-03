#ifndef CONFIGURERANDOMGENERATE_H
#define CONFIGURERANDOMGENERATE_H

#include <QWidget>

namespace Ui {
class ConfigureRandomGenerate;
}

class ConfigureRandomGenerate : public QWidget
{
    Q_OBJECT

public:
    explicit ConfigureRandomGenerate(QWidget *parent = 0);
    ~ConfigureRandomGenerate();

private:
    Ui::ConfigureRandomGenerate *ui;
};

#endif // CONFIGURERANDOMGENERATE_H

#include "fenliaison.h"
#include "ui_fenliaison.h"

FenLiaison::FenLiaison(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenLiaison)
{
    ui->setupUi(this);
}

FenLiaison::~FenLiaison()
{
    delete ui;
}

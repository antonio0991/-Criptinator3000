#include "cesar.h"
#include "ui_cesar.h"

cesar::cesar(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::cesar)
{
  ui->setupUi(this);
}

cesar::~cesar()
{
  delete ui;
}

#include "enigma.h"
#include "ui_enigma.h"

enigma::enigma(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::enigma)
{
  ui->setupUi(this);
}

enigma::~enigma()
{
  delete ui;
}

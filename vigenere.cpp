#include "vigenere.h"
#include "ui_vigenere.h"

vigenere::vigenere(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::vigenere)
{
  ui->setupUi(this);
}

vigenere::~vigenere()
{
  delete ui;
}

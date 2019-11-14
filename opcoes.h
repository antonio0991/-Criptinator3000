#ifndef OPCOES_H
#define OPCOES_H

#include <QDialog>

namespace Ui {
  class opcoes;
}

class opcoes : public QDialog
{
  Q_OBJECT

public:
  explicit opcoes(QWidget *parent = nullptr);
  ~opcoes();

private:
  Ui::opcoes *ui;
};

#endif // OPCOES_H

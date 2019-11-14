#ifndef ENIGMA_H
#define ENIGMA_H

#include <QDialog>

namespace Ui {
  class enigma;
}

class enigma : public QDialog
{
  Q_OBJECT

public:
  explicit enigma(QWidget *parent = nullptr);
  ~enigma();

private slots:
  void on_spinBox_valueChanged(int arg1);

private:
  Ui::enigma *ui;
};

#endif // ENIGMA_H

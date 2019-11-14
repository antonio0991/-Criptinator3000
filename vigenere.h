#ifndef VIGENERE_H
#define VIGENERE_H

#include <QDialog>

namespace Ui {
  class vigenere;
}

class vigenere : public QDialog
{
  Q_OBJECT

public:
  explicit vigenere(QWidget *parent = nullptr);
  ~vigenere();

private:
  Ui::vigenere *ui;
};

#endif // VIGENERE_H

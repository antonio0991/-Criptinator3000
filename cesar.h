#ifndef CESAR_H
#define CESAR_H

#include <QDialog>

namespace Ui {
  class cesar;
}

class cesar : public QDialog
{
  Q_OBJECT

public:
  explicit cesar(QWidget *parent = nullptr);
  ~cesar();

private:
  Ui::cesar *ui;
};

#endif // CESAR_H

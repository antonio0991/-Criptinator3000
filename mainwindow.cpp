#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "opcoes.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    opcoes op;
    op.setModal(true);
    op.exec();
}

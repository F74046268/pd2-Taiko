#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
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
 //   Dialog dialog;
  //  dialog.setModal(true);
  //  dialog.exec();

    dialog = new Dialog(this);
    dialog->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}

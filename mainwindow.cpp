#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myform.h"


MainWindow::MainWindow(QWidget *parent) :  QMainWindow(parent),    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Connect");
    ui->pushButton_2->setText("Close");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    mf = new MyForm(this);
    mf->show();
}


#include "myform2.h"
#include "ui_myform2.h"
#include <QPixmap>
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
#include <cstdlib>

MyForm2::MyForm2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyForm2)
{
    ui->setupUi(this);

    int rand(MyForm2);
    arduino_is_available = true;

    QPixmap pix("C:/Users/Abdullah Javaid/Desktop/graphics/lock");
    ui->label->setPixmap(pix);
    QPixmap pix2("C:/Users/Abdullah Javaid/Desktop/graphics/unlock");
    ui->label_2->setPixmap(pix2);

}

MyForm2::~MyForm2()
{
    delete ui;
}

void MyForm2::on_pushButton_clicked()
{
    if(arduino_is_available){
        //arduino->open(QIODevice::WriteOnly);
        if(arduino_is_available){
            //arduino->write("255");
            QMessageBox::information(this,tr("STATUS"),tr("Door is Locked"));
        }
    }
    else {
        QMessageBox::warning(this, "Port Error", "Couldn't find the Arduino!");
    }
}

void MyForm2::on_pushButton_2_clicked()
{
    if(arduino_is_available){
        //arduino->open(QIODevice::WriteOnly);
        if(arduino_is_available){
            //arduino->write("0");
            QMessageBox::information(this,tr("STATUS"),tr("Door is Unlocked"));
        }
    }
    else {
        QMessageBox::warning(this, "Port error", "Couldn't find the Arduino!");
    }
}

void MyForm2::on_pushButton_3_clicked()
{
    this->hide();
}

#include "myform.h"
#include "ui_myform.h"
#include "myform2.h"

MyForm::MyForm(QWidget *parent) :   QWidget(parent),  ui(new Ui::MyForm)
{
    ui->setupUi(this);
    //qsb = new QScrollBar(Qt::Vertical);
    //qsb->setMinimum(0);
    //qsb->setMaximum(100);

}

MyForm::~MyForm()
{
    delete ui;
}

void MyForm::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
    {
        md = new MyForm2(this);
        md->show();
    }
    if(ui->radioButton_2->isChecked())
    {
        md = new MyForm2(this);
        md->show();
    }
    if(ui->radioButton_3->isChecked())
    {
        md = new MyForm2(this);
        md->show();
    }
    if(ui->radioButton_4->isChecked())
    {
        md = new MyForm2(this);
        md->show();
    }
}

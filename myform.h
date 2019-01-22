#ifndef MYFORM_H
#define MYFORM_H

#include <QWidget>
//#include <QScrollBar>
#include "myform2.h"

namespace Ui {
class MyForm;
}

class MyForm : public QWidget
{
    Q_OBJECT

public:
    explicit MyForm(QWidget *parent = nullptr);
    ~MyForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MyForm *ui;
    //QScrollBar *qsb;
    MyForm2 *md;



};

#endif // MYFORM_H

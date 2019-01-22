#ifndef MYFORM2_H
#define MYFORM2_H

#include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <cstdlib>

namespace Ui {
class MyForm2;
}

class QSerialPort;

class MyForm2 : public QWidget
{
    Q_OBJECT

public:
    explicit MyForm2(QWidget *parent = nullptr);
    ~MyForm2();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MyForm2 *ui;

    int rand(MyForm2);
    QSerialPort *arduino;
    bool arduino_is_available;

};

#endif // MYFORM2_H

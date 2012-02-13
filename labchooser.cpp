#include "labchooser.h"
#include "ui_labchooser.h"
#include "lab1.h"
#include "lab2.h"
LabChooser::LabChooser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LabChooser)
{
    ui->setupUi(this);
}

LabChooser::~LabChooser()
{
    delete ui;
}

void LabChooser::on_btnLaunch_clicked()
{
    if (this->ui->rbLw1->isChecked())
    {
        Lab1 lab1;
        lab1.exec();
    }

    if (this->ui->rbLw2->isChecked())
    {
        Lab2 lab2;
        lab2.exec();
    }

    if (this->ui->rbLw3->isChecked())
    {

    }

   // this->hide();
}

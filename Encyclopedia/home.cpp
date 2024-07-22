#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    s = new Search();
    a = new Add();
}

Home::~Home()
{
    delete a;
    delete s;
    delete ui;
}



void Home::on_btnSearch_clicked()
{
    s->show();
}


void Home::on_btnAdd_clicked()
{
    a->show();
}


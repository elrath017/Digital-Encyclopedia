#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    h = new Home();
}

MainWindow::~MainWindow()
{
    delete h;
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    h->show();
}


#include "add.h"
#include "ui_add.h"
#include <QMessageBox>

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
}

Add::~Add()
{
    delete ui;
}

void Add::on_pushButton_clicked()
{
    QString name = ui->lineEditname->text();
    QString type = ui->comboBox->currentText();
    QString details = ui->textEditdetails->toPlainText();

    if (name.isEmpty() || type.isEmpty() || details.isEmpty()) {
        QMessageBox::critical(this, "Error", "Please fill in all fields.");
        return;
    }

    log.insert(log.root,name.toStdString(), type.toStdString(), details.toStdString());

    QMessageBox::information(this, "Success", "Data inserted successfully.");
    hide();
}


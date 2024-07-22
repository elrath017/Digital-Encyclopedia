#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include "logic.h"

namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    ~Add();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Add *ui;
    logic log;


};

#endif // ADD_H

#ifndef HOME_H
#define HOME_H

#include <QDialog>
#include <add.h>
#include <search.h>

namespace Ui {
class Home;
}

class Home : public QDialog
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();

private slots:
    void on_btnSearch_clicked();

    void on_btnAdd_clicked();

private:
    Ui::Home *ui;
    Search *s;
    Add *a;
};

#endif // HOME_H

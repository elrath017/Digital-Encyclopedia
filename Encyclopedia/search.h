#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include "logic.h"

namespace Ui {
class Search;
}

class Search : public QDialog
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = nullptr);
    ~Search();

private slots:
    void on_pushButton_clicked();

    void search();


private:
    Ui::Search *ui;
    logic log;
    QString stext;
};

#endif // SEARCH_H

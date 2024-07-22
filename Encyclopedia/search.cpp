#include "search.h"
#include "ui_search.h"

Search::Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);

    connect
        (ui->pushButton, &QPushButton::clicked,
         this
         , &Search::search);
}


Search::~Search()
{
    delete ui;
}


void Search::on_pushButton_clicked()
{
    stext = ui->lineEdit->text();
}

void Search::search()
{
    std::string query = stext.toStdString();
    std::string searchResult; // A string to store the search result

    // Call your logic class to perform the search
    log.search(query, searchResult);

    // Display the search result in the QTextBrowser or QLabel
    ui->textBrowser->setText(QString::fromStdString(searchResult));
}

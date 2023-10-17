#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_checkBox_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}


void Widget::on_checkBox_2_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}


void Widget::on_checkBox_3_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}

void Widget::setTextFontColor()
{
    QPalette palette = ui->plainTextEdit->palette();
    if (ui->radioButton->isChecked())
        palette.setColor(QPalette::Text, Qt::red);
    else if (ui->radioButton_2->isChecked())
        palette.setColor(QPalette::Text, Qt::blue);
    else if (ui->radioButton_3->isChecked())
        palette.setColor(QPalette::Text, Qt::green);
    else
        palette.setColor(QPalette::Text, Qt::black);
    ui->plainTextEdit->setPalette(palette);
}


void Widget::on_radioButton_clicked(bool checked)
{
    setTextFontColor();
}



void Widget::on_radioButton_2_clicked(bool checked)
{
    setTextFontColor();
}


void Widget::on_radioButton_3_clicked()
{
    QPalette palette = ui->plainTextEdit->palette();
    palette.setColor(QPalette::Text, Qt::green);
    ui->plainTextEdit->setPalette(palette);
}


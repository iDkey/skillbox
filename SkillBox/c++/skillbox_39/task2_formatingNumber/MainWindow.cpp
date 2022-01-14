//
// Created by jollu on 1/13/22.
//
#include "MainWindow.h"
#include "ui_mainWindow.h"
#include <QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEdit, &QLineEdit::textEdited,[this](QString currentText){
        QRegularExpression exp("^\\+[7][4,8,9]\\d{9}");
        if(exp.match(currentText).hasMatch()){
            setLabel();
        }else {
            setNoneLabel();
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setLabel()
{
    ui->label->setText("OK");
    ui->label->setStyleSheet("QLabel {color : Green;}");
}

void MainWindow::setNoneLabel()
{
    ui->label->setText("Not OK");
    ui->label->setStyleSheet("QLabel {color : red;}");
}



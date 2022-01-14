//
// Created by jollu on 1/13/22.
//

#ifndef TASK2_FORMATINGNUMBER_MAINWINDOW_H
#define TASK2_FORMATINGNUMBER_MAINWINDOW_H
#include <QMainWindow>
#include "ui_mainWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void setLabel();
    void setNoneLabel();
private:
    Ui::MainWindow *ui;
};
#endif //TASK2_FORMATINGNUMBER_MAINWINDOW_H

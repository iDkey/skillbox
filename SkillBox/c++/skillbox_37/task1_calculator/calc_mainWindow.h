//
// Created by jollu on 1/8/22.
//

#ifndef TASK1_CALCULATOR_CALC_MAINWINDOW_H
#define TASK1_CALCULATOR_CALC_MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QString>
#include <QTextStream>
#include <iostream>


class Calc_mainWindow : public QMainWindow {
Q_OBJECT
public:
    QLineEdit *lineEdit = nullptr;

    Calc_mainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {}

public slots:


    void number_0() { lineEdit->setText(lineEdit->text() + "0"); };

    void number_1() { lineEdit->setText(lineEdit->text() + "1"); };

    void number_2() { lineEdit->setText(lineEdit->text() + "2"); };

    void number_3() { lineEdit->setText(lineEdit->text() + "3"); };

    void number_4() { lineEdit->setText(lineEdit->text() + "4"); };

    void number_5() { lineEdit->setText(lineEdit->text() + "5"); };

    void number_6() { lineEdit->setText(lineEdit->text() + "6"); };

    void number_7() { lineEdit->setText(lineEdit->text() + "7"); };

    void number_8() { lineEdit->setText(lineEdit->text() + "8"); };

    void number_9() { lineEdit->setText(lineEdit->text() + "9"); };

    void btn_clear_line() { lineEdit->setText(""); };
// checked for "(" and ")" using in void vtn_parenthesis();===========
    QString parenthesisReturn(QString const &str);

    void btn_parenthesis() {
        QString str = lineEdit->text();
        lineEdit->setText(lineEdit->text() + parenthesisReturn(str));
    };
    bool divisionReturn(QString  const&str);
    void btn_division() {
        QString str = lineEdit->text();
       bool b = divisionReturn(str);
        if (b) {
           lineEdit->setText(lineEdit->text() + "/");
       }
         };
    bool multiplicationReturn(QString const &str);
    void btn_multiplication() {
        QString str = lineEdit->text();
        bool b = multiplicationReturn(str);
        if (b) {
            lineEdit->setText(lineEdit->text() + "*");
        }
    };

    bool minusReturn(QString const &str);
    void btn_minus() {
        QString str = lineEdit->text();
        bool b = minusReturn(str);
        if (b) {
            lineEdit->setText(lineEdit->text() + "-");
        }
    };

    bool plusReturn(QString const &str);
    void btn_plus() {
        QString str = lineEdit->text();
        bool b = minusReturn(str);
        if (b) {
            lineEdit->setText(lineEdit->text() + "+");
        }
    };

    bool pointReturn(QString const &str);
    void btn_point() {
        QString str = lineEdit->text();
        bool b = pointReturn(str);
        if (b) {
            lineEdit->setText(lineEdit->text() + ".");
        }
    };

    bool absReturn(QString const& str);
    void btn_abs() {
        QString str = lineEdit->text();
        bool b = absReturn(str);
        if (b) {
            lineEdit->setText(lineEdit->text() + "(-");
        }
    };

    void btn_percent() { lineEdit->setText(lineEdit->text() + "%"); };
    double resultReturn(QString const &str);
    void btn_result() {
        QString str = lineEdit->text();
        double res = resultReturn(str);
        QString s = QString::number(res);
        lineEdit->setText(s); };


};


#endif //TASK1_CALCULATOR_CALC_MAINWINDOW_H

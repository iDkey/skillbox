//
// Created by jollu on 1/8/22.
//

#include "calc_mainWindow.h"
#include <QString>


//// func for btn_parenthesis ========
QString Calc_mainWindow::parenthesisReturn(QString const &str) {
    int count = 0;
    int count1 = 0;

    std::cout << str.toStdString();

    for (auto &i: str) {
        if (i == "(") {
            ++count;
        } else if (i == ")") {
            ++count1;
        }
    }
    if (count == count1) {
        return "(";
    } else if (count > count1) {
        return ")";
    } else if (count1 < count1) {
        return ")";
    }

};

////correct Division. used in btn_division
bool Calc_mainWindow::divisionReturn(QString const &str) {
//    if(!str[0].isDigit()) {
//        return false;
//    }
    QChar ch = 'r';
    for (int i = 0; i < str.size(); i++) {
        ch = str[i];
    }
    if (ch == '/' || ch == '(' || ch == '+' || ch == '-' || ch == '.' || ch == '%' || ch == 'r' || ch == '*') {
        return false;
    }
    return true;
}

bool Calc_mainWindow::multiplicationReturn(QString const &str) {
    QChar ch = 'r';
    for (int i = 0; i < str.size(); i++) {
        ch = str[i];
    }
    if (ch == '*' || ch == '(' || ch == '+' || ch == '-' || ch == '.' || ch == '%' || ch == 'r' || ch == '/') {
        return false;
    }
    return true;
}

bool Calc_mainWindow::minusReturn(QString const &str) {
    QChar ch = 'r';
    for (int i = 0; i < str.size(); i++) {
        ch = str[i];
    }
    if (ch == '*' || ch == '(' || ch == '+' || ch == '-' || ch == '.' || ch == '%' || ch == 'r' || ch == '/') {
        return false;
    }
    return true;
}

bool Calc_mainWindow::plusReturn(const QString &str) {
    QChar ch = 'r';
    for (int i = 0; i < str.size(); i++) {
        ch = str[i];
    }
    if (ch == '*' || ch == '(' || ch == '+' || ch == '-' || ch == '.' || ch == '%' || ch == 'r' || ch == '/') {
        return false;
    }
    return true;
}

bool Calc_mainWindow::pointReturn(const QString &str) {
    if (str.isEmpty()) {
        return true;
    }
    QChar ch;
    for (int i = 0; i < str.size(); i++) {
        ch = str[i];
    }
    if (ch == '.') {
        return false;
    }
    return true;
}

bool Calc_mainWindow::absReturn(const QString &str) {
    if (str.isEmpty()) {
        return true;
    }
    QChar ch1;
//    QChar ch = 'r';
    for (int i = 0; i < str.size(); i++) {
//        ch = str[i];
        if (str[i] == '-') {
            if (str[i - 1] == '(') {
                ch1 = 'r';
                return false;
            }

        }
    }
    return true;

}

double calculate(double a, double b, QString &st) {
    std::string s = st.toStdString();
    char ch = s[0];
    double res;
    switch (ch) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
    }
    return res;
}


double Calc_mainWindow::resultReturn(const QString &str) {
    double res = 0;
    double first;
    double second;
    QString s;

    for (auto i: str) {
        if (i != '+' || i != '-' || i != '/' || i != '*') {
            s.push_back(i);

        } else if (i == '+' || i == '-' || i == '/' || i == '*') {
            first = s.toDouble();
            second = first;
        } else if (i == '+' || i == '-' || i == '/' || i == '*') {
            QString st(i);
            res = calculate(first, second, st);
        }

    }

    return res;
}
















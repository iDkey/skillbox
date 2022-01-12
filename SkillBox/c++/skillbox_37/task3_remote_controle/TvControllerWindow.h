#ifndef INC_37_3_TVCONTROLLERWINDOW_H
#define INC_37_3_TVCONTROLLERWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QTimer>

class TvControllerWindow: public QMainWindow {
Q_OBJECT
public:
    TvControllerWindow(QWidget *parent): QMainWindow(parent){
        timer->setInterval(2000);
    }
    QString get_line();
    void set_pLine(QLineEdit*);
    QTimer *timer = new QTimer;
private:
    QLineEdit *_lineEdit = nullptr;
    bool tv_is_on = false;
    QString chnl = "0";
    QString vol = "50";
    void check_timer();

public slots:
    void addCh0();
    void addCh1();
    void addCh2();
    void addCh3();
    void addCh4();
    void addCh5();
    void addCh6();
    void addCh7();
    void addCh8();
    void addCh9();
    void volUp();
    void volDown();
    void chUp();
    void chDown();
    void power();
    void timer_slot();
};



#endif //INC_37_3_TVCONTROLLERWINDOW_H

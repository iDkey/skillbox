#include "TvControllerWindow.h"

QString TvControllerWindow::get_line() {
    return _lineEdit->text();
}

void TvControllerWindow::set_pLine(QLineEdit *lineEdit) {
    _lineEdit = lineEdit;
}

void TvControllerWindow::check_timer() {
    if(!timer->isActive()){
        _lineEdit->clear();
    }
    timer->stop();
    timer->start();
}

void TvControllerWindow::addCh0() {
    if(tv_is_on) {
        check_timer();
        _lineEdit->setText(_lineEdit->text() + "0");
    }
}
void TvControllerWindow::addCh1() {
    if(tv_is_on){
        check_timer();
        _lineEdit->setText(_lineEdit->text() + "1");
    }
}
void TvControllerWindow::addCh2() {
    if(tv_is_on) {
        check_timer();
        _lineEdit->setText(_lineEdit->text() + "2");
    }
}
void TvControllerWindow::addCh3() {
    if(tv_is_on) {
        check_timer();
        _lineEdit->setText(_lineEdit->text() + "3");
    }
}
void TvControllerWindow::addCh4() {
    if(tv_is_on) {
        check_timer();
        _lineEdit->setText(_lineEdit->text() + "4");
    }
}
void TvControllerWindow::addCh5() {
    if(tv_is_on) {
        check_timer();
        _lineEdit->setText(_lineEdit->text() + "5");
    }
}
void TvControllerWindow::addCh6() {
    if(tv_is_on) {
        check_timer();
        _lineEdit->setText(_lineEdit->text() + "6");
    }
}
void TvControllerWindow::addCh7() {
    if(tv_is_on) {
        check_timer();
        _lineEdit->setText(_lineEdit->text() + "7");
    }
}
void TvControllerWindow::addCh8() {
    if(tv_is_on) {
        check_timer();
        _lineEdit->setText(_lineEdit->text() + "8");
    }
}
void TvControllerWindow::addCh9() {
    if(tv_is_on) {
        check_timer();
        _lineEdit->setText(_lineEdit->text() + "9");
    }
}

void TvControllerWindow::volUp() {
    if(tv_is_on && vol.toInt() < 100) {
        vol.setNum(vol.toInt()+10);
        _lineEdit->setText("Channel: " + chnl + " | Volume: " + vol);
    }
}

void TvControllerWindow::volDown() {
    if(tv_is_on && vol.toInt() > 0) {
        vol.setNum(vol.toInt() - 10);
        _lineEdit->setText("Channel: " + chnl + " | Volume: " + vol);
    }
}

void TvControllerWindow::chUp() {
    if(tv_is_on) {
        chnl.setNum(chnl.toInt() + 1);
        _lineEdit->setText("Channel: " + chnl + " | Volume: " + vol);
    }
}

void TvControllerWindow::chDown() {
    if(tv_is_on && chnl.toInt() > 0) {
        chnl.setNum(chnl.toInt() - 1);
        _lineEdit->setText("Channel: " + chnl + " | Volume: " + vol);
    }
}

void TvControllerWindow::power() {
    if(tv_is_on){
        tv_is_on = false;
        _lineEdit->clear();
    }else {
        tv_is_on = true;
        _lineEdit->setText("Channel: " + chnl + " | Volume: " + vol);
    }
}

void TvControllerWindow::timer_slot() {
    timer->stop();
    chnl = _lineEdit->text();
    _lineEdit->setText("Channel: " + chnl + " | Volume: " + vol);
}







//
// Created by jollu on 12/21/21.
//

#ifndef SKILLBOX_36_CIRCLE_H
#define SKILLBOX_36_CIRCLE_H
#pragma once
#include <QWidget>
#include <QPixmap>
#include <QPaintEvent>

class Circle : public QWidget
{
Q_OBJECT

public:
    Circle() = default;

    Circle(QWidget *parent);

    void paintEvent(QPaintEvent *e) override;

    QSize minimumSizeHint() const override;

    void setRed();

    void setYellow();

    void setGreen();

private:
    QPixmap mCircleRed;
    QPixmap mCircleGreen;
    QPixmap mCircleYellow;
    QPixmap mCurrentColor;
};

#endif //SKILLBOX_36_CIRCLE_H

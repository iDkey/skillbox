//
// Created by jollu on 12/21/21.
//

#include "../header/circle.h"
#include <QPainter>

Circle::Circle(QWidget *parent)
{
    setParent(parent);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mCircleRed = QPixmap("../file/red.png");
    mCircleGreen = QPixmap("../file/green.png");
    mCircleYellow = QPixmap("../file/yellow.png");
    mCurrentColor = mCircleGreen;
    setGeometry(mCurrentColor.rect());
}

void Circle::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentColor);
}

QSize Circle::minimumSizeHint() const
{
    return QSize(250, 250);
}

void Circle::setRed()
{
    mCurrentColor = mCircleRed;
    update();
}

void Circle::setGreen()
{
    mCurrentColor = mCircleGreen;
    update();
}

void Circle::setYellow()
{
    mCurrentColor = mCircleYellow;
    update();
}
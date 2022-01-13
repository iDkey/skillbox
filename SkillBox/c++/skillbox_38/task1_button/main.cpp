#include <iostream>
#include <QPaintEvent>
#include <QPainter>
#include <QApplication>
#include <QPushButton>
#include <QMediaPlayer>
#include <QWidget>

class ImageButton : public QPushButton{

public:
    ImageButton() = default;
    explicit ImageButton(QWidget *parent);
    void paintEvent(QPaintEvent *e) override;
    [[nodiscard]] QSize sizeHint() const override;
    [[nodiscard]] QSize minimumSizeHint() const override;
    void keyPressEvent(QKeyEvent *e) override;
public slots:
    void button_pushed();
    void set_on();
    void set_off();

private:
    QPixmap CurrentButtonPixMap;
    QPixmap ButtonOnPixMap;
    QPixmap ButtonOffPixMap;
    QMediaPlayer *pushSound = new QMediaPlayer(this);

    bool _isDown = false;
};

ImageButton::ImageButton(QWidget *parent){
    setParent(parent);
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    ButtonOnPixMap = QPixmap("/home/jollu/Desktop/skillbox/SkillBox/c++/skillbox_38/task1_button/bin/PowerOff.png");
    ButtonOffPixMap = QPixmap("/home/jollu/Desktop/skillbox/SkillBox/c++/skillbox_38/task1_button/bin/powerOn.png");
    CurrentButtonPixMap = ButtonOffPixMap;
    setGeometry(CurrentButtonPixMap.rect());
    connect(this, &QPushButton::clicked, this, &ImageButton::button_pushed);
}

void ImageButton::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.drawPixmap(e->rect(), CurrentButtonPixMap);

}

QSize ImageButton::sizeHint() const {
    return {100,100};
}

QSize ImageButton::minimumSizeHint() const {
    return sizeHint();
}

void ImageButton::keyPressEvent(QKeyEvent *e) {
    set_on();
}

void ImageButton::set_on() {
    pushSound->setMedia(QUrl::fromLocalFile("/home/jollu/Desktop/skillbox/SkillBox/c++/skillbox_38/task1_button/bin/pressButton.wav"));
    pushSound->play();
    CurrentButtonPixMap = ButtonOnPixMap;
    update();
    _isDown = true;
}

void ImageButton::set_off() {
    pushSound->setMedia(QUrl::fromLocalFile("/home/jollu/Desktop/skillbox/SkillBox/c++/skillbox_38/task1_button/bin/welcome.wav"));
    pushSound->play();
    CurrentButtonPixMap = ButtonOffPixMap;
    update();
    _isDown = false;
}

void ImageButton::button_pushed() {
    if(!_isDown){
        set_on();
    }else{
        set_off();
    }
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    ImageButton redButton(nullptr);
    redButton.setFixedSize(300,300);
    redButton.move(900,400);

    redButton.show();
    return QApplication::exec();
}